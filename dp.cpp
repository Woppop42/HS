#include "db.hpp"
#include <iostream>

DB::DB(const std::string dbName) : dbName(dbName), db(nullptr)
{
    if(sqlite3_open(dbName.c_str(), &db))
    {
        std::cerr << "Ne peut pas ouvrir la base de données" << sqlite3_errmsg(db) << std::endl;
        db = nullptr;
    }
    else 
    {
        std::cout << "Base de données ouverte avec succès" << std::endl;
    }
}

DB::~DB()
{
    if(db)
    {
        sqlite3_close(db);
    }
}

bool DB::executeQuery(const std::string& query)
{
    char* errorMsg = nullptr;
    // rc = return code
    int rc = sqlite3_exec(db, query.c_str(), 0, &errorMsg);
    if (rc != SQLITE_OK)
    {
        std::cerr << "SQL error : " << errorMsg << std::endl;
        sqlite3_free(errorMsg);
        return false;
    }

    return true;
}

bool DB::createTable()
{
    std::string createTableSQL = R"(
        CREATE TABLE IF NOT EXISTS Cards (
            ID INTEGER PRIMARY KEY AUTOINCREMENT,
            Name TEXT NOT NULL,
            Mana INTEGER,
            Type TEXT,
            CardClass TEXT,
            Atk INTEGER,
            Vie INTEGER,
            Rarity TEXT
        );
    )";
    std::string createMonstersTableSQL = R"(
        CREATE TABLE IF NOT EXISTS Monsters (
            ID INTEGER PRIMARY KEY AUTOINCREMENT,
            CardID INTEGER,
            FOREIGN KEY(CardID) REFERENCES Cards(ID)
        );
    )";
    std::string createHeroesTableSQL = R"(
        CREATE TABLE IF NOT EXISTS Heroes (
            ID INTEGER PRIMARY KEY AUTOINCREMENT,
            CardID INTEGER,
            MinPdv INTEGER,
            MaxPdv INTEGER,
            CurrentPdv INTEGER,
            HeroClass TEXT,
            MinMana INTEGER,
            MaxMana INTEGER,
            CurrentMana INTEGER,
            Armor INTEGER,
            FOREIGN KEY(CardID) REFERENCES Cards(ID)
        );
    )";
    std::string createSpellsTableSQL = R"(
        CREATE TABLE IF NOT EXISTS Spells (
            ID INTEGER PRIMARY KEY AUTOINCREMENT,
            CardID INTEGER,
            Effect TEXT,
            FOREIGN KEY(CardID) REFERENCES Cards(ID)
        );
    )";
    return executeQuery(createTableSQL) &&
           executeQuery(createMonstersTableSQL) &&
           executeQuery(createHeroesTableSQL) &&
           executeQuery(createSpellsTableSQL);

}

bool DB::insertCard(const Card& card)
{
    std::string insertSQL = "INSERT INTO Cards (Name, Mana, CardText, Type, CardClass, rarity, atk, vie) VALUES ('" + card.getName() +"', " + std::to_string(card.getMana()) + ", '"+ card.getCardText() + "', '"+ card.getType() +"', '"+ card.getCardClass() + "', '"+ card.getRarity() + "', "+ std::to_string(card.getAtk()) +", "+ std::to_string(card.getVie()) +");";
    return executeQuery(insertSQL);
}
bool DB::insertMonster(const Monster& monster)
{
    if(!insertCard(monster))
    {
        return false;
    }
    std::string insertSQL = "INSERT INTO Monsters"
}