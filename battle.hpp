#pragma once
#include <iostream>
#include <cstdlib>
#include <string>

class Battle {
    public:
        static void StartFight(Warrior, Warrior);
};

void Battle::StartFight(Warrior warrior1, Warrior warrior2) {
    bool gameOver = false;
    while(!gameOver) {
        warrior1.Hit(&warrior2);
        if( warrior2.GetHP() > 0) {
            warrior2.Hit(&warrior1);
            if (warrior1.GetHP() > 0) {
                continue;
            } else {
                std::cout << warrior1.GetName() << " has died and " << warrior2.GetName() << " is Victorious\n";
                gameOver = true;
            }
        } else {
            std::cout << warrior2.GetName() << " has died and " << warrior1.GetName() << " is Victorious\n";
            gameOver = true;
        }
    }
    std::cout << "Game Over\n";
}