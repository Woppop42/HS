#include "card.hpp"
#include "display.hpp"
#include "monster.hpp"
#include "hero.hpp"
#include "spell.hpp"
#include "effet.hpp"
#include "effetConcret.hpp"
#include "effetAttaque.hpp"
#include <iostream>
#include <string>
#include <array>
#include <algorithm>
#include <memory>

int main()
{
    auto effet = std::make_unique<EffetConcret>(); // Instanciation de l'effet concret avec un pointeur intelligent.
    Monster c1(1, "Géant des Mers", 10, "Coute (1) cristal de moins pour chaque autres serviteurs sur le champ de bataille.", "Aucun", "Neutre", false, false, false, "Épique", std::move(effet), 8, 8);// transfère les propriétés de la classe effet dans le constructeur
    auto effetAttaque = std::make_unique<EffetAttaque>();
    Hero anduin(2, "Anduin Wrynn", 0, "Une description", "Héro", "Prêtre", false, false, true, "commune", 0, 30, 30, "Prêtre", 0, 10, 4, 3, 0, std::move(effet), std::move(effetAttaque));




    
    Display::getMonsterInfos(c1);
    Display::getHeroInfos(anduin);
    

    return 0;
}