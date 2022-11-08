#ifndef CHARACTER_ABILITY_H
#define CHARACTER_ABILITY_H

#include <string>
#include <vector>
#include "stat.h"


class Ability {
  public:
    Ability(std::string nameParam, std::string descParam); // unique abilities
    Ability(std::string nameParam, std::string descParam, CharacterStat* baseStat);
    ~Ability() = default;

    unsigned short int m_minValue = 1;
    unsigned short int m_maxValue = 10;

    bool m_isUnique;
    std::string m_name;
    std::string m_description;
    CharacterStat* m_baseStat;
};

class Abilities final {
  public:
    Abilities(CharacterStats* charStats);
    ~Abilities();

    // Unique abilites
    Ability* m_CombatSense;
    Ability* m_CharismaticLeadership;
    Ability* m_Interface;
    Ability* m_JuryRig;
    Ability* m_MedicalTech;
    Ability* m_Credibility;
    Ability* m_Authority;
    Ability* m_Resources;
    Ability* m_Streetdeal;
    Ability* m_Family;
    std::vector<Ability*> m_allUniqueAbilites;

    // Nonunique abilities
    // Attractive
    Ability* m_PersonalGrooming;
    Ability* m_WardrobeAndStyle;

    // Body
    Ability* m_Endurance;
    Ability* m_StrengthFeat;
    Ability* m_Swimming;

    // Cool/Will
    Ability* m_Interrogation;
    Ability* m_Intimidate;
    Ability* m_Oratory;
    Ability* m_ResistTortureDrugs;
    Ability* m_Streetwise;

    // Emptathy
    Ability* m_HumanPerception;
    Ability* m_Interview;
    Ability* m_Leadership;
    Ability* m_Seduction;
    Ability* m_Social;
    Ability* m_Persuasion;
    Ability* m_Perform;

    // Intellect
    Ability* m_Accounting;
    Ability* m_Anthropology;
    Ability* m_AwarenessAndNotice;
    Ability* m_Biology;
    Ability* m_Botany;
    Ability* m_Chemistry;
    Ability* m_Composition;
    Ability* m_DiagnoseIllness;
    Ability* m_EducationAndGenKnow;
    Ability* m_Expert;
    Ability* m_Gamble;
    Ability* m_Geology;
    Ability* m_HideAndEvade;
    Ability* m_History;
    Ability* m_Language;
    Ability* m_LibrarySearch;
    Ability* m_Mathematics;
    Ability* m_Physics;
    Ability* m_Programming;
    Ability* m_ShadowAndTrack;
    Ability* m_StockMarket;
    Ability* m_SystemKnowledge;
    Ability* m_Teaching;
    Ability* m_WildernessSurvival;
    Ability* m_Zoology;

    // Reflex
    Ability* m_Archery;
    Ability* m_Athletics;
    Ability* m_Brawling;
    Ability* m_Dance;
    Ability* m_DodgeAndEscape;
    Ability* m_Driving;
    Ability* m_Fencing;
    Ability* m_Handgun;
    Ability* m_HeavyWeapons;
    Ability* m_MartialArt;
    Ability* m_Meelee;
    Ability* m_Motorcycle;
    Ability* m_OperateHvyMachinery;
    Ability* m_Pilot;
    Ability* m_Rifle;
    Ability* m_Stealth;
    Ability* m_Submachinegun;

    // Tech
    Ability* m_AeroTech;
    Ability* m_AVTech;
    Ability* m_BasicTech;
    Ability* m_CryotankOperation;
    Ability* m_CyberdeckDesign;
    Ability* m_CyberTech;
    Ability* m_Demolitions;
    Ability* m_Disguise;
    Ability* m_Electronics;
    Ability* m_ElectSecurity;
    Ability* m_FirstAid;
    Ability* m_Forgery;
    Ability* m_GyroTech;
    Ability* m_Paint;
    Ability* m_PhotoVideo;
    Ability* m_Pharmacuticals;
    Ability* m_PickLock;
    Ability* m_PickPocket;
    Ability* m_PlayInstrument;
    Ability* m_WeaponSmith;

    std::vector<Ability*> m_allNonUniqueAbilites;
};

#endif
