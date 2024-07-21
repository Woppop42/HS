#ifndef __EFFET_CONCRET__
#define __EFFET_CONCRET__
#include "effet.hpp"
#include "card.hpp"
#include <iostream>


class EffetConcret : public Effet
{
    public:
        void appliquerEffet() override;
};

#endif