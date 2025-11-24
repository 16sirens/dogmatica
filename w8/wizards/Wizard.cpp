#include "Wizard.h"

Wizard::Wizard()
{
}

Wizard::~Wizard()
{
}



void Wizard::TakeTurn(Wizard& enemy)
{
};
void Wizard::CastSpell(Wizard& target)
{
	target.health -= 1;
};
void Wizard::ReceiveDamage(int damage)
{
};
void Wizard::setHealth(Wizard& target, int health)
{
	target.health = health;
}
void Wizard::setSpeed(Wizard& target, int speed)
{
	target.speed = speed;
}
int Wizard::getHealth()
{
	return health;
}
int Wizard::getSpeed(Wizard& target)
{
	return target.speed;
}