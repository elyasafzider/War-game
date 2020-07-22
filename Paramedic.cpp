#include <iostream>
#include <stdexcept>
#include <string.h>

#include <algorithm>
#include "Board.hpp"
#include "Paramedic.hpp"
#include "Soldier.hpp"

using namespace std;

namespace WarGame
{
    void Paramedic::active(std::pair<int, int> source, std::vector<std::vector<Soldier *>> board)
    {
        int soldierTarget_x = -1;
        int soldierTarget_y = -1;
        int myPlayerNum = board[source.first][source.second]->player;
        for (int i = 0; i < board.size(); i++)
            for (int j = 0; j < board[0].size(); j++)
            {
                if (board[i][j] != nullptr && board[i][j]->player != myPlayerNum && board[i][j]->health > 0
                     && distance(source, {i,j})<=1)
                {
                    board[i][j]->heal();
                  
                }
            }
    }
} // namespace WarGame