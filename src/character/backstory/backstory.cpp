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

  this->generateStory(dice);
};

void BackStory::generateStory(Dice* dice) {
  m_familyRanking = this->generateFamilyRanking(dice);
  bool isDead = this->generateParents(dice);

  if (isDead) {
    m_parentsStatus = "Something has happened to one or both parents";
    m_parentsTragedy = this->generateParentsTragedy(dice);
  } else {
    m_parentsStatus = "Both parents are living";
    m_parentsTragedy = "";
  }

  bool hasTragedyHappened = this->generateFamilyStatus(dice);

  if (hasTragedyHappened) {
    m_familyStatus = "Family status in danger, and you risk losing everything";
    m_familyTragedy = this->generateFamilyTragedy(dice);
  } else {
    m_familyStatus = "Family status is OK";
    m_familyTragedy = "";
  }

  m_childHoodEnv = this->generateChildhoodEnv(dice);

  m_backstory = "Family Ranking: " + m_familyRanking +
    "; Parents Status: " + m_parentsStatus +
    "; Parents Tragedy: " + m_parentsTragedy +
    "; Family Status: " + m_familyStatus +
    "; Family Tragedy:  " + m_familyTragedy +
    "; Childhood Enivroment: " + m_childHoodEnv;
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
