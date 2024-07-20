#ifndef __DISPLAY__
#define __DISPLAY__
#include "monster.hpp"
#include "card.hpp"
#include "spell.hpp"
#include <iostream>

class Display
{
    public:
        static void getMonsterInfos(const Monster& monster);
};

#endif