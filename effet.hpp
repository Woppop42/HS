#ifndef __EFFET__
#define __EFFET__
#include <iostream>
#include "effet.hpp"

class Card; // déclaration anticipée

class Effet
{
public:
    virtual ~Effet() = default;
    virtual void appliquerEffet() = 0; // Méthode virtuelle pure
    virtual void attaquer(Card& attaquant, Card& defenseur) = 0;
};

#endif