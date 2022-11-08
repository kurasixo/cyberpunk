#include <string>
#include "characterClass.h"


CharacterClass::CharacterClass(
  std::string nameParam, std::string descParam, Ability* uniqueAbility) {
    m_name = nameParam;
    m_description = descParam;

    m_uniqueAbility = uniqueAbility;
};

CharacterClasses::CharacterClasses(Abilities* abilities) {
  m_Solo = new CharacterClass("Solo", "Solo Desc", abilities->m_CombatSense);
  m_Rockerboy = new CharacterClass("Rockerboy", "Rockerboy Desc", abilities->m_CharismaticLeadership);
  m_Netrunner = new CharacterClass("Netrunner", "Netrunner Desc", abilities->m_Interface);
  m_Technie = new CharacterClass("Tech", "Tech Desc", abilities->m_JuryRig);
  m_MedTech = new CharacterClass("MedTech", "MedTech Desc", abilities->m_MedicalTech);
  m_Medias = new CharacterClass("Medias", "Medias Desc", abilities->m_Credibility);
  m_Cop = new CharacterClass("Cop", "Cop Desc", abilities->m_Authority);
  m_Copropate = new CharacterClass("Copropate", "Copropate Desc", abilities->m_Resources);
  m_Fixer = new CharacterClass("Fixer", "Fixer Desc", abilities->m_Streetdeal);
  m_Nomad = new CharacterClass("Nomad", "Nomad Desc", abilities->m_Family);

  m_allCharacterClasses = {
    m_Solo,
    m_Rockerboy,
    m_Netrunner,
    m_Technie,
    m_MedTech,
    m_Medias,
    m_Cop,
    m_Copropate,
    m_Fixer,
    m_Nomad
  };
}

CharacterClasses::~CharacterClasses() {
  delete m_Solo;
  m_Solo = nullptr;
  delete m_Rockerboy;
  m_Rockerboy = nullptr;
  delete m_Netrunner;
  m_Netrunner = nullptr;
  delete m_Technie;
  m_Technie = nullptr;
  delete m_MedTech;
  m_MedTech = nullptr;
  delete m_Medias;
  m_Medias = nullptr;
  delete m_Cop;
  m_Cop = nullptr;
  delete m_Copropate;
  m_Copropate = nullptr;
  delete m_Fixer;
  m_Fixer = nullptr;
  delete m_Nomad;
  m_Nomad = nullptr;
}
