#ifndef CHARACTER_STAT_H
#define CHARACTER_STAT_H

#include <string>
#include <vector>

class CharacterStat {
  public:
    CharacterStat(std::string_view nameParam, std::string_view descParam);
    ~CharacterStat() = default;

    unsigned short int m_maxValue;
    unsigned short int m_minValue;

    std::string_view m_name;
    std::string_view m_description;
};

class CharacterStats final {
  public:
    CharacterStats();
    ~CharacterStats();

    CharacterStat* m_Intellect;
    CharacterStat* m_Reflex;
    CharacterStat* m_TechStat;
    CharacterStat* m_Cool;
    CharacterStat* m_Attractive;
    CharacterStat* m_Luck;
    CharacterStat* m_Body;
    CharacterStat* m_Empathy;

    std::vector<CharacterStat*> m_allStats;
};

#endif
