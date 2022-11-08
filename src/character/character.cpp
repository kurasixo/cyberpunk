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
  std::vector<std::string> names = { "budz", "pain", "konan", "nagato", "itachi", "tobi", "madara", "naruto", "danzou", "kakashi" };

  m_name = names.at(dice->roll(10));
}

void Character::generateRandomCharecterClass(Dice* dice, CharacterClasses* charClasses) {
  m_charecterClass = charClasses->m_allCharacterClasses.at(dice->roll(0, charClasses->m_allCharacterClasses.size()));
};

// add preset. e.g. combat, peaceful
void Character::generateRandomCharecterStats(Dice* dice, CharacterStats* charStats) {
  this->setStats(&charStats->m_allStats, dice->rollMany(charStats->m_allStats.size(), 3, 7));
};

// add preset. e.g. super cool char, med cool char, hero?
void Character::generateRandomCharecterAbilities(Dice* dice, Abilities* charAbilities) {
  std::vector<Ability*> chosenAbilities;
  auto chosenAbilitiesIndexes = dice->rollMany(9, 0, charAbilities->m_allNonUniqueAbilites.size());

  for (size_t i = 0; i < 9; ++i) {
    chosenAbilities.push_back(charAbilities->m_allNonUniqueAbilites.at(chosenAbilitiesIndexes->at(i)));
  }

  this->setAbilities(&chosenAbilities, dice->rollMany(9, 1, 12));
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

void Character::print() {
  std::cout << "Name: " << this->m_name << std::endl;
  std::cout << "Class: " << this->m_charecterClass->m_name << std::endl;

  std::cout << "Stats:";
  for (auto pair: m_charecterStatsWithPoints) {
    std::cout << " " << pair.first->m_name << ": " << pair.second << ";";
  }
  std::cout << std::endl;

  std::cout << "Abilities:";
  for (auto pair: m_charecterAbilitiesWithPoints) {
    std::cout << " " << pair.first->m_name << ": " << pair.second << ";";;
  }
  std::cout << std::endl;
  std::cout << "Race: " << this->m_race->m_name << std::endl;
  std::cout << "Hair Style: " << this->m_hairstyle->m_name << std::endl;
  std::cout << "Affections: " << this->m_affection->m_name << std::endl;
  std::cout << "Clothes: " << this->m_clothes->m_name << std::endl;

  std::cout << std::endl;
};
