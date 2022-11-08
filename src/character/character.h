#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>
#include <vector>
#include <map>

#include "appearance/race.h"
#include "appearance/affectations.h"
#include "appearance/clothes.h"
#include "appearance/hairstyle.h"

#include "characterClass.h"
#include "../dice/dice.h"


class Character {
  public:
    Character(
      Dice* dice,

      CharacterStats* charStats,
      Abilities* charAbilities,
      CharacterClasses* charClasses,

      Races* races,
      ClothesItems* clothes,
      HairStyles* hairstyle,
      Affections* affection
    );
    Character(
      std::string name,
      CharacterClass* charecterClass,

      std::vector<CharacterStat*>* allStats,
      std::vector<short unsigned int>* statsPoints,

      std::vector<Ability*>* charecterAbilities,
      std::vector<short unsigned int>* abilitiesPoints
    );
    ~Character() = default;

    void setStats(
      std::vector<CharacterStat*>* allStats,
      std::vector<short unsigned int>* statsPoints
    );
    void setAbilities(
      std::vector<Ability*>* charecterAbilities,
      std::vector<short unsigned int>* abilitiesPoints
    );

    bool statRoll(Ability*);
    bool abilityRoll(CharacterStat*);

    void print();

  private:
    Race* m_race;
    Clothes* m_clothes;
    HairStyle* m_hairstyle;
    Affection* m_affection;

    std::string m_name;
    std::string m_nickname;
    CharacterClass* m_charecterClass;
    std::map<CharacterStat*, short unsigned int> m_charecterStatsWithPoints;
    std::map<Ability*, short unsigned int> m_charecterAbilitiesWithPoints;

    // temp
    void generateRandomName(Dice* dice);

    void generateRandomCharecterClass(Dice* dice, CharacterClasses* charClasses);
    void generateRandomCharecterStats(Dice* dice, CharacterStats* charStats);
    void generateRandomCharecterAbilities(Dice* dice, Abilities* charAbilities);

    void generateRandomRace(Dice* dice, Races* races);
    void generateRandomHairStyle(Dice* dice, HairStyles* hairStyles);
    void generateRandomAffections(Dice* dice, Affections* affections);
    void generateRandomClothess(Dice* dice, ClothesItems* clothesItems);

    // std::string generateRandomCharecterBackStory(Dice* dice);
};

#endif
