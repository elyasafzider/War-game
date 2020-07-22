#include <iostream>
#include <stdexcept>
#include <algorithm>
#include "Board.hpp"
#include "ParamedicCommander.hpp"
// #include "Soldier.hpp"

using namespace std;

namespace WarGame
{
    void ParamedicCommander::active(std::pair<int, int> source, std::vector<std::vector<Soldier *>> board)
    {
                    cout << "test1" << endl;

        Paramedic::active(source, board);
                            cout << "test2" << endl;
        int myPlayerNum = board[source.first][source.second]->player;

        for (int i = 0; i < board.size(); i++)
            for (int j = 0; j < board[i].size(); j++)
                if (board[i][j] != nullptr && board[i][j]->player == myPlayerNum && board[i][j]->health > 0 && dynamic_cast<Paramedic*>(board[i][j])!=0 &&
                 dynamic_cast<ParamedicCommander*>(board[i][j])==0)
                    board[i][j]->active({i, j}, board);
        }
} // namespace WarGame