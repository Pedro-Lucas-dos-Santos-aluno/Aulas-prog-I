#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;

    printf("insira sua idade \n");
    scanf("%i", &idade);

    if(idade < 16){
        printf("Nao eleitor");
                    }
    else if (idade >= 18 && idade <=  65) {
         printf("eleitor obrigatorio");
                                          }
    else {
        printf("eleitor facultativo");
    }
    return 0;
}
