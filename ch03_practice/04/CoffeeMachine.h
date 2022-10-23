#pragma once
class CoffeeMachine
{
	int coffee;
	int water;
	int sugar;
public:
	CoffeeMachine(int coffee, int water, int suger);
	void show();
	void drinkEspresso();
	void drinkAmericano();
	void drinkSugarCoffee();
	void fill();
};

