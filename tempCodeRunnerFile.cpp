#include <iostream>

struct Beverage {
    Beverage() { std::cout << "Make new beverage. \n"; }
    Beverage (const Beverage &b) { std::cout << "Copy beverage. \n"; }
};

struct Coffee: public Beverage {
    Coffee() { std::cout << "Make new coffee. \n"; }
    Coffee(const Coffee &c) { std::cout << "Copy coffee. \n"; }
};

struct Cappuchino: public Coffee {
    Cappuchino() { std::cout << "Make new cappuchino. \n"; }
};

int main() {
    Cappuchino c1;
    Cappuchino c2(c1);
}
