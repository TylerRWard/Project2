#include "hash_table.hpp"

HashTable::HashTable(int tableSize) : size(tableSize){
    table.resize(size);
}

int HashTable::hashFunction(const string& name) const{
    int sum =0;
    for(char c: name){
        sum+=static_cast<int>(c);
    }
    return sum%size;
}


void insert(const string& name, const string& phone){
    int index = hashFunction(name);
    table[index].emplace_back(name, phone);
}



    string getPhone(const string& name) const;
    void updatePhone(const string& name, const string& newPhone);
    int getMaxChainLength() const;