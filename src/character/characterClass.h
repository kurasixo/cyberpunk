#ifndef CHARACTER_CLASS_H
#define CHARACTER_CLASS_H

#include <string>
#include <vector>
#include "ability.h"


class CharacterClass {
  public:
    CharacterClass(std::string nameParam, std::string descParam, Ability* uniqueAbility);
    ~CharacterClass() = default;

    std::string m_name;
    std::string m_description;

    Ability* m_uniqueAbility;
};

class CharacterClasses final {
  public:
    CharacterClasses(Abilities* abilities);
    ~CharacterClasses();

    CharacterClass* m_Solo;
    CharacterClass* m_Rockerboy;
    CharacterClass* m_Netrunner;
    CharacterClass* m_Technie;
    CharacterClass* m_MedTech;
    CharacterClass* m_Medias;
    CharacterClass* m_Cop;
    CharacterClass* m_Copropate;
    CharacterClass* m_Fixer;
    CharacterClass* m_Nomad;

    std::vector<CharacterClass*> m_allCharacterClasses;
};

#endif
