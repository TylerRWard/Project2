# Project 2: AVL Tree and Hash Table Implementation

## Overview
CSC36000 Programming Project #2, focusing on implementing and comparing AVL trees and chained hash tables for storing name/phone number pairs.

---

## Project Details

- **Name**: Tyler Ward  
- **Date**: March 26, 2025  
- **Platform**: macOS 

---

## Summary 
I started with the avl tree. That wasn't to bad I just used the github code and changed the ints to strings with a few minor changes. Then I went on to the hashing table. That was fairly straightward I think. The main function had a few issues but eventually got it. I added promps to make it more intuitive because I was getting confused.

---

## Compilation Instructions

```bash
g++ -std=c++11 -o project2 main.cpp AVLTree.cpp AVLTreeNode.cpp hash_table.cpp

./project2 <filename> <avl|hash> [hash_size]