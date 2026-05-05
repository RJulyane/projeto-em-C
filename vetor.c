#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    int j;
    printf("qual o tamanho do vetor?");
    scanf("%i", &i);
    
    char vetorzin[i];
    for(j=0;j<i;j++){
		printf("\ndigite o valor:");
    	scanf(" %c", &vetorzin[j]);
	}
	for(j=i-1;j>=0;j--){
		printf(" %c", vetorzin[j]);
	}    
    
    return 0;
}
