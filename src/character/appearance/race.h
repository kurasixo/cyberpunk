#ifndef CHARACTER_RACE_H
#define CHARACTER_RACE_H

#include <string>
#include <vector>


class Race {
  public:
    Race(std::string name, std::string description);

    std::string m_name;
    std::string m_description;
};

class Races {
  public:
    Races();
    ~Races();

    std::vector<Race*> m_races;
};

#endif
