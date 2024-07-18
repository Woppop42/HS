#ifndef __SPELL__
    #define __SPELL__
#include "card.hpp"
#include "effet.hpp"
#include <iostream>

class Spell : public Card
{

    public:
        Spell(*Effet effet);
        ~Spell();
        void activerEffet() override; // Redéfinition de la méthode virtuelle pure.

    private:
        Effet* effet_; // POinteur vers l'effet associé au sort.


        
    
};




#endif