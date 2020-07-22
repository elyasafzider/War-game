#pragma once

#include <string>
#include <vector>
#include <stdexcept>
#include "Paramedic.hpp"

namespace WarGame
{
    class ParamedicCommander : public Paramedic
    {
    private:
    public:
        ParamedicCommander(uint _player) : Paramedic(_player)
        {
            health += 100;
        }
        ~ParamedicCommander();
        void active(std::pair<int, int> source, std::vector<std::vector<Soldier *>> board) override;
    };

} // namespace WarGame