#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void){

    float dinheiro;
    int contGeral = 0;
    int cont1 = 0;
    int cont50 = 0;
    int cont25 = 0;
    int cont10 = 0;
    int cont05 = 0;
    int cont01 = 0;

    do{
        dinheiro = get_float("qual o valor do troco?");
    }

    while (dinheiro <= 0.009);
    int centavos = round (dinheiro*100);
    while (centavos>=100){
        centavos = centavos - 100;
        contGeral++;
        cont1++;
    }
    while (centavos >= 50){
        centavos = centavos - 50;
        contGeral++;
        cont50++;
    }
    while (centavos >= 25){
        centavos = centavos - 25;
        contGeral++;
        cont25++;
    }
    while(centavos >= 10){
        centavos = centavos - 10;
        contGeral++;
        cont10++;
    }
    while(centavos >= 5){
        centavos = centavos - 5;
        contGeral++;
        cont05++;
    }
    while(centavos >= 1){
        centavos = centavos - 1;
        contGeral++;
        cont01++;
    }

    printf ("\nVocê deve usar um total de %i moeda(s) para o troco de %.2f dóllar(s)\n....................................................................\n", contGeral, dinheiro);
    printf ("Sendo desse total:");
    printf (" %i moeda (s) de 1,00c\n", cont1);
    printf ("                   %i moeda (s) de 0,50c\n", cont50);
    printf ("                   %i moeda (s) de 0,25c\n", cont25);
    printf ("                   %i moeda (s) de 0,10c\n", cont10);
    printf ("                   %i moeda (s) de 0,05c\n", cont05);
    printf ("                   %i moeda (s) de 0,01c\n\n", cont01);


}