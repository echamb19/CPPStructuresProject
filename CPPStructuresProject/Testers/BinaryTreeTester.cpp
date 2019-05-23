//
//  BinaryTreeTester.cpp
//  CPPStructuresProject
//
//  Created by Chambers, Eden on 4/12/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include "BinaryTreeTester.hpp"

void BinaryTreeTester :: doTreeStuff()
{
    testTree.insert(4);
    testTree.insert(5);
    testTree.insert(9);
    testTree.insert(8);
    testTree.insert(6);
    testTree.insert(7);
    testTree.insert(2);
    testTree.insert(1);
    testTree.insert(3);
    
    testTree.inOrderTraversal();
    cout << " " << endl;
    testTree.preOrderTraversal();
    cout << " " << endl;
    testTree.postOrderTraversal();
    cout << " " << endl;
    cout << "Balanced: " <<  testTree.isBalanced() << endl;
    cout << "" << endl;
    cout << "Complete: " << testTree.isComplete() << endl;
    cout << " " << endl;

    
    thisTree.insert("Apple");
    thisTree.insert("Ape");
    thisTree.insert("Ant");
    thisTree.insert("Key");
    thisTree.insert("Middle");
    thisTree.insert("Fun");
    thisTree.insert("Lion");
    thisTree.insert("Bear");
    
    thisTree.inOrderTraversal();
    cout << " " << endl;
    thisTree.preOrderTraversal();
    cout << " " << endl;
    thisTree.postOrderTraversal();
    cout << " " << endl;
    cout << "Balanced: " << thisTree.isBalanced() << endl;
    cout << " " << endl;
    cout << "Complete: " << thisTree.isComplete() << endl;
    cout << " " << endl;

}
