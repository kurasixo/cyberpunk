#include <string>
#include <vector>
#include "relatedPerson.h"


RelatedPerson::RelatedPerson(Dice* dice) {
  m_allEnemiesTypes = {
    "Ex friend",
    "Ex lover",
    "Relative",
    "Childhood enemy",
    "Person working for you",
    "Person you work for",
    "Partner or co-worker",
    "Booster gang member",
    "Corporate Exec",
    "Government Official"
  };

  m_allEnemiesCauses = {
    "Caused theother to lose face or status",
    "Causedthe loss of a lover, friend or relative",
    "Caused a major humilitiation",
    "Accused the other of cowardice or someother personal flaw",
    "Caused a physical you disability",
    "Deserted or betrayed the other",
    "Turned down other's offer of job or romantic involvement",
    "You just didn't like each other",
    "Was a romanticrival",
    "Foiled a plan of the other's"
  };

  m_allEnemiesFeelings = {
    "They hate you",
    "You hate them",
    "The feeling's mutual"
  };

  m_allYourIntentions = {
    "Go into a murderous, killing rage and rip his face off!",
    "Avoid the scum",
    "Backstab him indirectly",
    "Ignore the scum",
    "Rip into him verbally"
  };

  m_allEnemiesPacks = {
    "Just himself",
    "Just himself",
    "Just himself",
    "Himself and a few friends",
    "Himself and a few friends",
    "An entire Gang",
    "An entire Gang",
    "A small Corporation",
    "A large Corporation",
    "A nentire Government Agency",
  };

  m_allFriendsTypes = {
    "Like a big brother/sister to you",
    "Like a kid sister/brother to you",
    "A teacher or mentor",
    "A partner or co-worker",
    "An old lover",
    "An old enemy ",
    "Like a foster parent to you",
    "A relative",
    "Reconnect with an old childhood friend",
    "Met throughacommon interest"
  };

  BackStory* bs = new BackStory(dice);
  m_backstory = bs;

  Motivation* motivation = new Motivation(dice);
  m_motivation = motivation;
};

RelatedPerson::~RelatedPerson() {
  delete m_motivation;
  m_motivation = nullptr;

  delete m_backstory;
  m_backstory = nullptr;
};

std::string RelatedPerson::generateFriendType(Dice* dice) {
  return m_allFriendsTypes.at(dice->roll(m_allFriendsTypes.size()));
};

std::string RelatedPerson::generateEnemyType(Dice* dice) {
  return m_allEnemiesTypes.at(dice->roll(m_allEnemiesTypes.size()));
};

std::string RelatedPerson::generateEnemyCause(Dice* dice) {
  return m_allEnemiesCauses.at(dice->roll(m_allEnemiesCauses.size()));
};

std::string RelatedPerson::generateEnemyFeelings(Dice* dice) {
  return m_allEnemiesFeelings.at(dice->roll(m_allEnemiesFeelings.size()));
};

std::string RelatedPerson::generateYourIntentions(Dice* dice) {
  return m_allYourIntentions.at(dice->roll(m_allYourIntentions.size()));
};

std::string RelatedPerson::generateEnemyPack(Dice* dice) {
  return m_allEnemiesPacks.at(dice->roll(m_allEnemiesPacks.size()));
};



Enemy::Enemy(Dice* dice) : RelatedPerson(dice) {
  this->generateFieldsForEnemy(dice);
};

void Enemy::generateFieldsForEnemy(Dice* dice) {
  m_enemyType = this->generateEnemyType(dice);
  m_enemyCause = this->generateEnemyCause(dice);
  m_enemyFeelings = this->generateEnemyFeelings(dice);
  m_yourIntentions = this->generateYourIntentions(dice);
  m_enemyPack = this->generateEnemyPack(dice);

  m_description = m_enemyType +
    " with " + m_enemyPack +
    " because " + m_enemyCause +
    ". " + m_enemyFeelings +
    ". I am going to " + m_yourIntentions;
};

Friend::Friend(Dice* dice) : RelatedPerson(dice) {
  this->generateFieldsForFriend(dice);

  BackStory* bs = new BackStory(dice);
  m_backstory = bs;

  Motivation* motivation = new Motivation(dice);
  m_motivation = motivation;
}

void Friend::generateFieldsForFriend(Dice* dice) {
  m_friendType = this->generateFriendType(dice);
  m_description = m_friendType;
};
