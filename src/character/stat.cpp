#include <string>
#include <vector>
#include "stat.h"


CharacterStat::CharacterStat(std::string_view nameParam, std::string_view descParam) {
  m_name = nameParam;
  m_description = descParam;
};

CharacterStats::CharacterStats() {
  m_Intellect = new CharacterStat("Intellect", "Intellect Desc");
  m_Reflex = new CharacterStat("Reflex", "Reflex Desc");
  m_TechStat = new CharacterStat("Tech", "Tech Desc");
  m_Cool = new CharacterStat("Cool", "Cool Desc");
  m_Attractive = new CharacterStat("Attractive", "Attractive Desc");
  m_Luck = new CharacterStat("Luck", "Luck Desc");
  m_Body = new CharacterStat("Body", "Body Desc");
  m_Empathy = new CharacterStat("Empathy", "Empathy Desc");

  m_allStats = {
    m_Intellect,
    m_Reflex,
    m_TechStat,
    m_Cool,
    m_Attractive,
    m_Luck,
    m_Body,
    m_Empathy
  };
}

CharacterStats::~CharacterStats() {
  delete m_Intellect;
  delete m_Reflex;
  delete m_TechStat;
  delete m_Cool;
  delete m_Attractive;
  delete m_Luck;
  delete m_Body;
  delete m_Empathy;

  m_Intellect = nullptr;
  m_Reflex = nullptr;
  m_TechStat = nullptr;
  m_Cool = nullptr;
  m_Attractive = nullptr;
  m_Luck = nullptr;
  m_Body = nullptr;
  m_Empathy = nullptr;
}
