#include <stdio.h>
#include "sample.h"

void Sample::print(int a, int b){
	printf("a + b = %d\n", a + b);

}

int main(int args, const char* arg[]){

	int a = -1;
	int b = -2;

	Sample::print(a,b);

	return 0;
}


