#include <stdio.h>
int main(){
    int idade, dobroi, metadei;
    printf("Digite a idade:\n");
    scanf("%i", &idade);
    dobroi = idade * 2;
    metadei = idade / 2;
    if (idade % 2 == 0){
        printf("Idade Par\n");
        printf("O dobro do n�mero digitado �: %i\n", dobroi);
        printf("A metade do n�mero digitado �: %i\n", metadei);
    }
return 0;
}
