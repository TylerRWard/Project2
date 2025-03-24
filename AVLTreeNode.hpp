#ifndef _AVL_TREE_NODE_HPP_
#define _AVL_TREE_NODE_HPP_
#include <string>
#include <iostream>

class AVLTreeNode
{
private:
    std::string _name;
    std::string _phone; //number
    AVLTreeNode* _left;
    AVLTreeNode* _right;
    AVLTreeNode* _parent;
    int _height;

   
public:
    AVLTreeNode(const std::string& name, const std::string& phone) 
        : _name(name),_phone(phone), _left(nullptr), _right(nullptr), _parent(nullptr), _height(1) {}
    
    
// Accessors and mutators
    std::string& data() { return _name; }  // Key accessor
    const std::string& data() const { return _name; }
    std::string& phoneNumber() { return _phone; }  // Phone accessor
    const std::string& phoneNumber() const { return _phone; }
    AVLTreeNode*& left() { return _left; }
    AVLTreeNode*& right() { return _right; }
    AVLTreeNode*& parent() { return _parent; }
    int& height() { return _height; }
    int height() const { return _height; }

    bool isLeaf() const { return !_left && !_right; }
    int depth() const;  // Defined in node.cpp
    std::ostream& print(std::ostream& toStream) const;  // Defined in node.cpp

    AVLTreeNode* left() const {return _left;}
    AVLTreeNode* &left() {return _left;}

    AVLTreeNode* right() const {return _right;}
    AVLTreeNode* &right() {return _right;}

    AVLTreeNode* parent() const {return _parent;}
    AVLTreeNode* &parent() {return _parent;}

    int height() const {return _height;}
    int& height() {return _height;}


    bool isLeaf() const { return !_left && !_right; }//{return ( (_left==nullptr) && (_right==nullptr) );}
    bool isRoot() const { return !_parent; } // (_parent==nullptr)

    int depth() const;

    std::ostream& print(std::ostream &toStream) const;
};








#endif
