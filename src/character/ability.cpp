#include <string>
#include "ability.h"


Ability::Ability(
  std::string nameParam,
  std::string descParam
) {
  m_name = nameParam;
  m_description = descParam;
  m_isUnique = true;
}

Ability::Ability(
  std::string nameParam,
  std::string descParam,
  CharacterStat* baseStat
) {
  m_name = nameParam;
  m_description = descParam;
  m_isUnique = false;
  m_baseStat = baseStat;
}

Abilities::Abilities(CharacterStats* charStats) {
  m_CombatSense = new Ability("Combat Sense", "Combat Sense");
  m_CharismaticLeadership = new Ability("Charismatic leadership", "Charismatic leadership");
  m_Interface = new Ability("Interface", "Interface");
  m_JuryRig = new Ability("Jury rig", "Jury rig");
  m_MedicalTech = new Ability("Medical tech", "Medical tech");
  m_Credibility = new Ability("Credibility", "Credibility");
  m_Authority = new Ability("Authority", "Authority");
  m_Resources = new Ability("Resources", "Resources");
  m_Streetdeal = new Ability("Streetdeal", "Streetdeal");
  m_Family = new Ability("Family", "Family");

  m_allUniqueAbilites = {
    m_CombatSense,
    m_CharismaticLeadership,
    m_Interface,
    m_JuryRig,
    m_MedicalTech,
    m_Credibility,
    m_Authority,
    m_Resources,
    m_Streetdeal,
    m_Family
  };

  // charStats->m_Attractive
  m_PersonalGrooming = new Ability("Personal Grooming", "Personal Grooming Desc", charStats->m_Attractive);
  m_WardrobeAndStyle = new Ability("Wardrobe & Style", "Wardrobe & Style Desc", charStats->m_Attractive);

  // charStats->m_Body
  m_Endurance = new Ability("Endurance", "Endurance Desc", charStats->m_Body);
  m_StrengthFeat = new Ability("Strength Feat", "Strength Feat Desc", charStats->m_Body);
  m_Swimming = new Ability("Swimming", "Swimming Desc", charStats->m_Body);

  // charStats->m_Cool/Will
  m_Interrogation = new Ability("Interrogation", "Interrogation Desc", charStats->m_Cool);
  m_Intimidate = new Ability("Intimidate", "Intimidate Desc", charStats->m_Cool);
  m_Oratory = new Ability("Oratory", "Oratory Desc", charStats->m_Cool);
  m_ResistTortureDrugs = new Ability("ResistTortureDrugs", "ResistTortureDrugs Desc", charStats->m_Cool);
  m_Streetwise = new Ability("Streetwise", "Streetwise Desc", charStats->m_Cool);

  // Emptathy
  m_HumanPerception = new Ability("HumanPerception", "HumanPerception Desc", charStats->m_Empathy);
  m_Interview = new Ability("Interview", "Interview Desc", charStats->m_Empathy);
  m_Leadership = new Ability("Leadership", "Leadership Desc", charStats->m_Empathy);
  m_Seduction = new Ability("Seduction", "Seduction Desc", charStats->m_Empathy);
  m_Social = new Ability("Social", "Social Desc", charStats->m_Empathy);
  m_Persuasion = new Ability("Persuasion", "Persuasion Desc", charStats->m_Empathy);
  m_Perform = new Ability("Perform", "Perform Desc", charStats->m_Empathy);

  // charStats->m_Intellect
  m_Accounting = new Ability("Accounting", "Accounting Desc", charStats->m_Intellect);
  m_Anthropology = new Ability("Anthropology", "Anthropology Desc", charStats->m_Intellect);
  m_AwarenessAndNotice = new Ability("AwarenessAndNotice", "AwarenessAndNotice Desc", charStats->m_Intellect);
  m_Biology = new Ability("Biology", "Biology Desc", charStats->m_Intellect);
  m_Botany = new Ability("Botany", "Botany Desc", charStats->m_Intellect);
  m_Chemistry = new Ability("Chemistry", "Chemistry Desc", charStats->m_Intellect);
  m_Composition = new Ability("Composition", "Composition Desc", charStats->m_Intellect);
  m_DiagnoseIllness = new Ability("Diagnose Illness", "Diagnose Illness Desc", charStats->m_Intellect);
  m_EducationAndGenKnow = new Ability("Education &Gen.Know", "Education &Gen.Know Desc", charStats->m_Intellect);
  m_Expert = new Ability("Expert", "Expert Desc", charStats->m_Intellect);
  m_Gamble = new Ability("Gamble", "Gamble Desc", charStats->m_Intellect);
  m_Geology = new Ability("Geology", "Geology Desc", charStats->m_Intellect);
  m_HideAndEvade = new Ability("Hide/Evade", "Hide/Evade Desc", charStats->m_Intellect);
  m_History = new Ability("History", "History Desc", charStats->m_Intellect);
  m_Language = new Ability("Language", "Language Desc", charStats->m_Intellect);
  m_LibrarySearch = new Ability("LibrarySearch", "LibrarySearch Desc", charStats->m_Intellect);
  m_Mathematics = new Ability("Mathematics", "Mathematics Desc", charStats->m_Intellect);
  m_Physics = new Ability("Physics", "Physics Desc", charStats->m_Intellect);
  m_Programming = new Ability("Programming", "Programming Desc", charStats->m_Intellect);
  m_ShadowAndTrack = new Ability("ShadowAndTrack", "ShadowAndTrack Desc", charStats->m_Intellect);
  m_StockMarket = new Ability("StockMarket", "StockMarket Desc", charStats->m_Intellect);
  m_SystemKnowledge = new Ability("System Knowledge", "System Knowledge Desc", charStats->m_Intellect);
  m_Teaching = new Ability("Teaching", "Teaching Desc", charStats->m_Intellect);
  m_WildernessSurvival = new Ability("WildernessSurvival", "WildernessSurvival Desc", charStats->m_Intellect);
  m_Zoology = new Ability("Zoology", "Zoology Desc", charStats->m_Intellect);

  // charStats->m_Reflex
  m_Archery = new Ability("Archery", "Archery Desc", charStats->m_Reflex);
  m_Athletics = new Ability("Athletics", "Athletics Desc", charStats->m_Reflex);
  m_Brawling = new Ability("Brawling", "Brawling Desc", charStats->m_Reflex);
  m_Dance = new Ability("Dance", "Dance Desc", charStats->m_Reflex);
  m_DodgeAndEscape = new Ability("DodgeAndEscape", "DodgeAndEscape Desc", charStats->m_Reflex);
  m_Driving = new Ability("Driving", "Driving Desc", charStats->m_Reflex);
  m_Fencing = new Ability("Fencing", "Fencing Desc", charStats->m_Reflex);
  m_Handgun = new Ability("Handgun", "Handgun Desc", charStats->m_Reflex);
  m_HeavyWeapons = new Ability("HeavyWeapons", "HeavyWeapons Desc", charStats->m_Reflex);
  m_MartialArt = new Ability("MartialArt", "MartialArt Desc", charStats->m_Reflex);
  m_Meelee = new Ability("Meelee", "Meelee Desc", charStats->m_Reflex);
  m_Motorcycle = new Ability("Motorcycle", "Motorcycle Desc", charStats->m_Reflex);
  m_OperateHvyMachinery = new Ability("OperateHvyMachinery", "OperateHvyMachinery Desc", charStats->m_Reflex);
  m_Pilot = new Ability("Pilot", "Pilot Desc", charStats->m_Reflex);
  m_Rifle = new Ability("Rifle", "Rifle Desc", charStats->m_Reflex);
  m_Stealth = new Ability("Stealth", "Stealth Desc", charStats->m_Reflex);
  m_Submachinegun = new Ability("Submachinegun", "Submachinegun Desc", charStats->m_Reflex);

  // Tech
  m_AeroTech = new Ability("AeroTech", "AeroTech Desc", charStats->m_TechStat);
  m_AVTech = new Ability("AVTech", "AVTech Desc", charStats->m_TechStat);
  m_BasicTech = new Ability("BasicTech", "BasicTech Desc", charStats->m_TechStat);
  m_CryotankOperation = new Ability("CryotankOperation", "CryotankOperation Desc", charStats->m_TechStat);
  m_CyberdeckDesign = new Ability("CyberdeckDesign", "CyberdeckDesign Desc", charStats->m_TechStat);
  m_CyberTech = new Ability("CyberTech", "CyberTech Desc", charStats->m_TechStat);
  m_Demolitions = new Ability("Demolitions", "Demolitions Desc", charStats->m_TechStat);
  m_Disguise = new Ability("Disguise", "Disguise Desc", charStats->m_TechStat);
  m_Electronics = new Ability("Electronics", "Electronics Desc", charStats->m_TechStat);
  m_ElectSecurity = new Ability("ElectSecurity", "ElectSecurity Desc", charStats->m_TechStat);
  m_FirstAid = new Ability("FirstAid", "FirstAid Desc", charStats->m_TechStat);
  m_Forgery = new Ability("Forgery", "Forgery Desc", charStats->m_TechStat);
  m_GyroTech = new Ability("GyroTech", "GyroTech Desc", charStats->m_TechStat);
  m_Paint = new Ability("Paint", "Paint Desc", charStats->m_TechStat);
  m_PhotoVideo = new Ability("PhotoVideo", "PhotoVideo Desc", charStats->m_TechStat);
  m_Pharmacuticals = new Ability("Pharmacuticals", "Pharmacuticals Desc", charStats->m_TechStat);
  m_PickLock = new Ability("PickLock", "PickLock Desc", charStats->m_TechStat);
  m_PickPocket = new Ability("PickPocket", "PickPocket Desc", charStats->m_TechStat);
  m_PlayInstrument = new Ability("PlayInstrument", "PlayInstrument Desc", charStats->m_TechStat);
  m_WeaponSmith = new Ability("WeaponSmith", "WeaponSmith Desc", charStats->m_TechStat);

  m_allNonUniqueAbilites = {
    m_PersonalGrooming,
    m_WardrobeAndStyle,
    m_Endurance,
    m_StrengthFeat,
    m_Swimming,
    m_Interrogation,
    m_Intimidate,
    m_Oratory,
    m_ResistTortureDrugs,
    m_Streetwise,
    m_HumanPerception,
    m_Interview,
    m_Leadership,
    m_Seduction,
    m_Social,
    m_Persuasion,
    m_Perform,
    m_Accounting,
    m_Anthropology,
    m_AwarenessAndNotice,
    m_Biology,
    m_Botany,
    m_Chemistry,
    m_Composition,
    m_DiagnoseIllness,
    m_EducationAndGenKnow,
    m_Expert,
    m_Gamble,
    m_Geology,
    m_HideAndEvade,
    m_History,
    m_Language,
    m_LibrarySearch,
    m_Mathematics,
    m_Physics,
    m_Programming,
    m_ShadowAndTrack,
    m_StockMarket,
    m_SystemKnowledge,
    m_Teaching,
    m_WildernessSurvival,
    m_Zoology,
    m_Archery,
    m_Athletics,
    m_Brawling,
    m_Dance,
    m_DodgeAndEscape,
    m_Driving,
    m_Fencing,
    m_Handgun,
    m_HeavyWeapons,
    m_MartialArt,
    m_Meelee,
    m_Motorcycle,
    m_OperateHvyMachinery,
    m_Pilot,
    m_Rifle,
    m_Stealth,
    m_Submachinegun,
    m_AeroTech,
    m_AVTech,
    m_BasicTech,
    m_CryotankOperation,
    m_CyberdeckDesign,
    m_CyberTech,
    m_Demolitions,
    m_Disguise,
    m_Electronics,
    m_ElectSecurity,
    m_FirstAid,
    m_Forgery,
    m_GyroTech,
    m_Paint,
    m_PhotoVideo,
    m_Pharmacuticals,
    m_PickLock,
    m_PickPocket,
    m_PlayInstrument,
    m_WeaponSmith
  };
}

Abilities::~Abilities() {
  delete m_CombatSense;
  m_CombatSense = nullptr;
  delete m_CharismaticLeadership;
  m_CharismaticLeadership = nullptr;
  delete m_Interface;
  m_Interface = nullptr;
  delete m_JuryRig;
  m_JuryRig = nullptr;
  delete m_MedicalTech;
  m_MedicalTech = nullptr;
  delete m_Credibility;
  m_Credibility = nullptr;
  delete m_Authority;
  m_Authority = nullptr;
  delete m_Resources;
  m_Resources = nullptr;
  delete m_Streetdeal;
  m_Streetdeal = nullptr;
  delete m_Family;
  m_Family = nullptr;
  delete m_PersonalGrooming;
  m_PersonalGrooming = nullptr;
  delete m_WardrobeAndStyle;
  m_WardrobeAndStyle = nullptr;
  delete m_Endurance;
  m_Endurance = nullptr;
  delete m_StrengthFeat;
  m_StrengthFeat = nullptr;
  delete m_Swimming;
  m_Swimming = nullptr;
  delete m_Interrogation;
  m_Interrogation = nullptr;
  delete m_Intimidate;
  m_Intimidate = nullptr;
  delete m_Oratory;
  m_Oratory = nullptr;
  delete m_ResistTortureDrugs;
  m_ResistTortureDrugs = nullptr;
  delete m_Streetwise;
  m_Streetwise = nullptr;
  delete m_HumanPerception;
  m_HumanPerception = nullptr;
  delete m_Interview;
  m_Interview = nullptr;
  delete m_Leadership;
  m_Leadership = nullptr;
  delete m_Seduction;
  m_Seduction = nullptr;
  delete m_Social;
  m_Social = nullptr;
  delete m_Persuasion;
  m_Persuasion = nullptr;
  delete m_Perform;
  m_Perform = nullptr;
  delete m_Accounting;
  m_Accounting = nullptr;
  delete m_Anthropology;
  m_Anthropology = nullptr;
  delete m_AwarenessAndNotice;
  m_AwarenessAndNotice = nullptr;
  delete m_Biology;
  m_Biology = nullptr;
  delete m_Botany;
  m_Botany = nullptr;
  delete m_Chemistry;
  m_Chemistry = nullptr;
  delete m_Composition;
  m_Composition = nullptr;
  delete m_DiagnoseIllness;
  m_DiagnoseIllness = nullptr;
  delete m_EducationAndGenKnow;
  m_EducationAndGenKnow = nullptr;
  delete m_Expert;
  m_Expert = nullptr;
  delete m_Gamble;
  m_Gamble = nullptr;
  delete m_Geology;
  m_Geology = nullptr;
  delete m_HideAndEvade;
  m_HideAndEvade = nullptr;
  delete m_History;
  m_History = nullptr;
  delete m_Language;
  m_Language = nullptr;
  delete m_LibrarySearch;
  m_LibrarySearch = nullptr;
  delete m_Mathematics;
  m_Mathematics = nullptr;
  delete m_Physics;
  m_Physics = nullptr;
  delete m_Programming;
  m_Programming = nullptr;
  delete m_ShadowAndTrack;
  m_ShadowAndTrack = nullptr;
  delete m_StockMarket;
  m_StockMarket = nullptr;
  delete m_SystemKnowledge;
  m_SystemKnowledge = nullptr;
  delete m_Teaching;
  m_Teaching = nullptr;
  delete m_WildernessSurvival;
  m_WildernessSurvival = nullptr;
  delete m_Zoology;
  m_Zoology = nullptr;
  delete m_Archery;
  m_Archery = nullptr;
  delete m_Athletics;
  m_Athletics = nullptr;
  delete m_Brawling;
  m_Brawling = nullptr;
  delete m_Dance;
  m_Dance = nullptr;
  delete m_DodgeAndEscape;
  m_DodgeAndEscape = nullptr;
  delete m_Driving;
  m_Driving = nullptr;
  delete m_Fencing;
  m_Fencing = nullptr;
  delete m_Handgun;
  m_Handgun = nullptr;
  delete m_HeavyWeapons;
  m_HeavyWeapons = nullptr;
  delete m_MartialArt;
  m_MartialArt = nullptr;
  delete m_Meelee;
  m_Meelee = nullptr;
  delete m_Motorcycle;
  m_Motorcycle = nullptr;
  delete m_OperateHvyMachinery;
  m_OperateHvyMachinery = nullptr;
  delete m_Pilot;
  m_Pilot = nullptr;
  delete m_Rifle;
  m_Rifle = nullptr;
  delete m_Stealth;
  m_Stealth = nullptr;
  delete m_Submachinegun;
  m_Submachinegun = nullptr;
  delete m_AeroTech;
  m_AeroTech = nullptr;
  delete m_AVTech;
  m_AVTech = nullptr;
  delete m_BasicTech;
  m_BasicTech = nullptr;
  delete m_CryotankOperation;
  m_CryotankOperation = nullptr;
  delete m_CyberdeckDesign;
  m_CyberdeckDesign = nullptr;
  delete m_CyberTech;
  m_CyberTech = nullptr;
  delete m_Demolitions;
  m_Demolitions = nullptr;
  delete m_Disguise;
  m_Disguise = nullptr;
  delete m_Electronics;
  m_Electronics = nullptr;
  delete m_ElectSecurity;
  m_ElectSecurity = nullptr;
  delete m_FirstAid;
  m_FirstAid = nullptr;
  delete m_Forgery;
  m_Forgery = nullptr;
  delete m_GyroTech;
  m_GyroTech = nullptr;
  delete m_Paint;
  m_Paint = nullptr;
  delete m_PhotoVideo;
  m_PhotoVideo = nullptr;
  delete m_Pharmacuticals;
  m_Pharmacuticals = nullptr;
  delete m_PickLock;
  m_PickLock = nullptr;
  delete m_PickPocket;
  m_PickPocket = nullptr;
  delete m_PlayInstrument;
  m_PlayInstrument = nullptr;
  delete m_WeaponSmith;
  m_WeaponSmith = nullptr;
}
