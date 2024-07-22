#ifndef __SPELL__
#define __SPELL__
#include "card.hpp"
#include "effetConcret.hpp"
#include "effetAttaque.hpp"
#include <iostream>
#include <memory>

class Spell : public Card
{

public:
    Spell(int id, const std::string &name, int mana, const std::string& cardText, const std::string &type, const std::string &cardClass, bool in_hand, bool in_deck, bool on_board, const std::string &rarity, std::unique_ptr<EffetConcret> effet, std::unique_ptr<EffetAttaque> effetAtk);
    ~Spell();
    void activerEffet() override; // Redéfinition de la méthode virtuelle pure.
    void activerAttaque(Card& defenseur) override;

private:
    std::unique_ptr<EffetConcret> effet_; // POinteur vers l'effet associé au sort.
    std::unique_ptr<EffetAttaque> effetAtk_;
};

#endif