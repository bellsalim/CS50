#include <stdio.h>
#include <cs50.h>

int main(void){

    int inicio, fim;
    int anos = 0;

    do{
        inicio = get_int("Start size: ");
    }

    while (inicio < 9);
    do{
        fim = get_int("End size: ");
    }

    while (inicio > fim);
    for (int i = 0; inicio < fim; i++){
        inicio += (inicio / 3) - (inicio / 4);
        anos++;
    }
    printf("Years: %i\n", anos);
}