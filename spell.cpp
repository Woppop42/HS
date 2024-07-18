#include "spell.hpp"
#include "effet.hpp"
#include "card.hpp"
#include <iostream>

Spell::Spell(Effet* effet) 
: Card(int id, std::string name, int mana, std::string cardText, std::string type, std::string cardClass, bool in_hand, bool in_deck, bool on_board, std::string rarity), effet_(effet) {};