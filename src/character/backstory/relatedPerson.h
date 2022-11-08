#ifndef CHARACTER_RELATED_PERSON_H
#define CHARACTER_RELATED_PERSON_H

#include <string>
#include <vector>
#include "backstory.h"
#include "motivation.h"
#include "../../dice/dice.h"

class RelatedPerson {
  public:
    RelatedPerson(Dice* dice);
    ~RelatedPerson();

    std::string m_description;
    Motivation* m_motivation;
    BackStory* m_backstory;

  protected:
    std::string generateFriendType(Dice* dice);

    std::string generateEnemyType(Dice* dice);
    std::string generateEnemyCause(Dice* dice);
    std::string generateEnemyFeelings(Dice* dice);
    std::string generateYourIntentions(Dice* dice);
    std::string generateEnemyPack(Dice* dice);

    std::vector<std::string> m_allEnemiesTypes;
    std::vector<std::string> m_allEnemiesCauses;
    std::vector<std::string> m_allEnemiesFeelings;
    std::vector<std::string> m_allYourIntentions;
    std::vector<std::string> m_allEnemiesPacks;

    std::vector<std::string> m_allFriendsTypes;
};

class Enemy: public RelatedPerson {
  public:
    Enemy(Dice* dice);

    std::string m_enemyType;
    std::string m_enemyCause;
    std::string m_enemyFeelings;
    std::string m_yourIntentions;
    std::string m_enemyPack;

  private:
    void generateFieldsForEnemy(Dice* dice);
};

class Friend: public RelatedPerson {
  public:
    Friend(Dice* dice);

    std::string m_friendType;

  private:
    void generateFieldsForFriend(Dice* dice);
};

#endif
