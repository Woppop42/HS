#ifndef __DB__
#define __DB__
#include "sqlite3.h"
#include <string>
#include "card.hpp"
#include "monster.hpp"
#include "hero.hpp"
#include "spell.hpp"

class DB
{
    public: 
        DB(const std::string dbName);
        ~DB();

        bool executeQuery(const std::string& query);
        bool createTable();
        bool insertCard(const Card& card);
        bool insertMonster(const Monster& monster);
        bool insertSpell(const Spell& spell);
        bool insertHero(const Hero& spell);

    private:
        sqlite3* db;
        std::string dbName;


};


#endif