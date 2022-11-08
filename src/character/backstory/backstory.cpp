#include <string>
#include <vector>
#include "backstory.h"


BackStory::BackStory(Dice* dice) {
  m_allFamilyRankings = {
    "Corporate Executive",
    "Corporate Manager",
    "Corporate Technician",
    "Nomad Pack",
    "Pirate Fleet",
    "Gang Family",
    "Crime Lord",
    "Combat Zone Poor",
    "Urban homeless",
    "Arcology family"
  };

  m_allParentsTragedies = {
    "Parents died in warfare",
    "Parent(s) died in an accident",
    "Parent(s) were murdered",
    "Parent(s) have amnesia and don't remember you",
    "Never knew Parent(s)",
    "Parent(s) are in hiding to protect you",
    "Were left with relatives for safekeeping",
    "Grew up on the Streetand never had parents",
    "Parent(s) gave you up for adoption",
    "Parent(s) sold you for money"
  };

  m_allFamilyTragedies = {
    "Family lost everything through betrayal",
    "Family lost everything through bad management",
    "Family exiled orotherwise driven from their original home/nation/corporation",
    "Family is imprisoned and you alone escaped",
    "Family vanished. You are the only remaining member",
    "Family was murdered /killed and you were the only survivor",
    "Family is involved in a longterm conspiracy, organization or association, such as a crime family or revolutionary group",
    "Family was scattered to the winds due to misfortune",
    "Family is cursed with a hereditary feud that has lasted for generations",
    "Inheritor of a family debt; you must honor this debt before moving on with your life"
  };

  m_allChildhoodEnvs = {
    "Spent on the Street, with no adult supervision",
    "Spent in asafe Corporate Suburbia",
    "In a Nomad Pack moving from town to town",
    "In a decaying, once upscale neighborhood",
    "In a defended Corporate Zone in the central City",
    "In the heart of the Combat Zone",
    "In a small village or town far from the City",
    "In a large arcology city",
    "In an aquatic Pirate Pack"
    "On a Corporate controlled Farm or Research Facility"
  };

  m_backstory = this->generateStory(dice);
};

std::string BackStory::generateStory(Dice* dice) {
  std::string result = "";

  std::string familyRanking = this->generateFamilyRanking(dice);
  bool isDead = this->generateParents(dice);

  if (isDead) {
    std::string parentsStatus = "Something has happened to one or both parents";
    std::string parentsTragedy = this->generateParentsTragedy(dice);
    bool hasTragedyHappened = this->generateFamilyStatus(dice);
    if (hasTragedyHappened) {
      std::string familyStatus = "Family status in danger, and you risk losing everything";
      std::string familyTragedy = this->generateFamilyTragedy(dice);
      std::string childHoodEnv = this->generateChildhoodEnv(dice);

      return "Family Ranking: " + familyRanking +
        "; Parents Status: " + parentsStatus +
        "; Parents Tragedy: " + parentsTragedy +
        "; Family Status: " + familyStatus +
        "; Family Tragedy:  " + familyTragedy +
        "; Childhood Enivroment: " + childHoodEnv;
    } else {
      std::string familyStatus = "Family status is OK";
      std::string childHoodEnv = this->generateChildhoodEnv(dice);
      return "Family Ranking: " + familyRanking +
        "; Parents Status: " + parentsStatus +
        "; Parents Tragedy: " + parentsTragedy +
        "; Family Status: " + familyStatus +
        "; Childhood Enivroment: " + childHoodEnv;
    }
  } else {
    std::string parentsStatus = "Both parents are living";
    bool hasTragedyHappened = this->generateFamilyStatus(dice);
    if (hasTragedyHappened) {
      std::string familyStatus = "Family status in danger, and you risk losing everything";
      std::string familyTragedy = this->generateFamilyTragedy(dice);
      std::string childHoodEnv = this->generateChildhoodEnv(dice);
      return "Family Ranking: " + familyRanking +
        "; Parents Status: " + parentsStatus +
        "; Family Status: " + familyStatus +
        "; Family Tragedy:  " + familyTragedy +
        "; Childhood Enivroment: " + childHoodEnv;
    } else {
      std::string familyStatus = "Family status is OK";
      std::string childHoodEnv = this->generateChildhoodEnv(dice);
      return "Family Ranking: " + familyRanking +
        "; Parents Status: " + parentsStatus +
        "; Family Status: " + familyStatus +
        "; Childhood Enivroment: " + childHoodEnv;
    }
  }
};

std::string BackStory::generateFamilyRanking(Dice* dice) {
  return m_allFamilyRankings.at(dice->roll(m_allFamilyRankings.size()));
};

std::string BackStory::generateParentsTragedy(Dice* dice) {
  return m_allParentsTragedies.at(dice->roll(m_allParentsTragedies.size()));
};

std::string BackStory::generateFamilyTragedy(Dice* dice) {
  return m_allFamilyTragedies.at(dice->roll(m_allFamilyTragedies.size()));
};

std::string BackStory::generateChildhoodEnv(Dice* dice) {
  return m_allChildhoodEnvs.at(dice->roll(m_allChildhoodEnvs.size()));
};

bool BackStory::generateParents(Dice* dice) {
  auto number = dice->roll(10);

  if (number >= 6) {
    return true;
  }

  return false;
};

bool BackStory::generateFamilyStatus(Dice* dice) {
  auto number = dice->roll(10);

  if (number >= 6) {
    return true;
  }

  return false;
};
