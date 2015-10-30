#pragma once
#include "Room.h"
#include <vector>

class Dungeon
{
public:
	Room* start;
	//room end?

	Dungeon();
	~Dungeon();


	void CreateDungeon(int size);
};

