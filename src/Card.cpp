#include <iostream>
#include <Card.h>

Card::Card()=default;

Card::Card(SuitInPoker suit, NumberInPoker number):_suit(suit),_number(number){};

Card::Card(const Card& card){
        _suit = card._suit;
        _number = card._number;
    }

Card Card::operator=(const Card &that){
    this->_suit = that._suit;
    this->_number = that._number;
    return *this;
}

void Card::show(){
    std::cout << _suit << "\n" << _number << "\n";
}

void Card::print_suit(){
    switch(_suit){
        case Spade:
            std::cout << "Spade\n";
            break;
        case Heart:
            std::cout << "Heart\n";
            break;
        case Diamond:
            std::cout << "Diamond\n";
            break;
        case Club:
            std::cout << "Club\n";
            break;
        default : 
            std::cout << "NULL\n";
            break;
    }
}
void Card::print_number(){
    switch(_number){
        case Ace:
            std::cout << "Ace\n";
            break;
        case Number2:
            std::cout << "Number2\n";
            break;
        case Number3:
            std::cout << "Number3\n";
            break;
        case Number4:
            std::cout << "Number4\n";
            break;
        case Number5:
            std::cout << "Number5\n";
            break;
        case Number6:
            std::cout << "Number6\n";
            break;
        case Number7:
            std::cout << "Number7\n";
            break;
        case Number8:
            std::cout << "Number8\n";
            break;
        case Number9:
            std::cout << "Number9\n";
            break;
        case Number10:
            std::cout << "Number10\n";
            break;
        case Jack:
            std::cout << "Jace\n";
            break;
        case Queen:
            std::cout << "Queen\n";
            break;
        case King:
            std::cout << "King\n";
            break;
        default:
            std::cout << "NULL\n";
            break;
    }
}

