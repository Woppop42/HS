#ifndef __CARD__
    #define __CARD__

    #include <iostream>
    #include <algorithm>
    #include <string>


    class Card
    {
        public:
            Card(int id, std::string name, int mana, std::string cardText, std::string type, std::string cardClass, bool in_hand, bool in_deck, bool on_board, std::string rarity);
            int getId();
            std::string getName();
            std::string setName(std::string n);
            int getMana();
            int setMana(int i);
            std::string getCardText();
            std::string getType();
            std::string getCardClass();
            bool getInDeck();
            bool setInDeck(bool b);
            bool setInHand(bool b);
            bool getInHand();
            bool getOnBoard();
            bool setOnBoard(bool b);
            std::string getRarity();
            virtual ~Card();
            virtual void activerEffet() = 0; // Méthode virtuelle pure, rendant la classe abstraite.
            


        private:
            int id;
            std::string name;
            int mana;
            std::string cardText;
            std::string type;
            std::string cardClass;
            bool in_hand;
            bool in_deck;
            bool on_board;
            std::string rarity;

    };




#endif