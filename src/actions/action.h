#ifndef ACTION_H
#define ACTION_H

#include <map>
#include <string>
#include "../character/ability.h"

enum DifficultyKey {
  Easy,
  Average,
  Difficult,
  VeryDifficult,
  NearlyImpossible
};

const std::map<DifficultyKey, short unsigned int> difficulties {
  { Easy, 10 },
  { Average, 15 },
  { Difficult, 20 },
  { VeryDifficult, 25 },
  { NearlyImpossible, 30 },
};

class Action {
  public:
    Action(
      std::string name,
      std::string description,
      DifficultyKey difficulty,
      Ability* ability
    );

    Action(
      std::string name,
      std::string description,
      DifficultyKey difficulty,
      CharacterStat* stat
    );

    ~Action() = default;

    std::string m_name;
    std::string m_description;

    Ability* m_ability;
    CharacterStat* m_stat;

    DifficultyKey m_difficulty;
    short unsigned int m_difficultyValue;
};

class Actions {
  public:
    Actions(CharacterStats* charStats);
    ~Actions();

    std::vector<Action*> m_allActions;
};

#endif
