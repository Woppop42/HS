#include "spell.hpp"
#include "effetAttaque.hpp"
#include "effetConcret.hpp"
#include "card.hpp"
#include <iostream>
#include <memory>

Spell::Spell(int id, const std::string& name, int mana, const std::string& cardText, const std::string& type,const std::string& cardClass, bool in_hand, bool in_deck, bool on_board, const std::string& rarity, std::unique_ptr<EffetConcret> effet, std::unique_ptr<EffetAttaque> effetAtk)
    : Card(id, name, mana, cardText, type, cardClass, in_hand, in_deck, on_board, rarity, 0, 0), effetAtk_(std::move(effetAtk)) {}

Spell::~Spell(){}

void Spell::activerEffet()
{
    if(effet_)
    {
        effet_->appliquerEffet(); // Appel de l'effet associé
    }
}
void Spell::activerAttaque(Card& defenseur)
{
    if(effetAtk_)
    {
        effetAtk_->attaquer(*this, defenseur);
    }
}