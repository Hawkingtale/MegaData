//
//  AVLTree.hpp
//  MegaData
//
//  Created by Hachtel, Matthew on 4/21/17.
//  Copyright © 2017 Hachtel, Matthew. All rights reserved.
//

#ifndef AVLTree_h
#define AVLTree_h

#include "BinarySearchTreeNode.hpp"
#include "BinarySearchTree.hpp" 
template <class Type>
class AVLTree :public BinarySearchTree<Type>
{
private:
    BinarySearchTree<Type> * leftRotation(BinarySearchTreeNode<Type> * parent);
    BinarySearchTree<Type> * rightRotation(BinarySearchTreeNode<Type> * parent);
    BinarySearchTree<Type> * leftRightRotation(BinarySearchTreeNode<Type> * parent);
    BinarySearchTree<Type> * rightLeftRotation(BinarySearchTreeNode<Type> * parent);
    
    BinarySearchTree<Type> * balanceSubTree(BinarySearchTreeNode<Type> * parent);
    
    BinarySearchTree<Type> * insertNode(BinarySearchTreeNode<Type> * parent);
    BinarySearchTree<Type> * removeNode(BinarySearchTreeNode<Type> * parent);
    
    int heightDifference(BinarySearchTreeNode<Type> * parent);
    
public:
    AVLTree();
    ~AVLTree();
    
    void insert(Type itemToInsert);
    void remove(Type value);
};

template <class Type>
AVLTree<Type> :: AVLTree() : BinarySearchTree<Type>()
{
    this->root = nullptr;
}

template <class Type>
AVLTree<Type> :: ~AVLTree()
{
    
}



template <class Type>
int AVLTree<Type> :: heightDifference(BinarySearchTreeNode<Type> * node)
{
    int balance;
    int leftHeight = this->calculateHeight(node->getLeftChild());
    int rightHeight = this->calculateHeight(node->getRightChild());
    balance = leftHeight - rightHeight;
    return balance;
}

template <class Type>
BinarySearchTreeNode<Type> * AVLTree<Type> :: leftRotation(BinarySearchTreeNode<Type> * parent)
{
    BinarySearchTreeNode<Type> * changedNode;
    changedNode = parent->getLefthChild(parent);
    
    changedNode->setRightChild(parent);
    
    return changedNode;
}

template <class Type>
BinarySearchTreeNode<Type> * AVLTree<Type> :: rightRotation(BinarySearchTreeNode<Type> * parent)
{
    BinarySearchTreeNode<Type> * changedNode;
    changedNode = parent->getRightChild();
    
    parent->setRightChild(changedNode->getLeftChild());
    
    changedNode->setLeftChild(parent);
    
    return changedNode;
}

template <class Type>
BinarySearchTreeNode<Type> * AVLTree<Type> :: rightLeftRotation(BinarySearchTree<Type> * parent)
{
    BinarySearchTreeNode<Type> * changedNode;
    changedNode = parent->getRightChild();
    
    parent->setRightChild(leftROtation(changedNode));
    
    return rightRotation(parent);
}


template <class Type>
BinarySearchTreeNode<Type> * AVLTree<Type> :: leftRightRotation(BinarySearchTree<Type> * parent)
{
    BinarySearchTreeNode<Type> * changedNode;
    changedNode = parent->getLeftChild();
    
    parent->setLeftChild(rightRotation(changedNode));
    
    return leftRotation(parent);
}

template <class Tyep>
BinarySearchTreeNode<Type> * AVLTree<Type> :: balanceSubTree(BinarySearchTreeNode<Type> * parent)
{
    int balanceFactor = heightDifference(parent);
    
    if(balanceFactor > 1)
    {
        if(heightDifference(parent->getLeftChild()) > 0)
        {
            parent = leftRotation(parent);
        }
        
        else
        {
            parent = leftRightRotation(parent)
        }
    }
    else if(balanceFactor < -1)
    {
        if(heightDifference(parent->getRightChild()) > 0)
        {
            parent = rightLeftRotation(parent)
        }
        
        else
        {
            parent = rightRotation(parent)
        }
    }
    return parent;
}



template <class Type>
BinarySearchTreeNode<Type> * AVLTree<Type> :: removeNode(BinarySearchTreeNode<Type> * parent, Type inserted)
{
    
}

template <class Type>
BinarySearchTreeNode<Type> * AVLTree<Type> :: insertedNode(BinarySearchTreeNode<Type> * parent, Type inserted)
{
    if(parent == nullptr)
    {
        parent = new BinarySearchTreeNode<Type>(inserted);
        return parent;
    }
    else if(inserted < parent->getNodeData())
    {
        parent->setLeftChild(insertedNode(parent->getLeftChild(), inserted));
        parent = balancedSubTree(parent);
    }
    else if(inserted > parent->getNodeData())
    {
        
        parent->setRightChild(insertedNode(parent->getRightChild(), inserted));
        parent = balanceSubTree(parent);
    }
    return parent;
}


template <class Type>
void AVLTree<Type> :: insert(Type item)
{
    insertedNode(this->getRoot(), item);
}

template <class Type>
void AVLTree<Type :: remove(Type item)
{
    removeNode(this->getRoot(), item);
}
#endif /* AVLTree_h */
