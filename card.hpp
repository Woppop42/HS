#ifndef __CARD__
    #define __CARD__

    #include <iostream>
    #include <algorithm>
    #include <string>


    class Card
    {
        public:
            Card(int id, std::string name, int mana, std::string cardText, std::string type, std::string cardClass, bool in_hand, bool in_deck, bool on_board, std::string rarity);
            int getId() const;
            virtual ~Card();
            virtual void activerEffet() = 0; // Méthode virtuelle pure, rendant la classe abstraite.
            std::string getName() const;
            std::string setName(std::string n);
            int getMana() const;
            int setMana(int i);
            std::string getCardText() const;
            std::string getType() const;
            std::string getCardClass() const;
            bool getInDeck() const;
            bool setInDeck(bool b);
            bool setInHand(bool b);
            bool getInHand() const;
            bool getOnBoard() const;
            bool setOnBoard(bool b);
            std::string getRarity() const;
            
            


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