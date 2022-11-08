#include "dice.h"
#include <cstdlib>
#include <ctime>
#include <vector>
#include <unistd.h>


unsigned long mix(unsigned long a, unsigned long b, unsigned long c) {
  a=a-b;  a=a-c;  a=a^(c >> 13);
  b=b-c;  b=b-a;  b=b^(a << 8);
  c=c-a;  c=c-b;  c=c^(b >> 13);
  a=a-b;  a=a-c;  a=a^(c >> 12);
  b=b-c;  b=b-a;  b=b^(a << 16);
  c=c-a;  c=c-b;  c=c^(b >> 5);
  a=a-b;  a=a-c;  a=a^(c >> 3);
  b=b-c;  b=b-a;  b=b^(a << 10);
  c=c-a;  c=c-b;  c=c^(b >> 15);

  return c;
};

Dice::Dice() {
  unsigned long seed = mix(std::clock(), std::time(nullptr), getpid());
  std::srand(seed);
}

Dice::~Dice() {
  delete m_ArrayPtr;
  m_ArrayPtr = nullptr;
}

T Dice::roll() {
  return rand() % 10;
}

 T Dice::roll(const T range) {
  return rand() % range;
}

T Dice::roll(const T from, const T to) {
  return from + (rand() % (from - to));
}

std::vector<T>* Dice::rollMany(const T amount) {
  m_ArrayPtr = new std::vector<T>;

  for (size_t i = 0; i < amount; ++i) {
    m_ArrayPtr->push_back(this->roll());
  }

  return m_ArrayPtr;
}

std::vector<T>* Dice::rollMany(
  const T amount, const T range
) {
  m_ArrayPtr = new std::vector<T>;

  for (size_t i = 0; i < amount; ++i) {
    m_ArrayPtr->push_back(this->roll(range));
  }

  return m_ArrayPtr;
}

std::vector<T>* Dice::rollMany(
  const T amount, const T from, const T to
) {
  m_ArrayPtr = new std::vector<T>;

  for (size_t i = 0; i < amount; ++i) {
    m_ArrayPtr->push_back(this->roll(from, to));
  }

  return m_ArrayPtr;
}
