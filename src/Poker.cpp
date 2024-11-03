#include <Poker.h>
#include <Card.h>
#include <Initial.h>
#include <iostream>

Poker::Poker(){
    for(auto i=0;i<4;++i)
        for(auto j=0;j<13;++j){
            _ordered_cards.emplace_back(SuitInPoker(i),NumberInPoker(j));
        }
}

void Poker::show_index(int index){/*
    std::cout << "the suit of "<< index << "th is:" ;
    //_ordered_cards[index].print_suit();
    std::cout << "\n";
    std::cout << "the number of "<< index << "th is" ;
    //_ordered_cards[index].print_number();
        std::cout << "\n";*/
}

