/**
 * This is a game that demonstrates how to use the Board class.
 * You can modify it and build your own games.
 * 
 * @author Oz Levi 
 * @author Erel Segal-Halevi
 * @since  2020-05
 */

#include "DemoGame.hpp"
#include "FootSoldier.hpp"
#include "FootCommander.hpp"
#include "Sniper.hpp"
#include "SniperCommander.hpp"
#include "Paramedic.hpp"
#include "ParamedicCommander.hpp"
#include <iostream>

#include <cassert>
using namespace std;
namespace WarGame
{
	DemoGame::DemoGame() : board(numRows, numCols)
	{
		// WarGame::Board board(8, 8);
		// board[{0, 0}] = new FootSoldier(1);		   //player 1 soldier1
		// board[{0, 1}] = new FootCommander(1);	   //player 1 soldier2
		// board[{0, 2}] = new Sniper(1);			   //player 1 soldier3
		// board[{0, 3}] = new SniperCommander(1);	   //player 1 soldier4
		// board[{0, 4}] = new Paramedic(1);		   //player 1 soldier5
		// board[{0, 5}] = new ParamedicCommander(1); //player 1 soldier6
		// board[{7, 0}] = new FootSoldier(2);		   //player 2 soldier1
		// board[{7, 1}] = new FootCommander(2);	   //player 2 soldier2
		// board[{7, 2}] = new Sniper(2);			   //player 2 soldier3
		// board[{7, 3}] = new SniperCommander(2);	   //player 2 soldier4
		// board[{7, 4}] = new Paramedic(2);		   //player 2 soldier5
		// board[{7, 5}] = new ParamedicCommander(2); //player 2 soldier6
		 board[{4, 4}] = new ParamedicCommander(2);
	}

	uint DemoGame::play()
	{
    board.move(2, {4, 4}, Board::Down);

		// board.move(1, {0, 0}, Board::MoveDIR::Up); //player2 soldier1 - 90
		// board.move(1, {0, 1}, Board::MoveDIR::Up); //player2 soldier2 - 130, player 2 soldier1 - 80
		// board.move(1, {0, 2}, Board::MoveDIR::Up); //player2 soldier6 - 150
		// board.move(1, {0, 3}, Board::MoveDIR::Up); //player2 soldier6 - 50, player 2 soldier2 80 //need to define that commander shoots first
		// board.move(1, {0, 4}, Board::MoveDIR::Up); //player1 soldier4 - 120 //need to define that curing id done after the step/move
		// board.move(1, {0, 5}, Board::MoveDIR::Up); //player1 soldier5 - 100, player 1 soldier4 - 120, player 1 soldier6 - 200

		// board.move(1, {1, 3}, Board::MoveDIR::Down); //player2 soldier6 - 100, player 2 soldier2 80
		// board.move(1, {0, 3}, Board::MoveDIR::Up);	 //player2 soldier4 - 20, player2 soldier3 - 50 //need to define to check the closes when there are equalh healh points
		// board.move(1, {1, 3}, Board::MoveDIR::Down); //player2 soldier5 - 0, player2 soldier6 - 50
		// board.move(1, {0, 3}, Board::MoveDIR::Up);	 //player2

		// board.move(1, {1, 2}, Board::MoveDIR::Down); //player2 soldier3 - 0, player2 soldier 6 - 20/10
		// board.move(1, {0, 2}, Board::MoveDIR::Up);	 //player2 soldier3 - 0, player2 soldier 6 - 0
		// board.move(1, {1, 2}, Board::MoveDIR::Down); //player2 soldier3 - 0, player2 soldier 6 - 0
		// board.move(1, {0, 2}, Board::MoveDIR::Up);
		// // cout << "A-F-a: " << board[{1, 0}]->health << endl;
		// // cout << "A-FC-b: " << board[{1, 1}]->health << endl;
		// // cout << "A-S-c: " << board[{1, 2}]->health << endl;
		// // cout << "A-SC-d: " << board[{1, 3}]->health << endl;
		// // cout << "A-P-e: " << board[{1, 4}]->health << endl;
		// // cout << "A-PC-f: " << board[{1, 5}]->health << endl;

		// cout << "B-F-a: " << board[{7, 0}]->health << endl;
		// cout << "B-FC-b: " << board[{7, 1}]->health << endl;
		// cout << "B-S-c: " << board[{7, 2}]->health << endl;
		// cout << "B-SC-d: " << board[{7, 3}]->health << endl;
		// cout << "B-P-e: " << board[{7, 4}]->health << endl;
		// cout << "B-PC-f: " << board[{7, 5}]->health << endl;

		// board.move(1, {0, 0}, WarGame::Board::MoveDIR::Up); //player 2 commanderSoldier - 130, player 2 footsoldier1 - 70,   player 2 footsoldier2 - 90,

		// board.move(1, {1, 0}, WarGame::Board::MoveDIR::Down);

		// board.move(1, {0, 0}, WarGame::Board::MoveDIR::Up);

		// board.move(1, {1, 0}, WarGame::Board::MoveDIR::Down);

		// board.move(1, {0, 0}, WarGame::Board::MoveDIR::Up);

		// board.move(1, {1, 0}, WarGame::Board::MoveDIR::Down);

		// board.move(1, {0, 0}, WarGame::Board::MoveDIR::Up);

		// board.move(1, {1, 0}, WarGame::Board::MoveDIR::Down);

		// board.move(1, {0, 2}, WarGame::Board::MoveDIR::Up);
		// board.move(1, {1, 2}, WarGame::Board::MoveDIR::Up);

		// board.move(1, {0, 1}, Board::MoveDIR::Up); // FootSoldier of player 1 moves forward and attacks from {0,1} to {1,1}.
		// if (!board.has_soldiers(2))
		// 	return 1;

		// board.move(2, {7, 1}, Board::MoveDIR::Down); // FootSoldier of player 2 moves forward and attacks from {7,1} to {6,1}.
		// if (!board.has_soldiers(1))
		// 	return 2;

		// board.move(1, {0, 3}, Board::MoveDIR::Up); // FootCommander of player 1 moves forward from {0,3} to {1,3}, and all soldiers of player 1 attack.
		// if (!board.has_soldiers(2))
		// 	return 1;

		// board.move(2, {7, 3}, Board::MoveDIR::Left); // FootCommander of player 2 moves left from {7,3} to {7,2}, and all soldiers of player 2 attack.
		// if (!board.has_soldiers(1))
		// 	return 2;

		/// Write more moves here..

		// If no player won, return "tie":
		return 0;
	}

	DemoGame::~DemoGame()
	{
		for (int iRow = 0; iRow < numRows; ++iRow)
		{
			for (int iCol = 0; iCol < numCols; ++iCol)
			{
				Soldier *soldier = board[{iRow, iCol}];
				if (soldier)
					// cout<<"";
					delete soldier;
			}
		}
	}

} // namespace WarGame