#include <stdio.h>
#include <stdlib.h>

int main()
{
    int salario, ns, difs;
        printf("insiria seu salario");
        scanf("%i", &salario);
        if (salario <= 1000){
                            ns = salario * 1.15; //15%
                            }
        else if(1000 > salario < 2000 ){
                            ns = salario * 1.10; //10%
                           }
        else if (salario > 2000) {
                                 ns = salario * 1.05; //%
                                }
        difs = ns - salario;
        printf("seu novo salario e: %.2i \n com diferensa de %.2i", ns, difs);
    return 0;
}
