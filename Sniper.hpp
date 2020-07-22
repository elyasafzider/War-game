#pragma once

#include <string>
#include <vector>
#include <stdexcept>
#include "Soldier.hpp"
namespace WarGame
{
    class Sniper : public Soldier
    {
   
    public:
        Sniper(uint _player) : Soldier(_player, 1, 100, 50) {}
        ~Sniper();
        void active(std::pair<int, int> source, std::vector<std::vector<Soldier *>> board) override;
    };

} // namespace WarGame