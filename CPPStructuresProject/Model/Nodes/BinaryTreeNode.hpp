//
//  BinaryTreeNode.hpp
//  CPPStructuresProject
//
//  Created by Chambers, Eden on 4/12/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef BinaryTreeNode_h
#define BinaryTreeNode_h

#include "Node.hpp"

template <class Type>
class BinaryTreeNode : public Node<Type
{
private:
    BinaryTreeNode<Type> * root;
    BinaryTreeNode<Type> * leftChild;
    BinaryTreeNode<Type> * rightChild;
public:
    BinaryTreeNode<Type>();
    BinaryTreeNode<Type>(Type);
    
    BinaryTreeNode<Type> * getRootNode;
    BinaryTreeNode<Type> * getLeftChild;
    BinaryTreeNode<Type> * getRightChild;
    
    void setRootNode(BinaryTreeNode<Type> * root);
    void setLeftNode(BinaryTreeNode<Type> * leftChild);
    void setRightNode(BinaryTreeNode<Type> * rightChild);
};

#endif /* BinaryTreeNode_h */
