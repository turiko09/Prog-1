#include<stdio.h>

int main()

{


int n1, n2;
float resultado;

printf("\nEntre com n1");
scanf("%d",&n1);
printf("\nEntre com n2");
scanf("%d",&n2);

resultado=n1+n2;
printf("\n A soma de %d+%d=%.0f",n1,n2,resultado);

resultado=n1-n2;
printf("\n A diferença de %d/%d=%.0f",n1,n2,resultado);

resultado=n1*n2;
printf("\nMultiplicação=%.0f\n",resultado);

resultado=(float)n1/n2;
printf("\nDivisão=%.2f\n",resultado);

//entre com n1:5
//entre com n2:2
//A soma de 5+2=7
//A diferença entre 5 e 2 =3
//A multiplicação de 5 e 2 = 10
//Adivisao entre 5 e 2= 2.5

system ("pause");
return 0;
}
