//
//  Tree.hpp
//  MegaData
//
//  Created by Hachtel, Matthew on 4/13/17.
//  Copyright © 2017 Hachtel, Matthew. All rights reserved.
//

#ifndef Tree_h
#define Tree_h

#include <assert.h>

template <class Type>
class Tree
{ public:
    //Traversals
    virtual void inOrderTraversal() = 0;
    virtual void postOrderTraversal() = 0;
    virtual void preOrderTraversal() = 0;
    //Informational Methods
    virtual int getHeight() = 0;
    virtual int getSize() = 0;
    virtual bool isComplete() = 0;
    virtual bool isBalanced() = 0;
    //Data Methods
    virtual bool contains(Type value) = 0;
    virtual void insert(Type itemToInsert) = 0;
    virtual void remove(Type value) = 0;
};
#endif /* Tree_h */
