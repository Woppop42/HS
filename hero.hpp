#ifndef __HERO__
#define __HERO__
#include "card.hpp"
#include "effetAttaque.hpp"
#include "effetConcret.hpp"
#include <memory>
#include <iostream>

class Hero : public Card
{
    public:
         Hero(int id, const std::string& name, int mana, const std::string& cardText, const std::string& type,
         const std::string& cardClass, bool in_hand, bool in_deck, bool on_board, const std::string& rarity,
         int minPdv, int maxPdv, int currentPdv, const std::string& heroClass,
         int minMana, int maxMana, int currentMana, int atk, int armor,
         std::unique_ptr<EffetConcret> effet, std::unique_ptr<EffetAttaque> effetAtk);
        ~Hero();
        int getId() const;
        std::string getName() const;
        int getMinPdv() const;
        int getMaxPdv() const;
        int setMaxPdv(int i);
        int getCurrentPdv() const;
        int setCurrentPdv(int i);
        std::string getHeroClass() const;
        int getMinMana() const;
        int getMaxMana() const;
        int setMaxMana(int i);
        int getCurrentMana() const;
        int setCurrentMana(int i);
        int getAtk() const;
        void setAtk(int i);
        int getArmor() const;
        int setArmor(int i);
        Hero(const Hero&) = delete;
        Hero& operator=(const Hero&) = delete;
        Hero(Hero&&) = default;
        Hero& operator=(Hero&&) = default;
        void activerAttaque(Card& defenseur) override;
        void activerEffet() override;

    private:
        int minPdv_;
        int maxPdv_;
        int currentPdv_;
        std::string heroClass_;
        int minMana_;
        int maxMana_;
        int currentMana_;
        int armor_;
        std::unique_ptr<EffetConcret> effet_;
        std::unique_ptr<EffetAttaque> effetAtk_;



};

#endif