#include "dice.h"
#include <cstdlib>
#include <ctime>
#include <vector>


Dice::~Dice() {
  delete m_ArrayPtr;
  m_ArrayPtr = nullptr;
}

short unsigned int Dice::roll() {
  std::srand((unsigned) std::time(NULL));
  return rand() % 10;
}

 T Dice::roll(const T range) {
  std::srand((unsigned) std::time(NULL));
  return rand() % range;
}

T Dice::roll(const T from, const T to) {
  std::srand((unsigned) std::time(NULL));
  return from + (rand() % (from - to));
}

std::vector<T>* Dice::rollMany(const T amount) {
  m_ArrayPtr = new std::vector<T>;

  for (size_t i = 0; i < amount; ++i) {
    m_ArrayPtr -> push_back(this->roll());
  }

  return m_ArrayPtr;
}

std::vector<T>* Dice::rollMany(
  const T amount, const T range
) {
  m_ArrayPtr = new std::vector<T>;

  for (size_t i = 0; i < amount; ++i) {
    m_ArrayPtr -> push_back(this->roll(range));
  }

  return m_ArrayPtr;
}

std::vector<T>* Dice::rollMany(
  const T amount, const T from, const T to
) {
  m_ArrayPtr = new std::vector<T>;

  for (size_t i = 0; i < amount; ++i) {
    m_ArrayPtr -> push_back(this->roll(from, to));
  }

  return m_ArrayPtr;
}
