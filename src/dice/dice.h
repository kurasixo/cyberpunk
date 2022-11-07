#ifndef DICE_H
#define DICE_H

#include <vector>
#include <concepts>

template <typename T>
concept TinyInt = std::same_as<T, unsigned short int>;

template <TinyInt T>
class Dice final {
  private:
    std::vector<T>* m_ArrayPtr;

  public:
    Dice() {}
    ~Dice() {}

    T roll();
    T roll(const T range);
    T roll(const T from, const T to);

    std::vector<T>* rollMany(const T amount);
    std::vector<T>* rollMany(const T amount, const T range);
    std::vector<T>* rollMany(
      const T amount,
      const T from,
      const T to);
};

#endif
