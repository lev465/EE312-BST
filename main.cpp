// Sample driver
// EE 312 Fall 2018
//
// The BST should work for any data type or object.
// Other user created objects must have the << operator overloaded for 
// output.
//

#include <iostream>
#include <fstream>
#include "BST312.h"

using namespace std;

template <typename T>
void print(vector<T> vec){
    for(int i = 0 ; i < vec.size() ; i++){
        cout << vec[i] << endl;;
    }
}

int main() {

    ifstream inFile;
    inFile.open("test.txt");

    BST_312<string> bst;
   
    string s;
    inFile >> s;
    while (inFile) {;
        cout << "inserting ... " << s << endl;
        bst.insertItem(s);
        inFile >> s;
    }

    cout << "postorder traversal is " << endl;
    print(bst.postOrderTraversal());
    cout << endl;

    cout << "preorder traversal is " << endl;
    print(bst.preOrderTraversal());
    cout << endl;

    cout << "inorder traversal is " << endl;
    print(bst.inOrderTraversal());
    cout << endl;

    cout << "Remove items " << endl;
    cout << "number of nodes in tree before delete is " << bst.countNodes() << endl;
    s = "tree";
    bst.deleteItem(s);
    print(bst.postOrderTraversal());
    cout << endl;
    cout << "number of nodes in tree after delete is " << bst.countNodes() << endl;
    cout << endl;

    BST_312<int> bst2;
    for(int i=20; i>10; i--)
        bst2.insertItem(i);
    for (int i=0; i<11; i++)
        bst2.insertItem(i);

    cout << "postorder traversal is " << endl;
    print(bst2.postOrderTraversal());
    cout << endl;

    cout << "preorder traversal is " << endl;
    print(bst2.preOrderTraversal());
    cout << endl;

    cout << "inorder traversal is " << endl;
    print(bst2.inOrderTraversal());
    cout << endl;

    cout << "Is 0 in tree - " << bst2.isItemInTree(0) << endl;
    cout << "Remove items - 0 " << endl;
    bst2.deleteItem(0);
    cout << "preorder traversal is " << endl;
    print(bst2.preOrderTraversal());
    cout << "Remove items - 22 " << endl;
    cout << "number of nodes in tree before delete is " << bst2.countNodes() << endl;
    bst2.deleteItem(22);
    cout << "number of nodes in tree after delete is " << bst2.countNodes() << endl;
    cout << "Is 22 in tree - " << bst2.isItemInTree(22) << endl;

    cout << "Remove items - all " << endl;
    cout << "number of nodes in tree before delete is " << bst2.countNodes() << endl;
    bst2.makeEmpty();
    cout << "number of nodes in tree after delete is " << bst2.countNodes() << endl;
    cout << "Is 0 in tree - " << bst2.isItemInTree(0) << endl;

}

