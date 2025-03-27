/*
* @author Tyler Ward
* @version March 26th 2025
*/

#include <iostream>
#include <fstream>
#include "AVLTree.hpp"
#include "hash_table.hpp"

using namespace std;

void processAVL(const string& filename) {
    AVLTree tree;
    ifstream file(filename);
    string name, phone;

    if (!file.is_open()) {
        cout << "Error opening file: " << filename << endl;
        return;
    }

    while (file >> name >> phone) {
        tree.insert(name, phone);
    }
    file.close();

    cout << "Tree Height: " << tree.getHeight() << endl;

    char command;
    while (true) {
        // Prompt user for input
        cout << "Enter command (g, u, q): ";
        cin >> command;
        cin.ignore(10000, '\n');  // Clear any remaining input (e.g., newline)

        if (command == 'q') {
            break;
        } else if (command == 'g') {
            cout << "Enter name to get phone: ";
            cin >> name;
            string phone = tree.getPhone(name);
            if (phone.empty()) {
                cout << "Name not found." << endl;
            } else {
                cout << phone << endl;
            }
        } else if (command == 'u') {
            cout << "Enter name and new phone: ";
            cin >> name >> phone;
            tree.updatePhone(name, phone);
        } else {
            cout << "Invalid command. Use 'g', 'u', or 'q'." << endl;
        }
    }
}

void processHash(const string& filename, int tableSize) {
    HashTable table(tableSize);
    ifstream file(filename);
    string name, phone;

    if (!file.is_open()) {
        cout << "Error opening file: " << filename << endl;
        return;
    }

    while (file >> name >> phone) {
        table.insert(name, phone);
    }
    file.close();

    cout << "Max Chain Length: " << table.getMaxChainLength() << endl;

    char command;
    while (true) {
        // Prompt user for input
        cout << "Enter command (g, u, q): ";
        cin >> command;
        cin.ignore(10000, '\n');  // Clear any remaining input (e.g., newline)

        if (command == 'q') {
            break;
        } else if (command == 'g') {
            cout << "Enter name to get phone: ";
            cin >> name;
            string phone = table.getPhone(name);
            if (phone.empty()) {
                cout << "Name not found." << endl;
            } else {
                cout << phone << endl;
            }
        } else if (command == 'u') {
            cout << "Enter name and new phone: ";
            cin >> name >> phone;
            table.updatePhone(name, phone);
        } else {
            cout << "Invalid command. Use 'g', 'u', or 'q'." << endl;
        }
    }
}

int main(int argc, char* argv[]) {
    // Check command-line arguments
    if (argc < 3 || (string(argv[2]) == "hash" && argc != 4)) {
        cout << "Usage: " << argv[0] << " <filename> <avl|hash> [hash_size]" << endl;
        return 1;
    }

    string filename = argv[1];
    string mode = argv[2];

    if (mode == "avl") {
        processAVL(filename);
    } else if (mode == "hash") {
        try {
            int tableSize = stoi(argv[3]);
            if (tableSize <= 0) {
                cout << "Hash table size must be positive." << endl;
                return 1;
            }
            processHash(filename, tableSize);
        } catch (const exception& e) {
            cout << "Invalid hash table size: " << argv[3] << endl;
            return 1;
        }
    } else {
        cout << "Invalid mode. Use 'avl' or 'hash'." << endl;
        return 1;
    }

    return 0;
}