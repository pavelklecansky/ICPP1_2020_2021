#include "Monster.h"

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
