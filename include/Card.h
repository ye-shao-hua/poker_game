#pragma once
#include "./Initial.h"

class Card{
public:
    Card(SuitInPoker suit, NumberInPoker number);
    Card(const Card& card);
    void show();
    void print_suit();
    void print_number();
private:
    SuitInPoker _suit;
    NumberInPoker _number;
};
