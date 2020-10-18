#pragma once
#ifndef MONSTER_H
#define MONSTER_H

#include "MovingObject.h"
class Monster :public MovingObject
{
	int hp;
	int maxHp;
public:
	Monster(int id);
	int GetHp() const;
	void SetHp(int hp);
	int GetMaxHp() const;
	void SetMaxHp(int maxHp);
};
#endif
