#ifndef HASH_TABLE_HPP
#define HASH_TABLE_HPP

#include <vector>
#include <list>
#include <string>

struct HashNode {
    std::string name;
    std::string phone;
    HashNode(const std::string& n, const std::string& p) : name(n), phone(p) {}
};

class HashTable {
private:
    std::vector<std::list<HashNode>> table;
    int size;
    int hashFunction(const std::string& name) const;

public:
    HashTable(int tableSize);
    void insert(const std::string& name, const std::string& phone);
    std::string getPhone(const std::string& name) const;
    void updatePhone(const std::string& name, const std::string& newPhone);
    int getMaxChainLength() const;
};

#endif