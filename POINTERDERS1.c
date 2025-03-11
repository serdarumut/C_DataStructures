#include <stdio.h>
#include <stdlib.h>

void degerdegistir(int a , int b)
{
	int gecici = a;
	
	a = b;
	b = gecici;
	
	printf("a= %d , b= %d \n", a,b);
}



int main(int argc, char *argv[]) {
	
	int x=5, y=10;
	degerdegistir(x,y);
	
	printf("x = %d , y= %d",x ,y);
	
	
	return 0;
}






/*

int a = 5, *ap;
	float b = 3.2, *bp;
	double c = 3.412232, *cp;
	char d = 'a', *dp; 
	
	int sayilar[5] = {1,2,3,4,5};
	
	int *arrayp;
	
		
	ap = &a;
	bp = &b;
	cp = &c;
	dp = &d;
	
	arrayp = &sayilar[1];
	
	printf("%u adresindeki intin degeri : %d \n", ap, *ap);
	printf("%u adresindeki floatin degeri : %f \n", bp, *bp);
	printf("%u adresindeki double degeri : %lf \n", cp, *cp);
	printf("%u adresindeki charin degeri : %c \n", dp, *dp);	
	printf("%u adresindeki sayilarin elemaninin degeri : %d", arrayp, *arrayp);
	
*/

/*

	int i,j=1;
	int *jp1, *jp2 = &j;
	
	jp1 = jp2;
	
	i= ++(*jp2);
	
	*jp2 = *jp1 +i;
	printf("i = %d , j = %d, *jp1 = %d, *jp2 = %d", i , j , *jp1 , *jp2);
	

*/
