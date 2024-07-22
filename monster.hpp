#ifndef __MONSTER__
#define __MONSTER__
#include "card.hpp"
#include "effetAttaque.hpp"
#include <memory>

class Monster : public Card
{
    public:
        Monster(int id, const std::string &name, int mana, const std::string &cardText, const std::string &type,
            const std::string &cardClass, bool in_hand, bool in_deck, bool on_board, const std::string &rarity, std::unique_ptr<EffetAttaque> effetAtk, int atk, int vie);
        ~Monster();
        void activerEffet() override;
        void activerAttaque(Card& defenseur) override;
        int getAtk() const;
        int setAtk(int i);
        int getVie() const;
        // int setVie(int i);
        Monster(const Monster&) = delete; // Constructeur de copie supprimé, empêche les copies d'un objet Monster et les erreurs que pourraient causées la copie du pointeur
        Monster& operator=(const Monster&) = delete; // Empêche d'affecter un objet Monster à un autre objet Monster
        Monster(Monster&&) = default; // Permet de déplacer les ressources plutôt que de les copier.
        Monster& operator=(Monster&&) = default;

    private:
        int atk;
        int vie;
        std::unique_ptr<EffetAttaque> effetAtk_;
};

#endif