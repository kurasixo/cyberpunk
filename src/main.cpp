#include "dice/dice.h"
#include <string>
#include <iostream>


int main() {
  Dice* dice = new Dice;

  int range = 5;
  int from = 5;
  int to = 10;
  int amount = 2;

  std::cout << dice << std::endl;

  std::cout << dice->roll() << std::endl;
  std::cout << dice->roll(range) << std::endl;
  std::cout << dice->roll(from, to) << std::endl;
  std::cout << "------------" << std::endl;
  std::cout << dice->rollMany(amount) << std::endl;
  std::cout << dice->rollMany(amount, range) << std::endl;
  std::cout << dice->rollMany(amount, from, to) << std::endl;

  delete dice;
  dice = nullptr;

  return 0;
}
