#include <iostream>
using namespace std;
#include "board.hpp" using namespace Board;

void Board::print_board()
{
  std::cout << graphic;
};
void Board::place_move(int index, int player)
{
  if (player == 0)
  {
    x_pos[index] = true;
  }
  if (player == 1)
  {
    o_pos[index] = true;
  }
};