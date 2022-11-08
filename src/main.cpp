#include "dice/dice.h"
#include "character/character.h"
#include "character/backstory/backstory.h"
#include <string>
#include <iostream>


int main() {
  Dice* dice = new Dice;
  CharacterStats* charStats = new CharacterStats();
  Actions* actions = new Actions(charStats);
  Abilities* charAbilities = new Abilities(charStats);
  CharacterClasses* charClasses = new CharacterClasses(charAbilities);

  Races* races = new Races();
  ClothesItems* clothesItems = new ClothesItems();
  HairStyles* hairStyles = new HairStyles();
  Affections* affactions = new Affections();

  Character* npc = new Character(
    dice, charStats, charAbilities, charClasses, races, clothesItems, hairStyles, affactions);

  std::cout << npc->checkActionRoll(actions->m_allActions.at(0), dice->roll(10)) << std::endl;

  delete dice;
  dice = nullptr;

  delete npc;
  npc = nullptr;

  delete charAbilities;
  charAbilities = nullptr;

  delete charStats;
  charStats = nullptr;

  delete charClasses;
  charClasses = nullptr;

  return 0;
}
