#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,n3,n4,media;
        printf("insira as notas dos alunos \n");

        scanf("%i%i%i%i",&n1, &n2, &n3, &n4);

        media = (n1 + n2 + n3 + n4)/4;

        printf("a media da turma e: %.2i \n", media);

            if(media>=7) {
                            printf("O aluno foi aprovado");
            }
            else {
                  printf("o aluno foi reprovado");
            }
    return 0;
}
