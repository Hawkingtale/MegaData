//
//  IntNodeArray.hpp
//  MegaData
//
//  Created by Hachtel, Matthew on 2/8/17.
//  Copyright © 2017 Hachtel, Matthew. All rights reserved.
//

##ifndef IntNodeArray_hpp
#define IntNodeArray_hpp

#include "IntNode.hpp"

class IntNodeArray
{
private:
    IntNode * front;
    int size;
    
public:
    IntNodeArray(int size);
    void setAtIndex(int index, int value);
    int getFromIndex(int index);
    int getSize();
};

#endif /* IntNodeArray_hpp */
