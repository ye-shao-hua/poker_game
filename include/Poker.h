#pragma once
#include <vector>
#include "Initial.h"
#include "Card.h"
class Poker{
public:
    Poker();
    void show_ordered_index(int index);
    void show_random_index(int index);
    void make_ordered_cards();
    void make_random_cards();
private:
    std::vector<Card> _ordered_cards;
    std::vector<Card> _random_cards;
};
