#include "card.hpp"
#include "display.hpp"
#include "monster.hpp"
#include "spell.hpp"
#include "effet.hpp"
#include "effetConcret.hpp"
#include <iostream>
#include <string>
#include <array>
#include <algorithm>
#include <memory>

int main()
{
    auto effet = std::make_unique<EffetConcret>(); // Instanciation de l'ffet concret avec un pointeur intelligent.
    Monster c1(1, "Géant des Mers", 10, "Coute (1) cristal de moins pour chaque autres serviteurs sur le champ de bataille.", "Aucun", "Neutre", false, false, false, "Épique", std::move(effet), 8, 8);// transfère les propriétés de la classe effet dans le constructeur
    
    Display::getMonsterInfos(c1);

    return 0;
}