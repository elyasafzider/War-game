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
                // cout << "test-Paramedic::active" << endl;

                if (board[i][j] != nullptr && board[i][j]->player != myPlayerNum && board[i][j]->health > 0 && distance(source, {i,j})<=1)
                {

                    board[i][j]->heal();
                    // // if (typeid(board[i][j]).name() == "N7WarGame11FootSoldierE")
                    // if (dynamic_cast<FootSoldier*>(board[i][j])!=0 && dynamic_cast<ParamedicCommander*>(board[i][j])==0)
                    //     board[i][j]->health = 100;
                    // // if (typeid(board[i][j]).name() == "N7WarGame13FootCommanderE")
                    // if (strcmp(typeid(board[i][j]).name(), "N7WarGame13FootCommanderE") == 0)
                    //     board[i][j]->health = 150;
                    // // if (typeid(board[i][j]).name() == "N7WarGame6SniperE")
                    // if (strcmp(typeid(board[i][j]).name(), "N7WarGame6SniperE") == 0)
                    //     board[i][j]->health = 100;
                    // // if (typeid(board[i][j]).name() == "N7WarGame15SniperCommanderE")
                    // if (strcmp(typeid(board[i][j]).name(), "N7WarGame15SniperCommanderE") == 0)
                    //     board[i][j]->health = 120;
                    // // if (typeid(board[i][j]).name() == "N7WarGame9ParamedicE")
                    // if (strcmp(typeid(board[i][j]).name(), "N7WarGame9ParamedicE") == 0)
                    //     board[i][j]->health = 100;
                    // // if (typeid(board[i][j]).name() == "N7WarGame18ParamedicCommanderE")
                    // if (strcmp(typeid(board[i][j]).name(), "N7WarGame18ParamedicCommanderE") == 0)
                    //     board[i][j]->health = 200;
                }
            }
    }
} // namespace WarGame