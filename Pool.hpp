//
//  Pool.hpp
//  ShakerGameStudio-macosx
//
//  Created by Yonny Zohar on 25/01/2020.
//

#ifndef Pool_hpp
#define Pool_hpp

#include <stdio.h>

struct Bob{
    int a;
    int b;
};

class Pool{
private:
    Bob *pool;
    int curIndex;
    int poolSize;
    int recentlyDiscardedIndex;
    int versionIncrement;
    
    int *elementsStatus;
    int *recentlyDiscarded;
    int *totalUsageCount;
    
public:
    void init(int _numElements);
    int getAvaliable();
    void disposeElement(int handle);
    int isOccupied(int handle);
    bool isValid(int handle);
    Bob getElementActual(int handle);
};




#endif /* Pool_hpp */
