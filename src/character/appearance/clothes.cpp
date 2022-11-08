#include <string>
#include <vector>
#include "clothes.h"

Clothes::Clothes(std::string name, std::string description) {
  m_name = name;
  m_description = description;
}

ClothesItems::ClothesItems() {
  Clothes* BikerLeathers = new Clothes("BikerLeathers", "BikerLeathers desc");
  Clothes* BikerJeans = new Clothes("BikerJeans", "BikerJeans desc");
  Clothes* CorporateSuits = new Clothes("CorporateSuits", "CorporateSuits desc");
  Clothes* Jumpsuits = new Clothes("Jumpsuits", "Jumpsuits desc");
  Clothes* Miniskirts = new Clothes("Miniskirts", "Miniskirts desc");
  Clothes* HighFashion = new Clothes("HighFashion", "HighFashion desc");
  Clothes* Cammos = new Clothes("Cammos", "Cammos desc");
  Clothes* NormalClothes = new Clothes("NormalClothes", "NormalClothes desc");
  Clothes* Nude = new Clothes("Nude", "Nude desc");
  Clothes* BagLadyChic = new Clothes("BagLadyChic", "BagLadyChic desc");

  m_clothesItems = {
    BikerLeathers,
    BikerJeans,
    CorporateSuits,
    Jumpsuits,
    Miniskirts,
    HighFashion,
    Cammos,
    NormalClothes,
    Nude,
    BagLadyChic
  };
}
