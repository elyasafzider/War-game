#pragma once

#include <string>
#include <vector>
#include <stdexcept>
#include "Sniper.hpp"

namespace WarGame
{
    class SniperCommander : public Sniper
    {
    private:
    public:
        SniperCommander(uint _player) : Sniper(_player)
        {
            health += 20;
            damage += 50;
        }
        ~SniperCommander();
        void active(std::pair<int, int> source, std::vector<std::vector<Soldier *>> board) override;
    };

} // namespace WarGame