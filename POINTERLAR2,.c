#include <stdio.h>
#include <stdlib.h>

// CALL BY REFERENCE

void degerdegistir(int *a, int *b)
{
	int tutucu = *a;
	
	*a = *b;
	
	*b = tutucu;
}


int main(int argc, char *argv[]) {
	
	int x=5, y=10;
	
	degerdegistir(&x, %y);
	
	printf("x: %d , y : %d", x,y);
	
	return 0;
}
