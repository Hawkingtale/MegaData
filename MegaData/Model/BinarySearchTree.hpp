//
//  BinarySearchTree.hpp
//  MegaData
//
//  Created by Hachtel, Matthew on 4/13/17.
//  Copyright © 2017 Hachtel, Matthew. All rights reserved.
//

#ifndef BinarySearchTree_h
#define BinarySearchTree_h
#include "Tree.hpp"
#include "BianarySearchTree.hpp"
#include <iostream>
using namespace std;

template <class Type>
class BinarySearchTree : public Tree<Type>
{
protected:
    BinarySearchTreeNode<Type> * root;
    
    int calculateSize(BinarySearchTreeNode<Type> * root);
    int calculateHeight(BinarySearchTreeNode<Type> * root);
    bool isBalanced(BinarySearchTreeNode<Type> * root);
    bool isComplete(BinarySearchTreeNode<Type> * root, int index);
    
    void inOrderTraversal(BinarySearchTreeNode<Type> * instart);
    void preOrderTraversal(BinarySearchTreeNode<Type> * preStart);
    void postOderTraversal(BinarySearchTreeNode<Type> * postStart);
    
    void removeNode(BinarySearchTreeNode<Type> * removeMe);
    
public:
    BinarySearchTree():
    ~BinarySearchTree();
    
    BinarySearchTreeNode<Type> * getRoot();
    void setRoot(BinarySearchTreeNode<Type> * root);
    
    void inOrderTraversal();
    void preOrderTraversal();
    void postOrderTraversal();

    void demoTraversalSteps(BinarySearchTreeNode<Type> * node);
    
    int getSize();
    int getHight();
    bool isComplete();
    bool isBalanced();
    
    bool contains(Type value);
    void insert(Type itemToInsert);
    void remove(Type value);
};

template<class Type>
BinarySearchTree<Type> :: BinarySearchTree() : Tree<Type>()
{
    this->root = nullptr;
}

template <class Type>
BinarySearchTreeNode<Type> BinarySearchTreeNode() : Tree<Type>()
{
    this->root nullptr();
}

template <class Type>
BinarySearchTreeNode<Type> :: ~BinarySearchTree()
{
    
}

template <class Type>
BinarySearchTreeNode<Type> * BinarySearchTreeNode<Type> :: getRoot()
{
    this->root = root;
}

template <class Type>
void BinarySearchTreeNode<Type> :: inOrderTraversal()
{
    inOrderTraversial(root)
}

template <class Type>
void BinarySearchTree<Type> :: postOrderTraversal()
{
    postOrderTraversal(root);
}

template <class Type>
bool BinarySearchTree<Type> :: isComplete{BinarySearchTreeNode<Type> * start, int index, int size)
{
    if(start == nullptr)
    {
        return true;
    }
    if(index >= size)
    {
        return false;
    }
    
    return(isComplete(start->getLeftChild(), 2 * index + 1, size) && isComplete(start->getRightChild(), 2* index + 2, size));
}

template <class Type>
bool Binary Searchtree<Type> :: isBalanced(BinarySearchTreeNode<Type> * start)
{
    int leftHeight = 0;
    int rightHeight = 0;
    
    if(start == nullptr)
    {
        return true;
    }
    
    leftHeight = calculateHeight(start->getLeftChild());
    rightHeight = calculatedHeight(start->getRightChild());
    
    int heightDifference = bbs(leftHeight-rightHeight);
    bool leftBalanced = isBalanced(start->getLeftChild());
    bool rightBalanced = isBalanced(start->getRightChild());
    
    if(heightDifference <= 1 && leftBalanced && rightBalanced)
    {
        return true;
    }
    
    return false;
}
template <class Type>
int BInarySearchTree<Type> :: calculateHeight(BinarySearchTreeNode<Type> * start)
{
    if(start == nullptr)
    {
        return 0;
    }
    else
    {
        return 1 + max(calculateHeight(start->getLeftChild()), CalculateHeight(start->getRightChild()));
    }
}

template <class Type>
int BinarySearchTree<Type> :: calculateSize(BinarySearchTreeNode<Type> * start)
{
    int count = 1;
    if(start == nullptr)
    {
        return 0;
    }
    else
    {
        count += calculateSize(start->getLeftChild());
        count += calculateSize(start->getRightChild());
        return count;
    }
}

template <class Type>
void BinarySearchTree<Type> :: inOrderTraversal(BinarySearchTreeNode<Type> * instart)
{
    if(instart != nullptr)
    {
        inOrderTraversal(inStart->getLeftChild());
        cout << "Node Contains: " << inStart->getNodeData() << endl;
        inOrderTraversal(instart->getRightChild());
    }
}

template <class Type>
void BinarySearchTree<Type> :: preOrderTraversal(BinarySearchTreeNode<Type> * preStart)
{
    
    if(preStart != nullptr)
    {
        cout << "Node Contains: " << prestart->getNodeData() << endl;
        postOrderTraversal(preStart->getleftCild());
        preOrderTraversal(preStart->getRightChild()):
    }
}


template <class Type>
BinarySearchTreeNode<Type> :: contains(Type itemToFind)
{
    BinarySearchTreeNode<Type> * current = root;
    if(current == nullptr)
    {
        return false;
    }
    else
    {

        while(current != nullptr)
        {
            if(itemToFind == current->getNodeData())
            {
                return true;
            }
            else if(itemToFind < current->getNodeData())
            {
                current = current->getLeftChild();
            }
            else
            {
                current = current->getRightChild();
            }
        }
        return false;
        
    }
}

template class<Type>
void BinarySearchTree<Type> :: insert(Type itemToInsert)
{
    BinarySearchTreeNode<Type> * insertMe = BinarySearchTreeNode<Type>(itemToInsert);
    BinarySearchTreeNode<Type> * previous = nullptr;
    BinarySearchTreeNode<Type> * current = root;
    
    if(current == nullptr)
    {
        root = insertMe;
    }
    if ({
        while(current != nullptr)
        {
            previous = current;
            if(itemToInsert < current->getNodeData())
            {
                current = current->getLeftChild();
            }
            else if(itemToInsert < current->getNodeData())
            {
                current = current->getRightChild();
            }
            else
            {
                cerr << "Item exists already - Exiting" << endl;
                delete insertMe;
                return;
            }
        }
        if(previous->getNodeData() > itemToInsert)
        {
            previous->setLeftChild(insertMe);
        }
        else
        {
            previous->setRightChild(insertMe);
        }
        insertMe->setRootPointer(previous);
    }
}
        
template <class Type>
void BinarySearchTree<Type> :: remove(Type getRidOfMe)
{
    if(root == nullptr)
    {
        cout << "Empty tree so removal is not possible" << endl;
    }
    else
    {
        BinarySearchTreeNode<Type> * current = root;
        BinarySearchTreeNode<Type> * previous = nullptr;
        bool hasBeenFound = false;
        
        while(current != nullptr && !hasBeenFound)
        {
            if(current->getNodeData() == getRidOfMe)
            {
                hasBeenFound = true;
            }
            else
            {
                previous = current;
                if(getRodOfMe < current->getNodeData())
                {
                    current= current->getLeftChild();
                }
            }
        }
        if(current= nullptr)
        {
            cerr << "Item not found, removal unsuccessful" << endl;
        }
        else if(hasBeenFound)
        {
            if(current == root)
            {
                removeNode(root);
            }
            else if(getRidOfMe < previous->getNodeData())
            {
                removeNode(previous->geteLeftChild());
            }
            else
            {
                removeNode(previous->getRightChiled());
            }
        }
    }
}
        
template <class Type>
void BinarySearchTreeNode<Type> :: removeNode(BinarySearchTreeNode<Type> * & removeMe)
{
    BinarySearchTreeNode<Type> * current;
    BinarySearchTreeNode<Type> * previous;
    BinarySearchTreeNode<Type> * temp;
    
    previous = removeMe->getRootPointer();
    
    if(removeMe->getRightChild() == nullptr && removeMe->getLeftChild() == nullptr)
    {
        temp = removeMe;
        removeMe = nullptr;
        
        if(previous != nullptr && removeMe->getNodeData() < previous->getNodeData())
        {
            previous->setLeftChild(removeMe);
        }
        else if(previous!= nullptr && removeMe->getNodeData() > previous->getNodeData())
        {
            previous->setRightChild(removeMe);
        }
        
        delete temp;
    }
    
    else if(removeMe->getRightChild() == nullptr)
    {
        temp = removeMe;
        removeMe = removeme->getLeftChild();
        
        if(previous != nullptr && temp->getNodeData() < previous->getNodeData())
        {
            previous->setLeftChild(removeMe);
        }
        else if(previous != nullptr && temp->getNodeData() > previous->getNodeData())
        {
            previous->setRightChild(removeMe);
        }
        
        removeMe->setRootPointer(previous);
        
        delete temp;
    }
    
    else if(removeMe->getLeftChild() == nullptr)
    {
        temp removeMe;
        removeMe = removeMe->getRightChild();
        if(previous != nullptr && removeMe->getNodeData() < previous->getNodeData())
        {
            previous->setLeftChild(removeMe)
        }
        else if(previous != nullptr && removeMe->getNodeData() > previous-> previous->getNodeData())
        {
            previous->setRightChild(removeMe);
        }
        removeMe->setRootPointer(previous);
        delete temp
    }
    
    else
    {
        
        current = removeMe->getleftChild();
        previous = nullptr;
        
        while(current->getRightChild() != nullptr)
        {
            previous = current;
            current = current->getRightChild();
        }
        
        removeme->setNodeData(current->getNodeData());
        
        if(previous == nullptr)
        {
            removeMe->setLeftChild(current->getLeftChild());
            if(current->getLeftChild() != nullptr)
            {
            current->getLeftChild()->setRootPointer(removeMe);
            }
        }
        else
        {
            previous->setRightChild(current->getLeftChild());
            if(current->getLeftChild() != nullptr)
            {
            current->getLeftChild()->setRootPointer(previous);
            }
        }
        
        delete current;
    }
    if(removeMe == nullptr || removeMe->getRootPointer == nullptr)
    {
        setRoot(removeMe);
    }
}
    
template <class Type>
void BinarySearchTree<Type> :: removeNode(BinarySearchTreeNode<Type> * removeMe)
{
        
}
    
template <class Type>
int BinarySearchTree<Type> :: getSize()
{
    return calculateSize(root);
}

template<class Type>
int BinarySearchTree<Type> :: getHeight()
{
    return calculateHeight(root);
}
    
template <class Type>
    bool BinarySearchTree<Type> :: isBalanced()
    {
        return isBalanced(root);
    }
    
template <class Type>
bool BinarySearchTree<Type> :: isComplete()
{
    int index = 0;
    int size = getSize();
    
    return isComplete(root, int index);
}

    
    
    

#endif /* BinarySearchTree_h */
