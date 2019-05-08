//
//  BinaryTreeTester.hpp
//  CPPStructuresProject
//
//  Created by Chambers, Eden on 4/12/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef BinaryTreeTester_hpp
#define BinaryTreeTester_hpp

#include "../Model/Nodes/BinaryTreeNode.hpp"
#include "../Model/NonLinear/BinarySearchTree.hpp"
#include <iostream>

class BinaryTreeTester
{
private:
    BinaryTreeNode<int> testNode;
    BinarySearchTree<int> testTree;
    BinarySearchTree<string> thisTree; 
public:
    void doTreeStuff();
};

#endif /* BinaryTreeTester_hpp */
