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
    testTree.preOrderTraversal();
    testTree.postOrderTraversal();
}
