#include "display.hpp"
#include "monster.hpp"
#include "spell.hpp"
#include "card.hpp"
#include "hero.hpp"

void Display::getMonsterInfos(const Monster& monster)
{
                    std::cout <<  "ID : " << monster.getId() << "\n" << std::endl;
                    std::cout << "Name : " << monster.getName() << "\n" << std::endl;
                    std::cout << "Coût en mana : " << monster.getMana() << "\n" << std::endl;
                    std::cout << "Description : " << monster.getCardText() << "\n" << std::endl;
                    std::cout << "Classe de la carte: " << monster.getCardClass() << "\n" << std::endl;
                    std::cout << "Rareté : " << monster.getRarity() << "\n" << std::endl;
                    std::cout << "Attaque : " << monster.getAtk() << "\n" << std::endl;
                    std::cout << "Vie : " << monster.getVie() << "\n" << std::endl;
                    std::cout << "Type : " << monster.getType() << "\n" << std::endl;
    


}
void Display::getHeroInfos(const Hero& hero)
{
    std::cout << "ID : " << hero.getId() << "\n" << std::endl;
    std::cout << "Nom : " << hero.getName() <<"\n" << std::endl;
    std::cout << "Vie" << hero.getVie() <<"\n" << std::endl;
}