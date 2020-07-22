#include <iostream>
#include <stdexcept>
#include <algorithm>
#include "Board.hpp"
#include "Soldier.hpp"

using namespace std;

namespace WarGame
{
    static int index = 0;

    bool Board::has_soldiers(uint player_number) const
    {
        for (int i = 0; i < board.size(); i++)
            for (int j = 0; j < board[i].size(); j++)
                if (board[i][j] != nullptr && board[i][j]->player == player_number && board[i][j]->health > 0)
                    return true;
        return false;
    };

    void Board::move(uint player_number, std::pair<int, int> source, MoveDIR direction)
    {

        if (source.first < 0 || source.first >= board.size() || source.second < 0 || source.second >= board[0].size())
            throw invalid_argument("Action is forbidden,out of Board");//בודק שהשחקן לא מחוץ לגבולות הלוח

        Soldier *s = board[source.first][source.second];

        if (s == nullptr || s->player != player_number)
            throw invalid_argument("Action is forbidden! Soldier isnt exist in the source place or soldier doesnt belong this player");

        std::pair<int, int> target;
        switch (direction)
        {

        case Up:
            if (source.first == board.size())
                throw runtime_error("ERROR: invalid move");
            target.first = source.first + 1;
            target.second = source.second;
            break;

        case Down:
            if (source.first == 0)
                throw runtime_error("ERROR: invalid move");
            target.first = source.first - 1;
            target.second = source.second;
            break;

        case Left:
            if (source.second == 0)
                throw runtime_error("ERROR: invalid move");
            target.first = source.first;
            target.second = source.second - 1;
            break;

        case Right:
            if (source.second == board[0].size())
                throw runtime_error("ERROR: invalid move");
            target.first = source.first;
            target.second = source.second + 1;
            break;
        }

        if (target.first >= board.size() || target.second >= board.size() || target.first < 0 || target.second < 0)
        {
            throw runtime_error("ERROR: invalid move. Out of Board");//שאני לא יוצא מהלוח 
        }
        if (board[target.first][target.second] != nullptr)
            throw runtime_error("ERROR: invalid move. There is another solider there.");// שאין שם שחקן

        board[target.first][target.second] = s;
        board[source.first][source.second] = nullptr;

        s->active(target, board);
    };

    Soldier *&Board::operator[](std::pair<int, int> location)
    {

        return board[location.first][location.second];
    }

    Soldier *Board::operator[](std::pair<int, int> location) const
    {
        return board[location.first][location.second];
    }

} // namespace WarGame