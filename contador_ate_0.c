#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("digite o valor de x: ");
    scanf("%i", &x);
	while (x>0){
		if (x%2==0){
			printf("%i\n", x);
			x=x-1;
		}
		else if (x%2!=0){
			x=x-1;
		}
	}
	while (x<0){
		if (x%2==0){
			printf("%i\n", x);
			x=x+1;
		}
		else if (x%2!=0){
			x=x+1;
		}
	}
	if (x==0){
		printf("0\n");
		printf("fechando o programa . . .");
	}
    
    return 0;
}
