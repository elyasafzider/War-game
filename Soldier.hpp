#pragma once
#include <string>
#include <vector>
#include <stdexcept>
#include <math.h>

namespace WarGame
{
    class Soldier
    {
    public:
        uint player;
        int health;
        int damage;
        int steps;
        int orginalHealth;
        int getPlayerNum() { return player; }

        Soldier(uint playerID, int _steps, uint _health, uint _damage = 0) : player(playerID), orginalHealth(_health), health(_health), damage(_damage), steps(_steps) {}
        ~Soldier(){};
        double distance(std::pair<int, int> source, std::pair<int, int> target) { return sqrt(pow(target.first - source.first, 2) + pow(target.second - source.second, 2)); };
        virtual void active(std::pair<int, int> source, std::vector<std::vector<Soldier *>> board) = 0;
        void heal()
        {
            if (health != 0)
                health = orginalHealth;
        }
    };

} // namespace WarGame
