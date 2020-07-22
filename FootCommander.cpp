#include <iostream>
#include <stdexcept>
#include <algorithm>
#include "Board.hpp"
#include "FootCommander.hpp"

using namespace std;

namespace WarGame
{
    void FootCommander::active(std::pair<int, int> source, std::vector<std::vector<Soldier *>> board)
    {
        FootSoldier::active(source, board);
        int myPlayerNum = board[source.first][source.second]->player;
        for (int i = 0; i < board.size(); i++)
            for (int j = 0; j < board[i].size(); j++){
                // cout<<"i: "<<i<<" j: "<<j<<endl;
                // cout<<"myPlayerNum: "<<myPlayerNum<<endl;
                if (board[i][j] != nullptr && board[i][j]->player == myPlayerNum && board[i][j]->health > 0 && dynamic_cast<FootSoldier*>(board[i][j])!=0 &&
                 dynamic_cast<FootCommander*>(board[i][j])==0){
                    //  cout<<"active"<<endl;
                    board[i][j]->active({i, j}, board);
                 }
            }
        }
} // namespace WarGame