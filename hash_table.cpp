/*
* @author Tyler Ward
* @version March25th 2025
*
*/


#include "hash_table.hpp"

HashTable::HashTable(int tableSize) : size(tableSize){
    table.resize(size);
}

int HashTable::hashFunction(const std::string& name) const{
    int sum = 0;
    for(char c: name){
        sum += static_cast<int>(c);
    }
    return sum % size;
}


void HashTable::insert(const std::string& name, const std::string& phone){
    int index = hashFunction(name);
    table[index].emplace_back(name, phone);
}



    std::string HashTable::getPhone(const std::string& name) const{
        int index = hashFunction(name);
        for (const auto& node: table[index]){
            if(node.name ==name){
                return node.phone;
            }
        }
        return" ";
    }
    void HashTable::updatePhone(const std::string& name, const std::string& newPhone){
        int index = hashFunction(name);
        for(auto& node:table[index]){
            if(node.name == name){
                node.phone = newPhone;
                return;
            }
        }
    }
    int HashTable::getMaxChainLength() const{
        int maxLength = 0;
        for(const auto& chain : table){
            int chainLength = static_cast<int>(chain.size());
            if(chainLength> maxLength){
                maxLength = chainLength;
            }
        }
        return maxLength;
    }