#ifndef CHARACTER_AFFECTIONS_H
#define CHARACTER_AFFECTIONS_H

#include <string>
#include <vector>


class Affection {
  public:
    Affection(std::string name, std::string description);

    std::string m_name;
    std::string m_description;
};

class Affections {
  public:
    Affections();
    ~Affections();

    std::vector<Affection*> m_affections;
};

#endif
