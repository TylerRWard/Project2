#ifndef NODE_HPP
#define NODE_HPP

#include <string>
#include <iostream>

class AVLTreeNode {
private:
    std::string _name;
    std::string _phone; //number
    AVLTreeNode* _left;
    AVLTreeNode* _right;
    AVLTreeNode* _parent;
    int _height;

public:
    AVLTreeNode(const std::string& name, const std::string& phone)
        : _name(name), _phone(phone), _left(nullptr), _right(nullptr), _parent(nullptr), _height(1) {}

    std::string& data() { return _name; }
    const std::string& data() const { return _name; }
    std::string& phoneNumber() { return _phone; }
    const std::string& phoneNumber() const { return _phone; }
    AVLTreeNode*& left() { return _left; }
    AVLTreeNode*& right() { return _right; }
    AVLTreeNode*& parent() { return _parent; }
    int& height() { return _height; }
    int height() const { return _height; }
    bool isLeaf() const { return !_left && !_right; }
    int depth() const;  // Defined in AVLTreeNode.cpp
    std::ostream& print(std::ostream& toStream) const;  // Defined in AVLTreeNode.cpp
};

#endif