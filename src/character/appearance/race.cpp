#include <string>
#include <vector>
#include "race.h"


Race::Race(std::string name, std::string description) {
  m_name = name;
  m_description = description;
};

Races::Races() {
  Race* AngloAmerican = new Race("AngloAmerican", "English");
  Race* African = new Race("African", "Bantu, Fante, Kongo,Ashanti, Zulu, Swahili");
  Race* Japanese = new Race("Japanese", "Japanese");
  Race* CentralEuropeanSoviet = new Race("CentralEuropeanSoviet", "Bulgarian, Russian, Czech, Polish, Ukranian, Slovak");
  Race* PacificIslander = new Race("PacificIslander", "Micronesian, Tagalog, Polynesian, Malayan, Sudanese, Indonesian, Hawaiian");
  Race* SoutheastAsian = new Race("SoutheastAsian", "Burmese, Cantonese, Mandarin, Thai, Tibetan, Vietnamese");
  Race* BlackAmerican = new Race("BlackAmerican", "English, Blackfolk");
  Race* HispanicAmerican = new Race("HispanicAmerican", "Spanish, English");
  Race* CentralSouthAmerican = new Race("CentralSouthAmerican", "Spanish, Portuquese");
  Race* European = new Race("European", "French, German, English, Spanish, Italian, Greek, Danish, Dutch, Norwegian, Swedish, Finnish");

  m_races = {
    AngloAmerican,
    African,
    Japanese,
    CentralEuropeanSoviet,
    PacificIslander,
    SoutheastAsian,
    BlackAmerican,
    HispanicAmerican,
    CentralSouthAmerican,
    European
  };
}
