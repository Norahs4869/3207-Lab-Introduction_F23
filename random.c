#include "random.h"
#include <stdio.h>
#include <stdlib.h>

char randchar(){

	char*  alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int randNum = rand()% 26;
	return alphabet[randNum];
		
}
