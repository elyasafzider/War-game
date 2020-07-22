#include <iostream>
#include <stdexcept>
#include <algorithm>
#include "Board.hpp"
#include "FootSoldier.hpp"
#include "Soldier.hpp"

using namespace std;

namespace WarGame
{
    void FootSoldier::active(std::pair<int, int> source, std::vector<std::vector<Soldier *>> board)
    {
        // cout<<"source: {"<<source.first<<","<<source.second<<"}"<<endl;
        int soldierTarget_x = -1;
        int soldierTarget_y = -1;
        int myPlayerNum = board[source.first][source.second]->player;
        int damage = board[source.first][source.second]->damage;
        std::pair<int, int> target;
        double minDistance = __DBL_MAX__;
        for (int i = 0; i < board.size(); i++)
            for (int j = 0; j < board[i].size(); j++)
                if (board[i][j] != nullptr && board[i][j]->player != myPlayerNum && board[i][j]->health > 0)
                {
                    target = {i, j};
                    double tempDistance = distance(source, target);
                    if (minDistance > tempDistance)
                    {
                        minDistance = tempDistance;
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