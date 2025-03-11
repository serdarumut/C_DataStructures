#include <stdio.h>
#include <stdlib.h>

int benimstrlen(char *p)
{
	int uzunluk = 0;
	int i = 0;
	
	for(; p[i] != '\0';i++)
	{
		uzunluk++;
	}
	return uzunluk;
}



int main(int argc, char *argv[]) {
		
	char yazi[] = "turan";
	
	char *p = yazi;
	
	printf("%d", benimstrlen(yazi));
	
	return 0;
}
