#include "Monster.h"



Monster::Monster(int id) : MovingObject(id)
{
	hp = 0;
	maxHp = 0;
}

int Monster::GetHp() const
{
	return hp;
}

void Monster::SetHp(int hp)
{
	this->hp = hp;
}

int Monster::GetMaxHp() const
{
	return maxHp;
}

void Monster::SetMaxHp(int maxHp)
{
	this->maxHp = maxHp;
}
