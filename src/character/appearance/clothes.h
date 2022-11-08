#ifndef CHARACTER_CLOTHES_H
#define CHARACTER_CLOTHES_H

#include <string>
#include <vector>


class Clothes {
  public:
    Clothes(std::string name, std::string description);

    std::string m_name;
    std::string m_description;
};

class ClothesItems {
  public:
    ClothesItems();

    std::vector<Clothes*> m_clothesItems;
};

#endif
