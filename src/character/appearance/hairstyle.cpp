#include <string>
#include <vector>
#include "hairstyle.h"


HairStyle::HairStyle(std::string name, std::string description) {
  m_name = name;
  m_description = description;
};

HairStyles::HairStyles() {
  HairStyle* Mohawk = new HairStyle("Mohawk", "Mohawk desc");
  HairStyle* LongRatty = new HairStyle("LongRatty", "LongRatty desc");
  HairStyle* ShortSpiked = new HairStyle("ShortSpiked", "ShortSpiked desc");
  HairStyle* Wild = new HairStyle("Wild", "Wild desc");
  HairStyle* Bald = new HairStyle("Bald", "Bald desc");
  HairStyle* Striped = new HairStyle("Striped", "Striped desc");
  HairStyle* Tinted = new HairStyle("Tinted", "Tinted desc");
  HairStyle* Short = new HairStyle("Short", "Short desc");
  HairStyle* Curly = new HairStyle("Curly", "Curly desc");
  HairStyle* LongStraight = new HairStyle("LongStraight", "LongStraight desc");

  m_hairStyles = {
    Mohawk,
    LongRatty,
    ShortSpiked,
    Wild,
    Bald,
    Striped,
    Tinted,
    Short,
    Curly,
    LongStraight
  };
}

HairStyles::~HairStyles() {
  for (HairStyle* ptr: m_hairStyles) {
    delete ptr;
    ptr = nullptr;
  }
}
