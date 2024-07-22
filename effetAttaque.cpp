    #include "card.hpp"
    #include "effetAttaque.hpp"
    #include <algorithm>
    #include <iostream>



    void EffetAttaque::attaquer(Card& attaquant, Card& defenseur)
    {
    int atk_attaquant = attaquant.getAtk();
    int atk_defenseur = defenseur.getAtk();
    int vie_attaquant = attaquant.getVie();
    int vie_defenseur = defenseur.getVie();

    int i = atk_attaquant - vie_defenseur;
    defenseur.setVie(i);
    int a = atk_defenseur - vie_attaquant;
    attaquant.setVie(a);

    }
    void EffetAttaque::appliquerEffet() {
        std::cout << "Effet d'attaque appliqué !" << std::endl;
    }