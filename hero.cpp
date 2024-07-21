#include "hero.hpp"
#include "card.hpp"
#include "effet.hpp"
#include "effetAttaque.cpp"
#include <iostream>
#include <algorithm>
#include <memory>

Hero::Hero(int id, const std::string& name, int mana, const std::string& cardText, const std::string& type, const std::string& cardClass, bool in_hand, bool in_deck, bool on_board, const std::string& rarity, int minPdv, int maxPdv, int currentPdv, const std::string& heroClass, int minMana, int maxMana, int currentMana, int atk, int armor,std::unique_ptr<Effet> effet, std::unique_ptr<EffetAttaque> hp) : Card(id, name, mana, cardText, type, cardClass, in_hand, in_deck, on_board, rarity, atk, currentPdv), minPdv_(minPdv), maxPdv_(maxPdv), currentPdv_(currentPdv), heroClass_(heroClass), minMana_(minMana), maxMana_(maxMana), currentMana_(currentMana), armor_(armor), effet_(std::move(effet)), hp_(std::move(hp)) {}

Hero::~Hero() = default;

void Hero::activerEffet()
{
    if(effet_)
    {
        effet_->appliquerEffet();
    }
}
void Hero::activerAttaque(Card& defenseur)
{
    if(hp_)
    {
        hp_->attaquer(*this, defenseur);
    }
}




int Hero::getId() const
{
    return this->id;
}
std::string Hero::getName() const 
{
    return this->name;
}
int Hero::getMinPdv() const
{
    return this->minPdv_;
}
int Hero::getMaxPdv() const
{
    return this->maxPdv_;
}
int Hero::setMaxPdv(int i)
{
    return this-> maxPdv_ = i;
}
int Hero::getCurrentPdv() const
{
    return this->currentPdv_;
}
int Hero::setCurrentPdv(int i)
{
    return this->currentPdv_ = i;
}
std::string Hero::getHeroClass() const 
{
    return this->heroClass_;
}
int Hero::getMinMana() const 
{
    return this->minMana_;
}
int Hero::getMaxMana() const 
{
    return this->maxMana_;
}
int Hero::setMaxMana(int i)
{
    return this->maxMana_ = i;
}
int Hero::getAtk() const 
{
    return this->atk_;
}
int Hero::setAtk(int i)
{
    return this->atk_ = i;
}
int Hero::getArmor() const 
{
    return this->armor_;
}
int Hero::setArmor(int i)
{
    return this->armor_ = i;
}