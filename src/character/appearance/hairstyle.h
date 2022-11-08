#ifndef CHARACTER_HAIRSTYLE_H
#define CHARACTER_HAIRSTYLE_H

#include <string>
#include <vector>


class HairStyle {
  public:
    HairStyle(std::string name, std::string description);

    std::string m_name;
    std::string m_description;
};

class HairStyles {
  public:
    HairStyles();
    ~HairStyles();

    std::vector<HairStyle*> m_hairStyles;
};

#endif
