#pragma once

#include <string>
#include <vector>
#include <stdexcept>
#include "Soldier.hpp"


namespace WarGame
{
    class FootSoldier : public Soldier
    {
    public:
        FootSoldier(uint _player) : Soldier(_player, 1, 100, 10) {}//שחקן,צעד,חיים,נזק שגורם
        ~FootSoldier();
        void active(std::pair<int, int> source, std::vector<std::vector<Soldier *>> board) override;
    };

} // namespace WarGame