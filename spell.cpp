#include "spell.hpp"
#include "effet.hpp"
#include "card.hpp"
#include <iostream>

Spell::Spell(int id, const std::string &name, int mana, const std::string& cardText, const std::string &type,
          const std::string &cardClass, bool in_hand, bool in_deck, bool on_board, const std::string &rarity, Effet* effet) :
Card(id,  name, mana, cardText,  type,  cardClass,  in_hand,  in_deck,on_board, rarity), effet_(effet) {};

Spell::~Spell()
{
    delete effet_;
}

void Spell::activerEffet()
{
    if(effet_)
    {
        effet_->appliquerEffet(); // Appel de l'effet associé
    }
}