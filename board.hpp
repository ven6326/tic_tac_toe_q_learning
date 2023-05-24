#include <iostream>
using namespace std;

class Board
{
private:
  std::string graphic =
      "|   |   |   |\n|___|___|___|\n|   |   |   |\n|___|___|___|\n|   |   |   |\n|   |   |   |";
  bool x_pos[9];
  bool o_pos[9];

public:
  void print_board();
  void place_move(int index, std::string player);
};