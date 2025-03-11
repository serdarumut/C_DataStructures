#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int sayilar[5] = {3,5,7,9,11};
	
	int *p = sayilar;
	
	printf("%d \n", *p);
	printf("%d \n", *(p+1));
	printf("%d \n", *(p+2));
	printf("%d \n", *(p+3));
	printf("%d \n", *(p+4));
	return 0;
}
