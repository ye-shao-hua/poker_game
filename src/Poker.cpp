#include <Poker.h>
#include <Card.h>
#include <Initial.h>
#include <ctime>
#include <iostream>

Poker::Poker(){
    make_ordered_cards();
    make_random_cards();
}

void Poker::show_ordered_index(int index){
    std::cout << "the suit of "<< index << "th is:" ;
    _ordered_cards[index].print_suit();
    std::cout << "the number of "<< index << "th is:" ;
    _ordered_cards[index].print_number();
        std::cout << "\n";
}

void Poker::show_random_index(int index){
    std::cout << "the suit of "<< index << "th is:" ;
    _random_cards[index].print_suit();
    std::cout << "the number of "<< index << "th is:" ;
    _random_cards[index].print_number();
        std::cout << "\n";
}

void Poker::make_ordered_cards(){
    for(auto i=0;i<4;++i)
        for(auto j=0;j<13;++j){
            _ordered_cards.emplace_back(SuitInPoker(i),NumberInPoker(j));
        }
}

void Poker::make_random_cards(){
    int randList[13 * 4];
    int orderedList[13 * 4];
    int initialNumber = 0;
    int randIndex{};
    for(auto &i : orderedList)
            i = initialNumber++;
    initialNumber = 0;
    std::srand(std::time(0));
    for(auto i = 13 * 4 ;i > 0; i--){
        randIndex = std::rand() % i ;
        randList[initialNumber++] = orderedList[randIndex];
        orderedList[randIndex] = orderedList[i - 1];
    }
    
    for(auto i : randList){
        _random_cards.push_back(_ordered_cards[i]);
    }
    
}
