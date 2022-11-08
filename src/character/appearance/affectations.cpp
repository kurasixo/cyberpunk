#include <string>
#include <vector>
#include "affectations.h"


Affection::Affection(std::string name, std::string description) {
  m_name = name;
  m_description = description;
};


Affections::Affections() {
  Affection* Tatoos = new Affection("Tatoos", "Tatoos desc");
  Affection* Mirrorshades = new Affection("Mirrorshades", "Mirrorshades desc");
  Affection* RitualScars = new Affection("RitualScars", "RitualScars desc");
  Affection* SpikedGloves = new Affection("SpikedGloves", "SpikedGloves desc");
  Affection* NoseRings = new Affection("NoseRings", "NoseRings desc");
  Affection* Earrings = new Affection("Earrings", "Earrings desc");
  Affection* LongFingernails = new Affection("LongFingernails", "LongFingernails desc");
  Affection* SpikeHeeledBoots = new Affection("SpikeHeeledBoots", "SpikeHeeledBoots desc");
  Affection* WeirdContactLenses = new Affection("WeirdContactLenses", "WeirdContactLenses desc");
  Affection* FingerlessGloves = new Affection("FingerlessGloves", "FingerlessGloves desc");

  m_affections = {
    Tatoos,
    Mirrorshades,
    RitualScars,
    SpikedGloves,
    NoseRings,
    Earrings,
    LongFingernails,
    SpikeHeeledBoots,
    WeirdContactLenses,
    FingerlessGloves
  };
};

Affections::~Affections() {
  for (Affection* ptr: m_affections) {
    delete ptr;
    ptr = nullptr;
  }
};
