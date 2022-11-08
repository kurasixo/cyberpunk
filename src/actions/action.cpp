#include <map>
#include "action.h"

Action::Action(
  std::string name,
  std::string description,
  DifficultyKey currentDifficulty,
  Ability* ability
) {
  m_name = description;
  m_description = description;
  m_difficulty = currentDifficulty;
  m_difficultyValue = difficulties.at(currentDifficulty);
  m_ability = ability;
}

Action::Action(
  std::string name,
  std::string description,
  DifficultyKey currentDifficulty,
  CharacterStat* stat
) {
  m_name = description;
  m_description = description;
  m_difficulty = currentDifficulty;
  m_difficultyValue = difficulties.at(currentDifficulty);
  m_stat = stat;
}


Actions::Actions(CharacterStats* charStats) {
  Action* Jump = new Action("Jump", "Jump", Easy, charStats->m_Reflex);
  Action* Walk = new Action("Walk", "Walk", Easy, charStats->m_Reflex);

  m_allActions = {
    Jump,
    Walk
  };
};

Actions::~Actions() {
  for (Action* action: m_allActions) {
    delete action;
    action = nullptr;
  }
}
