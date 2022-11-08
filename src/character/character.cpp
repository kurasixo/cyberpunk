#include <iostream>
#include <string>
#include <vector>

#include "character.h"


Character::Character(
  Dice* dice,

  CharacterStats* charStats,
  Abilities* charAbilities,
  CharacterClasses* charClasses,

  Races* races,
  ClothesItems* clothesItems,
  HairStyles* hairStyles,
  Affections* affections
) {
  this->generateRandomName(dice);
  this->generateRandomCharecterClass(dice, charClasses);
  this->generateRandomCharecterStats(dice, charStats);
  this->generateRandomCharecterAbilities(dice, charAbilities);

  this->generateRandomRace(dice, races);
  this->generateRandomHairStyle(dice, hairStyles);
  this->generateRandomAffections(dice, affections);
  this->generateRandomClothess(dice, clothesItems);

  this->generateRandomCharecterBackStory(dice);
  this->generateRandomCharecterMotivation(dice);

  this->generateRandomEnemy(dice);
  this->generateRandomFriend(dice);
}

Character::Character(
  std::string name,
  CharacterClass* charecterClass,

  std::vector<CharacterStat*>* allStats,
  std::vector<short unsigned int>* statsPoints,

  std::vector<Ability*>* charecterAbilities,
  std::vector<short unsigned int>* abilitiesPoints
) {
  m_name = name;
  m_charecterClass = charecterClass;

  this->setStats(allStats, statsPoints);
  this->setAbilities(charecterAbilities, abilitiesPoints);
}

Character::~Character() {
  delete m_friend;
  m_friend = nullptr;

  delete m_enemy;
  m_enemy = nullptr;

  delete m_motivation;
  m_motivation = nullptr;

  delete m_backstory;
  m_backstory = nullptr;
}

void Character::setAbilities(
  std::vector<Ability*>* charecterAbilities,
  std::vector<short unsigned int>* abilitiesPoints
) {
  for (size_t i = 0; i < charecterAbilities->size(); ++i) {
    auto currentAbility = charecterAbilities->at(i);
    auto currentAbilityPoints = abilitiesPoints->at(i);

    m_charecterAbilitiesWithPoints[currentAbility] =
      currentAbilityPoints + m_charecterStatsWithPoints[currentAbility->m_baseStat];
  }
}

void Character::setStats(
  std::vector<CharacterStat*>* allStats,
  std::vector<short unsigned int>* statsPoints
) {
  for (size_t i = 0; i < allStats->size(); ++i) {
    m_charecterStatsWithPoints[allStats->at(i)] = statsPoints->at(i);
  }
}

// temp
void Character::generateRandomName(Dice* dice) {
  std::vector<std::string> names = {
    "randName1",
    "randName2",
    "randName3",
    "randName4",
    "randName5",
    "randName6",
    "randName7",
    "randName8",
    "randName9",
    "randName10"
  };

  m_name = names.at(dice->roll(names.size()));
}

void Character::generateRandomCharecterClass(Dice* dice, CharacterClasses* charClasses) {
  m_charecterClass = charClasses->m_allCharacterClasses.at(dice->roll(charClasses->m_allCharacterClasses.size()));
};

// add preset. e.g. combat, peaceful
void Character::generateRandomCharecterStats(Dice* dice, CharacterStats* charStats) {
  this->setStats(&charStats->m_allStats, dice->rollMany(charStats->m_allStats.size(), 3, 8));
};

// add preset. e.g. super cool char, med cool char, hero?
void Character::generateRandomCharecterAbilities(Dice* dice, Abilities* charAbilities) {
  std::vector<Ability*>* chosenAbilities;
  auto chosenAbilitiesIndexes = dice->rollMany(9, charAbilities->m_allNonUniqueAbilites.size());

  for (size_t i = 0; i < 9; ++i) {
    chosenAbilities->push_back(charAbilities->m_allNonUniqueAbilites.at(chosenAbilitiesIndexes->at(i)));
  }

  this->setAbilities(chosenAbilities, dice->rollMany(9, 1, 12));
};

void Character::generateRandomRace(Dice* dice, Races* races) {
  m_race = races->m_races.at(dice->roll(races->m_races.size()));
};

void Character::generateRandomHairStyle(Dice* dice, HairStyles* hairStyles) {
  m_hairstyle = hairStyles->m_hairStyles.at(dice->roll(hairStyles->m_hairStyles.size()));
};

void Character::generateRandomAffections(Dice* dice, Affections* affections) {
  m_affection = affections->m_affections.at(dice->roll(affections->m_affections.size()));
};

void Character::generateRandomClothess(Dice* dice, ClothesItems* clothesItems) {
  m_clothes = clothesItems->m_clothesItems.at(dice->roll(clothesItems->m_clothesItems.size()));
};

void Character::generateRandomCharecterBackStory(Dice* dice) {
  BackStory* bs = new BackStory(dice);
  m_backstory = bs;
};

void Character::generateRandomCharecterMotivation(Dice* dice) {
  Motivation* motivation = new Motivation(dice);
  m_motivation = motivation;
};

void Character::generateRandomEnemy(Dice* dice) {
  m_enemy = new Enemy(dice);
};

void Character::generateRandomFriend(Dice* dice) {
  m_friend = new Friend(dice);
};

void Character::print() {
  std::cout << "Name: " << m_name << std::endl;
  std::cout << "Class: " << m_charecterClass->m_name << std::endl;

  std::cout << "Stats:";
  for (auto pair: m_charecterStatsWithPoints) {
    std::cout << " " << pair.first->m_name << ": " << pair.second << ";";
  }
  std::cout << std::endl;
  std::cout << "--------------------------------------------------" << std::endl;

  std::cout << "Abilities:";
  for (auto pair: m_charecterAbilitiesWithPoints) {
    std::cout << " " << pair.first->m_name << ": " << pair.second << ";";;
  }
  std::cout << std::endl;
  std::cout << "--------------------------------------------------" << std::endl;

  std::cout << "Appearance" << std::endl;
  std::cout << "Race: " << m_race->m_name << std::endl;
  std::cout << "Hair Style: " << m_hairstyle->m_name << std::endl;
  std::cout << "Affections: " << m_affection->m_name << std::endl;
  std::cout << "Clothes: " << m_clothes->m_name << std::endl;
  std::cout << "--------------------------------------------------" << std::endl;

  std::cout << "Backstory: " << m_backstory->m_description << std::endl;
  std::cout << "--------------------------------------------------" << std::endl;

  std::cout << "Motivation: " << m_motivation->m_description << std::endl;
  std::cout << "--------------------------------------------------" << std::endl;

  std::cout << "Enemy backstory: " << m_enemy->m_backstory->m_description << std::endl;
  std::cout << "Enemy motivation: " << m_enemy->m_motivation->m_description << std::endl;
  std::cout << "Enemy description: " << m_enemy->m_description << std::endl;
  std::cout << "--------------------------------------------------" << std::endl;

  std::cout << "Friend backstory: " << m_friend->m_backstory->m_description << std::endl;
  std::cout << "Friend motivation: " << m_friend->m_motivation->m_description << std::endl;
  std::cout << "Friend description: " << m_friend->m_description << std::endl;
  std::cout << "--------------------------------------------------" << std::endl;

  std::cout << std::endl;
};

bool Character::checkActionRoll(Action* action, unsigned short int rolledValue) {
  if (rolledValue == 0) {
    std::cout << "Smth happened" << std::endl;
    return false;
  }

  if (action->m_ability) {
    return this->abilityCheck(action->m_ability, rolledValue, action->m_difficultyValue);
  } else {
    return this->statCheck(action->m_stat, rolledValue, action->m_difficultyValue);
  }
}

bool Character::checkActionRollInBetween(Action* action, unsigned short int rolledValue) {
  if (action->m_ability) {
    return (
      m_charecterAbilitiesWithPoints[action->m_ability] > 0 &&
      m_charecterAbilitiesWithPoints[action->m_ability] <= rolledValue
    );
  } else {
    return (
      m_charecterStatsWithPoints[action->m_stat] > 0 &&
      m_charecterStatsWithPoints[action->m_stat] <= rolledValue
    );
  }
}

bool Character::abilityCheck(
  Ability* ability,
  unsigned short int rolledValue,
  unsigned short int difficulty
) {
  return m_charecterAbilitiesWithPoints[ability] + rolledValue >= difficulty;
};

bool Character::statCheck(
  CharacterStat* stat,
  unsigned short int rolledValue,
  unsigned short int difficulty
) {
  return m_charecterStatsWithPoints[stat] + rolledValue >= difficulty;
};
