//
//  AVLTree.hpp
//  CPPStructuresProject
//
//  Created by Chambers, Eden on 4/30/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef AVLTree_h
#define AVLTree_h

#include "BinarySearchTree.hpp"

template<class Type>
class AVLTree : public BinarySearchTree<Type>
{
private:
    BinaryTreeNode<Type> * leftHeavyRotation (BinaryTreeNode<Type> * parent);
    BinaryTreeNode<Type> * rightHeavyRotation (BinaryTreeNode<Type> * parent);
    BinaryTreeNode<Type> * leftRightRotation (BinaryTreeNode<Type> * parent);
    BinaryTreeNode<Type> * rightLeftRotation (BinaryTreeNode<Type> * parent);
    
    BinaryTreeNode<Type> * balanceSubTree (BinaryTreeNode<Type> * parent);
    
    BinaryTreeNode<Type> * insertNode(BinaryTreeNode<Type> * parent, Type value);
    BinaryTreeNode<Type> * removeNode(BinaryTreeNode<Type> * parent, Type value);
    
    int heightDifference(BinaryTreeNode<Type> * parent);

public:
    AVLTree();
    
    void insert(Type itemToInsert);
    void remove(Type value);
};

template<class Type>
AVLTree<Type> :: AVLTree() : BinarySearchTree<Type>()
{
    this->root = nullptr;
}

template<class Type>
void AVLTree<Type> :: insert(Type item)
{
    insertNode(this->getRoot(), item);
}

template<class Type>
void AVLTree<Type> :: remove(Type item)
{
    removeNode(this->getRoot(), item);
}

//
template<class Type>
BinaryTreeNode<Type> * AVLTree<Type> :: insertNode(BinaryTreeNode<Type> * parent, Type inserted)
{
    if(parent == nullptr)
    {
        parent = new BinaryTreeNode<Type>(inserted);
        
        if(this->getRoot() == nullptr)
        {
            this->setRoot(parent);
        }
        return parent;
    }
    else if(inserted < parent->getData())
    {
        parent->setLeftChild(insertNode(parent->getLeftChild(), inserted));
        parent == balanceSubTree(parent);
    }
    else if(inserted > parent->getData())
    {
        parent->setRightChild(insertNode(parent->getRightChild(), inserted));
        parent = balaneSubTree(parent);
    }
    return parent;
}

template<class Type>
BinaryTreeNode<Type> * AVLTree<Type> :: removeNode(BinaryTreeNode<Type> * parent, Type inserted)
{
    if(parent == nullptr)
    {
        return parent;
    }
    
    if(inserted < parent->getData())
    {
        parent->setLeftchild(removeNode(parent->getLeftChild(), inserted));
    }
    else if(inserted > parent->getData())
    {
        parent->setrightchild(removeNode(parent->getRightChild(), inserted));
    }
    else
    {
        BinaryTreeNode<Type> * temp;
        if(parent->getLeftChild() == nullptr && parent->getRightChild() == nullptr)
        {
            temp = parent;
            delete temp;
        }
        else if(parent->getLeftChild() == nullptr)
        {
            *parent = *parent->getRightChild();
        }
        else if(parent->getrightChild() == nullptr)
        {
            *parent = *parent->getLeftChild();
        }
        else
        {
            BinaryTreeNode<Type> * leftMost = this->getLeftMostChild(parent->getRightchild());
            parent->setData(leftMost->getData());
            parent->setRightChild(removeNode(parent->getRightChild(), inserted));
        }
    }
    
    if(parent ==nullptr)
    {
        return parent;
    }
    
    return balanceSubTree(parent);
}

/*
 - if a negative value is returned than it means that the right side of the tree is bigger than the left
 */
template<class Type>
int AVLTree<Type> :: heightDifference(BinaryTreeNode<Type> * node)
{
    int balance;
    int leftHeight = this->calculateHeight(node->getLeftChild());
    int rightHeight = this->calculateHeight(node->getRightChild());
    balance = leftHeight - rightHeight;
    return balance;
}

template<class Type>
BinaryTreeNode<Type> * AVLTree<Type> :: balanceSubTree (BinaryTreeNode<Type> * parent)
{
    int balanceFactor = heightDifference(parent);
    
    if(balanceFactor > 1)
    {
        if(heightdifference(parent->getLeftchild()) > 0)
        {
            parent = leftHeavyRotation(parent);
        }
        else
        {
            parent = leftRightRotation(parent);
        }
    }
    else if(balanceFactor < -1)
    {
        if(heightDifference(parent->getRightChilc()) > 0)
        {
            parent = rightLeftRotation(parent);
        }
        else
        {
            parent = rightHeavyRotation(parent);
        }
    }
    return parent;
}

template<class Type>
BinaryTreeNode<Type> * AVLTree<Type> :: leftHeavyRotation(BinaryTreeNode<Type> * parent)
{
    BinaryTreeNode<Type> * changeNode;
    changeNode = parent->getLeftChild();
    
    parent->setLeftChild(changeNode->getRightChild());
    
    changeNode->setRightChild(parent);
    parent->setRootNode(changeNode);
    
    return changeNode;
}

template<class Type>
BinaryTreeNode<Type> * AVLTree<Type> :: rightHeavyRotation(BinaryTreeNode<Type> * parent)
{
    BinaryTreeNode<Type> * changeNode;
    changeNode = parent->getRightChild();
    
    parent->setRightChild(changeNode->getLeftChild());
    
    changeNode->setLeftChild(parent);
    parent->setRootNode(changeNode);
    
    return changeNode;
}

template<class Type>
BinaryTreeNode<Type> * AVLTree<Type> :: rightLeftRotation(BinaryTreeNode<Type> * parent)
{
    BinaryTreeNode<Type> * changedNode;
    changedNode = parent->getRightChild();
    
    parent->setRightChild(leftHeavyRotation(changedNode));
    
    return rightHeavyRotation(parent);
}

template<class Type>
BinaryTreeNode<Type> * AVLTree<Type> :: leftRightRotation(BinaryTreeNode<Type> * parent)
{
    BinaryTreeNode<Type> * changedNode;
    changedNode = parent->getLeftChild();
    
    parent->setLeftChild(rightHeavyRotation(changedNode));
    
    return leftHeavyRotation(parent); 
}

#endif /* AVLTree_h */
