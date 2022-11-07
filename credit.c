#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long nCartao;
    long nSequencia1 = 0;
    long nSequencia2 = 0;
    long novaSequencia2 = 0;
    long mCartao = 1;
    int verd;
    int soma;
    long pCartao;

    do
    {
        nCartao = get_long("Número: ");
    }
    while (nCartao <= 0);
    pCartao = nCartao;

    while (nCartao != 0){
        nSequencia1 = nCartao % 10 + nSequencia1;
        nCartao = nCartao / 10;
        nSequencia2 = ((nCartao % 10) * 2);

        if (nSequencia2 > 9) {
            novaSequencia2 = nSequencia2 % 10 + nSequencia2 / 10 + novaSequencia2;
            nSequencia2 = 0;
        }
        novaSequencia2 = nSequencia2 + novaSequencia2;
        nCartao = nCartao / 10;
    }
        while (pCartao != 0) {
            mCartao = pCartao % 10;
            pCartao = pCartao / 10;

            if (pCartao == 4 || pCartao == 34 || pCartao == 37 || pCartao == 51 || pCartao == 52 || pCartao == 53 || pCartao == 54 || pCartao == 55){
                verd = pCartao;
            }
        }
        soma = novaSequencia2 + nSequencia1;
    if ((soma % 10 == 0) && (verd == 4 || verd == 34 || verd == 37 || verd == 51 || verd == 52 || verd == 53 || verd == 54 || verd == 55)){

        if (verd == 4){
            printf("Visa\n");
        }

        if (verd == 34 || verd == 37){
            printf("American Express\n");
        }

        if (verd == 51 || verd == 52 || verd == 53 || verd == 54 || verd == 55){
            printf("MasterCard\n");
        }
    }

    else {
        printf("INVALID\n");
    }
}