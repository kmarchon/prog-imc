#include <stdio.h>

int main()                
{
    float peso,alt,imc;
    printf("digite o peso: \n");
    scanf("%f",&peso);
    printf("digite a altura: \n");
    scanf("%f",&alt);
    imc=(peso/(alt*alt));
    
    printf("IMC=%f-",imc);
    if(imc<19){
        printf("Está magro(a)");
    }
    if(imc>=20 && imc<26){
        printf("Está com o peso ideal");
    }
     if(imc>=26 && imc<31){
        printf("Está acima do peso");
    }
     if(imc>=31){
        printf("Está obeso(a)");
    }
    return 0;
    }