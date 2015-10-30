#include "Rng.h"


Rng::Rng()
{
	dre = new default_random_engine(dev);

}


Rng::~Rng()
{
}


int Rng::getRandom(int min, int max){
	uniform_int_distribution<int> dist{ min, max };
	return dist(dre);
}