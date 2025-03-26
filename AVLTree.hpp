#ifndef _AVL_TREE_HPP_
#define _AVL_TREE_HPP_

#include "AVLTreeNode.hpp"
#include <iostream>
#include <string>

class AVLTree{
private:
    AVLTreeNode *_root;
public:
    AVLTree() : _root(nullptr) {}

    AVLTreeNode* find(std::string& valToFind) const;

    void insert(const std::string& name, const std::string& phone);
    void remove(const std::string& name);
    std::string getPhone(const std::string& name)const;
    void updatePhone(const std::string& name, const std::string& newPhone);
    int getHeight() const;

    std::ostream& print(std::ostream &os) const;
};

#endif
