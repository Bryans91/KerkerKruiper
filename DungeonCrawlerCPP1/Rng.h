#pragma once
#include <iostream>
#include <random>
using namespace std;
class Rng
{
public:
	Rng();
	~Rng();
	random_device dev;
	default_random_engine* dre;


	int getRandom(int min, int max);
};

