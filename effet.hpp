#ifndef __EFFET__
#define __EFFET__
#include <iostream>

class Effet
{
public:
    virtual ~Effet() = default;
    virtual void appliquerEffet() = 0; // Méthode virtuelle pure
};

#endif