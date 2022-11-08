#ifndef CHARACTER_BACKSTORY_H
#define CHARACTER_BACKSTORY_H

#include <string>
#include <vector>
#include "../../dice/dice.h"

class BackStory final {
  public:
    BackStory(Dice* dice);
    ~BackStory() = default;

    std::string m_description;

    std::string m_familyRanking;
    std::string m_familyStatus;
    std::string m_familyTragedy;

    std::string m_parentsStatus;
    std::string m_parentsTragedy;

    std::string m_childHoodEnv;

  private:
    void generateStory(Dice* dice);

    std::string generateFamilyRanking(Dice* dice);
    std::string generateParentsTragedy(Dice* dice);
    bool generateParents(Dice* dice);
    bool generateFamilyStatus(Dice* dice);
    std::string generateFamilyTragedy(Dice* dice);

    std::string generateChildhoodEnv(Dice* dice);

    std::vector<std::string> m_allFamilyRankings;
    std::vector<std::string> m_allParentsTragedies;
    std::vector<std::string> m_allFamilyTragedies;
    std::vector<std::string> m_allChildhoodEnvs;
};

#endif
