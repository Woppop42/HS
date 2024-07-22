#ifndef __EFFET_ATTAQUE__
#define __EFFET_ATTAQUE__
#include "card.hpp"
#include <algorithm>
#include <iostream>

class Card;

class EffetAttaque 
{
    public:
        EffetAttaque() = default;
        virtual ~EffetAttaque() = default;
        void appliquerEffet();
        void attaquer(Card& attaquant, Card& defenseur);


};

#endif