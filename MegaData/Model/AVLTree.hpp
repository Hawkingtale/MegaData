//
//  AVLTree.hpp
//  MegaData
//
//  Created by Hachtel, Matthew on 4/21/17.
//  Copyright © 2017 Hachtel, Matthew. All rights reserved.
//

#ifndef AVLTree_h
#define AVLTree_h

class AVLTree
{
private:
    
public:
    AVLTree();
    ~AVLTree();
    
    void insert(Type itemToInsert);
    void remove(Type value);
};



templamte <class Type>
int AVLTree<Type> :: heightDifference(BinarySearchTreeNode<Type> * node)
{
    int balance;
    int leftHeight = this->calculateHeight(node->getLeftChild());
    int rightHeight = this->calculateHeight(node->getRightChild());
    balance = leftHeight - rightHeight;
    return balance;
}

template <class Type>
BinarySeachTreeNode<Type> * AVLTree<Type> :: leftRotation(BinarySearchTreeNode<Type> * parent)
{
    BinarySearchTreeNode<Type> * changedNode;
    changedNode = parent->getLefthChild(parent);
    
    changedNode->setRightChild(parent);
    
    return changedNode;
}

template <class Type>
BinarySearchTreeNode<Type> * AVLTree<Type> :: rightRotation (binarySearchTreeNode<Type> * parent)
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
    BInarySearchTreeNode<Type> * changedNode;
    changedNode = parent->getRightChild();
    
    parent->setRightChild(leftROtation(changedNode));
    
    return rightRotation(parent);
}


template <class Type>
BinarySearchTreeNode<Type> * AVLTree<Type> :: leftRightRotation(BinarySearchTree<TYpe> * parent)
{
    BinarySearchTreeNode<Type> * changedNode;
    changedNode = parent->getLeftChild():
    
    parent->setLeftChild(rightRotation(changedNode));
    
    return leftRotation(parent);
}
#endif /* AVLTree_h */
