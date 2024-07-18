#ifndef __EFFET__
#define __EFFET__
#include <iostream>

class Effet
{
public:
    virtual ~Effet(){};
    virtual void appliquerEffet() = 0;
};

#endif