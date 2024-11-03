#pragma once
#include <vector>
#include "Initial.h"
#include "Card.h"
class Poker{
public:
    Poker();
    void show_index(int index);
private:
    std::vector<Card> _ordered_cards;
    std::vector<Card> _random_cards;
};
