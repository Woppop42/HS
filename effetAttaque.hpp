#include "effet.hpp"
#include "monster.hpp"
#include "card.hpp"
#include "spell.hpp"
#include "hero.hpp"
#include <algorithm>
#include <iostream>

class EffetAttaque : public Effet 
{
    public:
        void appliquerEffet() override;
        void attaquer(Card& attaquant, Card& defenseur) override;


};