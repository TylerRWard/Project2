#ifndef HASH_TABLE_HPP
#define HASH_TABLE_HPP

using namespace std;
#include <list>

struct HashNode {
    string name;
    string phone;
    HashNode(const string& n, const string& p) : name(n), phone(p) {}
};

class HashTable {
private:
    vector<list<HashNode>> table;
    int size;
    int hashFunction(const string& name) const;

public:
    HashTable(int tableSize);
    void insert(const string& name, const string& phone);
    string getPhone(const string& name) const;
    void updatePhone(const string& name, const string& newPhone);
    int getMaxChainLength() const;
};

#endif