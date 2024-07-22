#include "hero.hpp"
#include "card.hpp"
#include "effetAttaque.hpp"
#include "effetConcret.hpp"
#include <iostream>
#include <algorithm>
#include <memory>

Hero::Hero(int id, const std::string& name, int mana, const std::string& cardText, const std::string& type, const std::string& cardClass, bool in_hand, bool in_deck, bool on_board, const std::string& rarity, int minPdv, int maxPdv, int currentPdv, const std::string& heroClass, int minMana, int maxMana, int currentMana, int atk, int armor,std::unique_ptr<EffetConcret> effet, std::unique_ptr<EffetAttaque> effetAtk): Card(id, name, mana, cardText, type, cardClass, in_hand, in_deck, on_board, rarity, atk, currentPdv), minPdv_(minPdv), maxPdv_(maxPdv), currentPdv_(currentPdv), heroClass_(heroClass), minMana_(minMana), maxMana_(maxMana), currentMana_(currentMana), armor_(armor), effet_(std::move(effet)), effetAtk_(std::move(effetAtk))
{
}

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
    if(effetAtk_)
    {
        effetAtk_->attaquer(*this, defenseur);
    }
}




int Hero::getId() const
{
    return Card::getId();
}
std::string Hero::getName() const 
{
    return Card::getName();
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
    return Card::getAtk();
}
void Hero::setAtk(int i)
{
    Card::setAtk(i);
}
int Hero::getArmor() const 
{
    return this->armor_;
}
int Hero::setArmor(int i)
{
    return this->armor_ = i;
}
int Hero::getCurrentMana() const
{
    return this->currentMana_;
}
int Hero::setCurrentMana(int i)
{
    return this->currentMana_ = i;
}