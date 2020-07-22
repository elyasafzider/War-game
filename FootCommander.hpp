#pragma once

#include <string>
#include <vector>
#include <stdexcept>
#include "FootSoldier.hpp"

namespace WarGame
{
    class FootCommander : public FootSoldier//יורש
    {
    public:
        FootCommander(uint _player) : FootSoldier(_player)
        {
            health += 50;
            damage += 10;
        }
        ~FootCommander();
        void active(std::pair<int, int> source, std::vector<std::vector<Soldier *>> board) override;
    };

} // namespace WarGame