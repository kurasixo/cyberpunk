#include "dice/dice.h"
#include "character/character.h"
#include <string>
#include <iostream>


int main() {
  Dice* dice = new Dice;
  CharacterStats* charStats = new CharacterStats();
  Abilities* charAbilities = new Abilities(charStats);
  CharacterClasses* charClasses = new CharacterClasses(charAbilities);

  Races* races = new Races();
  ClothesItems* clothesItems = new ClothesItems();
  HairStyles* hairStyles = new HairStyles();
  Affections* affactions = new Affections();

  Character* npc = new Character(
    dice, charStats, charAbilities, charClasses, races, clothesItems, hairStyles, affactions);

  npc->print();

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
