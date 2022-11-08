#include <string>
#include <vector>
#include "motivation.h"


Motivation::Motivation(Dice* dice) {
  m_allPersonalityTraits = {
    "Shy and secretive",
    "Rebellious, antisocial, violent",
    "Arrogant, proud and aloof",
    "Moody, rash and headstrong",
    "Picky, fussy and nervous",
    "Stable and serious",
    "Silly and fluffheaded",
    "Sneaky and deceptive",
    "Intellectual and detached",
    "Friendly and outgoing"
  };

  m_allValuablePeople = {
    "A parent",
    "Brother or sister",
    "Lover",
    "Friend",
    "Yourself",
    "A pet",
    "Teacher or mentor",
    "Public figure",
    "A personal hero",
    "No one"
  };

  m_allValuableThings = {
    "Money",
    "Honor",
    "Your word",
    "Honesty",
    "Knowledge",
    "Vengeance",
    "Love",
    "Power",
    "Having a good time",
    "Friendship"
  };

  m_allFeelingsAboutPeople = {
    "Neutral",
    "Neutral",
    "Like almost everyone",
    "Hate almost everyone",
    "People are tools. Use them for your own goals and discard them",
    "Every personis a valuable individual",
    "People are obstacles to be destroyed if they cross me",
    "People are untrustworthy. Don't depend on anyone",
    "Wipe 'em all out and give the place to the cockroaches"
    "People are wonderful"
  };

  m_allValuablePossesions = {
    "A weapon",
    "A tool",
    "A piece of clothing A photograph",
    "A book or diary",
    "A recording",
    "A musical instrument",
    "A piece of jewelry",
    "A toy",
    "A letter"
  };

  this->generateMotivation(dice);
};

void Motivation::generateMotivation(Dice* dice) {
  m_personalTrait = this->generatePersonalTrait(dice);
  m_valuablePerson = this->generateValuablePerson(dice);
  m_valuableThing = this->generateValuableThing(dice);
  m_feelingsAboutPeople = this->generateFeelingsAboutPeople(dice);
  m_valuablePossesion = this->generateValuablePossesion(dice);

  m_motivation = "Personal Trait: " + m_personalTrait
    + "; Valuable person: " + m_valuablePerson
    + "; Valuable Thing: " + m_valuableThing
    + "; Feelings about other people: " + m_feelingsAboutPeople
    + "; Valuable possesion: " + m_valuablePossesion;
};

std::string Motivation::generatePersonalTrait(Dice* dice) {
  return m_allPersonalityTraits.at(dice->roll(m_allPersonalityTraits.size()));
};

std::string Motivation::generateValuablePerson(Dice* dice) {
  return m_allValuablePeople.at(dice->roll(m_allValuablePeople.size()));
};

std::string Motivation::generateValuableThing(Dice* dice) {
  return m_allValuableThings.at(dice->roll(m_allValuableThings.size()));
};

std::string Motivation::generateFeelingsAboutPeople(Dice* dice) {
  return m_allFeelingsAboutPeople.at(dice->roll(m_allFeelingsAboutPeople.size()));
};

std::string Motivation::generateValuablePossesion(Dice* dice) {
  return m_allValuablePossesions.at(dice->roll(m_allValuablePossesions.size()));
};

