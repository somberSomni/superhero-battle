#include <cstdlib>
#include <iostream>
#include <string>
#include <ctime>
#include "warrior.hpp"
#include "battle.hpp"

int main() {
    srand(time(NULL));
    Warrior ironman("IronMan", 110, 30, 15);
    Warrior spiderman("Spiderman", 135, 25, 10);

    Battle::StartFight(ironman, spiderman);
    return 0;
}
