#pragma once

#include <string>
#include <vector>
#include <stdexcept>
#include "Soldier.hpp"

namespace WarGame
{
    class Paramedic : public Soldier
    {
    private:
    public:
        Paramedic(uint _player) : Soldier(_player, 1, 100) {}
        ~Paramedic();
        void active(std::pair<int, int> source, std::vector<std::vector<Soldier *>> board) override;
    };

} // namespace WarGame