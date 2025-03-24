#ifndef _AVL_TREE_HPP_
#define _AVL_TREE_HPP_

#include "AVLTreeNode.hpp"

#include <iostream>

class AVLTree
{
private:
    AVLTreeNode *_root;
public:
    AVLTree() : _root(nullptr) {}

    AVLTreeNode* find(std::string& valToFind) const;

    void insert(const string& name, const string& phone);
    void remove(const string& name);

    string getPhone(const string& name)const;
    void updatePhone(const string& name, const string& newPhone);
    int getHeight() const;

    std::ostream& print(std::ostream &os) const;
};

#endif
