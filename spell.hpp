#ifndef __SPELL__
#define __SPELL__
#include "card.hpp"
#include "effet.hpp"
#include <iostream>

class Spell : public Card
{

public:
    Spell(int id, const std::string &name, int mana, const std::string& cardText, const std::string &type,
          const std::string &cardClass, bool in_hand, bool in_deck, bool on_board, const std::string &rarity, Effet *effet);
    ~Spell();
    void activerEffet() override; // Redéfinition de la méthode virtuelle pure.

private:
    Effet *effet_; // POinteur vers l'effet associé au sort.
};

#endif