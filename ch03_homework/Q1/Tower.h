#pragma once

class Tower {
public:
	int height;
	Tower();
	Tower(int height);
	int getHeight();
};

Tower::Tower()
{
	height = 1;
}

Tower::Tower(int height)
{
	this->height = height;
}

int Tower::getHeight()
{
	return height;
}