#include <iostream>
#include <stdexcept>
#include <algorithm>
#include "Board.hpp"
#include "Sniper.hpp"
#include "Soldier.hpp"
#include "Paramedic.hpp"
#include "ParamedicCommander.hpp"

using namespace std;

namespace WarGame
{
    void Sniper::active(std::pair<int, int> source, std::vector<std::vector<Soldier *>> board)
    {
        int soldierTarget_x = -1;
        int soldierTarget_y = -1;
        int myPlayerNum = board[source.first][source.second]->player;
        int damage = board[source.first][source.second]->damage;
        double maxDamage = -1;
        for (int i = 0; i < board.size(); i++)
            for (int j = 0; j < board[i].size(); j++)
                if (board[i][j] != nullptr && board[i][j]->player != myPlayerNum && board[i][j]->health > 0)
                {
                    double tempDamage = board[i][j]->damage;
                    if (maxDamage < tempDamage)
                    {
                        maxDamage = tempDamage;
                        soldierTarget_x = i;
                        soldierTarget_y = j;
                    }
                }
        if (soldierTarget_x != -1)
        {
            board[soldierTarget_x][soldierTarget_y]->health = board[soldierTarget_x][soldierTarget_y]->health - damage;
        }
    }
} // namespace WarGame