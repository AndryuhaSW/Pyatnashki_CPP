#pragma once

//игровое поле
static int map[4][4] =
{
	{1,2,3,4},
	{5,6,7,8},
	{9,10,11,12},
	{13,14,-1,15},
};

ref class Game
{
public:
	static int GetYourPosition(int min, int sec);
};

