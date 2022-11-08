#ifndef CHARACTER_MOTIVATION_H
#define CHARACTER_MOTIVATION_H

#include <string>
#include <vector>
#include "../../dice/dice.h"

class Motivation final {
  public:
    Motivation(Dice* dice);
    ~Motivation() = default;

    std::string m_motivation;
    std::string m_personalTrait;
    std::string m_valuablePerson;
    std::string m_valuableThing;
    std::string m_feelingsAboutPeople;
    std::string m_valuablePossesion;

  private:
    void generateMotivation(Dice* dice);
    std::string generatePersonalTrait(Dice* dice);
    std::string generateValuablePerson(Dice* dice);
    std::string generateValuableThing(Dice* dice);
    std::string generateFeelingsAboutPeople(Dice* dice);
    std::string generateValuablePossesion(Dice* dice);

    std::vector<std::string> m_allPersonalityTraits;
    std::vector<std::string> m_allValuablePeople;
    std::vector<std::string> m_allValuableThings;
    std::vector<std::string> m_allFeelingsAboutPeople;
    std::vector<std::string> m_allValuablePossesions;
};

#endif
