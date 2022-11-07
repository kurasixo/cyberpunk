#ifndef DICE_H
#define DICE_H

#include <vector>
#include <concepts>


using T = short unsigned int;
class Dice final {
  private:
    std::vector<short unsigned int>* m_ArrayPtr;

  public:
    Dice() = default;
    ~Dice();

    T roll();
    T roll(const T range);
    T roll(const T from, const T to);

    std::vector<T>* rollMany(const T amount);
    std::vector<T>* rollMany(const T amount, const T range);
    std::vector<T>* rollMany(const T amount, const T from, const T to);
};

#endif
