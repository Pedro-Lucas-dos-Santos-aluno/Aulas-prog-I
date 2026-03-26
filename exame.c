#include <stdio.h>
#include <stdlib.h>

int main(){
        int n1,n2,n3,n4,exame,media,me;

        printf("adicione as notas do aluno");
        scanf("%i%i%i%i", &n1,&n2,&n3,&n4);

        media = (n1 + n2 + n3 + n4)/4;

        if(media >= 7){
                       printf("aprovado sem exame %2.i", media);
                      }
        else if (media >= 4){
                             printf("o aluno vai para exame %2.i \n insira a nota do exame \n", media);
                             scanf("%i", &exame);

                             me = (exame + media)/2;

                             if(me >= 5) {
                                          printf("o aluno foi aprovado com exame %.2i \n", me);
                                         }
                             else {
                                   printf("o aluno foi reprovado com exame %.2i \n", me );
                                   }
                             }
      else if(media < 4){
                         printf("o aluno sera reprovado sem poder fazer exame: %2.i", media);
                        }
    return 0;
}
