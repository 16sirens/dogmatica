#pragma once
class Wizard
{
private:
	//attributes
	int health = 0;
	int speed = 0;

public:
	//constructer and destructure
	Wizard();
	~Wizard();



	//functions
	void setHealth(Wizard& target, int health);
	void setSpeed(Wizard& target, int speed);
	void TakeTurn(Wizard& enemy);
	void CastSpell(Wizard& target);
	void ReceiveDamage(int damage);
	int getHealth();
	int getSpeed(Wizard& target);

};

