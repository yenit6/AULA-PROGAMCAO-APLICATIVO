#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int qntMes[3];
    int i;
int soma = 0;
float vmd =0;

for (i = 0; i < 3; i++)
{
printf("quntidade do mes: ");
scanf("%d",&qntMes[i]);

soma+= qntMes[i];
}

    vmd = (soma/3)/25;
    
    printf("vmd: %.1f\n", vmd);
    
    
    return 0;
}