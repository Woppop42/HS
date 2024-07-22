#include "monster.hpp"
#include "effetAttaque.hpp"
#include "card.hpp"
#include <iostream>
#include <memory>


Monster::Monster(int id, const std::string &name, int mana, const std::string &cardText, const std::string &type, const std::string &cardClass, bool in_hand, bool in_deck, bool on_board, const std::string &rarity, std::unique_ptr<EffetAttaque> effetAtk, int atk, int vie) : Card(id,  name, mana, cardText,  type,  cardClass,  in_hand,  in_deck,on_board, rarity, atk, vie), effetAtk_(std::move(effetAtk)) {}

Monster::~Monster() = default;
int Monster::getAtk() const
{
    return Card::getAtk();
}
int Monster::setAtk(int i)
{
    return this->atk = i;
}
int Monster::getVie() const
{
    return Card::getVie();
}
// int Monster::setVie(int i)
// {
//     return this->vie = i;
// }
void Monster::activerEffet()
{
    // if(effet)
    // {
    //     effet_->appliquerEffet();
    // }
}
void Monster::activerAttaque(Card& defenseur)
{
    if(effetAtk_)
    {
        effetAtk_->attaquer(*this, defenseur);
    }
}

