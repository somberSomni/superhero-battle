#pragma once
#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>

class Warrior {
    private:
        std::string name;
        int hp, attack, block;
    public:
        Warrior();
        Warrior(std::string, int, int, int);
        ~Warrior();
        void Hit(Warrior*);
        void TakeDamage(int);
        std::string GetName(){ return this->name; }
        int GetHP(){ return this-> hp; }
        int GetAttack(){ return this->attack ;}
};
//constructors
Warrior::Warrior() {
    this->name = "Hero";
    this->hp = 100;
    this->attack = 10;
    this->block = 10;
    std::cout << "Creating a new warrior: " << this->name << "\n";
}
Warrior::Warrior(std::string name, int hp, int attack, int block) {
    this->name = name;
    this->hp = hp;
    this->attack = attack;
    this->block = block;
    std::cout << "Creating a new warrior: " << this->name << "\n";
}
//deconstructor
Warrior::~Warrior() {
    std::cout << "Destroying warrior: " << this->name << "\n";
}
//methods
void Warrior::Hit(Warrior *warrior) {
    std::cout << this->name << " attacks " << warrior->GetName() << " and deals damage\n";
    warrior->TakeDamage(this->GetAttack());
}
void Warrior::TakeDamage(int attack) {
    this->hp -= (rand() % attack) - (rand() % this->block);
    std::cout << this->name << " is down to " << this->hp << " health\n";
}
