#include <stdio.h>

int main()
{
    float celsius, fahr;
    
    printf("\n entre com grau Celsius");
    scanf("%f",&celsius);
    
    fahr=1.8*celsius+32;
    
    printf("\nConvertido para Fahreinheit=%.2f",fahr);

system("pause");

return 0;
}
