#include "card.hpp"
#include <iostream>


Card::Card(int id, std::string name, int mana, std::string cardText, std::string type, std::string cardClass, bool in_hand, bool in_deck, bool on_board, std::string rarity) : id(id), name(name), mana(mana), cardText(cardText), type(type), cardClass(cardClass), in_hand(in_hand), in_deck(in_deck), on_board(on_board)
{

};

Card::~Card(){};

int Card::getId() const
{
    return this->id;
}
std::string Card::getName() const
{
    return this->name;
}
int Card::getMana() const
{
    return this->mana;
}
int Card::setMana(int i)
{
    return this->mana = i;
}
std::string Card::getCardText() const
{
    return this->cardText;
}
std::string Card::getType() const
{
    return this->type;
}
std::string Card::getCardClass() const
{
    return this->cardClass;
}
bool Card::getInHand() const
{
    return this->getInHand();
}
bool Card::setInHand(bool b)
{
    return this->in_hand = b;
}
bool Card::getInDeck() const
{
    return this->in_deck;
}
bool Card::setInDeck(bool b)
{
    return this->in_deck = b;
}
bool Card::getOnBoard() const
{
    return this->on_board;
}
bool Card::setOnBoard(bool b)
{
    return this->on_board = b;
}
std::string Card::getRarity() const
{
    return this->rarity;
}