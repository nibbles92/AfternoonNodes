//
//  HashNode.hpp
//  AfternoonNodes
//
//  Created by Rockne, Dylan on 5/9/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#ifndef HashNode_hpp
#define HashNode_hpp

#include <iostream>

namespace CTECData 
{
    template <class Type>
    class HashNode
    {
    private:
        int key;
        Type value;
        HashNode();
        
    public:
        HashNode(int key, const Type& value);
        int getKey();
        Type getValue();
    };
}

#endif /* HashNode_hpp */
