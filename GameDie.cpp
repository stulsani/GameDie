#include <cstdlib>
#include <time.h>

//class constructor that seeds the random number generator
GameDie::GameDie()
{
	srand(time(NULL));     //seed the random number generator globally
}

//generate a random number between 1-6 (inclusive) and return it
int GameDie::roll()
{
	return 1;
}


int GameDie::roll(int x)
{
	int y = 20 - x;
	int num = rand() % x + y;      //using rand() to generate random number 						   between x and 20 inclusive          
    	return num;
}