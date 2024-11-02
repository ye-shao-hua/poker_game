#include <iostream>
#include <Initial.h>
#include <Card.h>
int main(){
    Card c1{Diamond,King};
    c1.print_suit();
    c1.print_number();
}
