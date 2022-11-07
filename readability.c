#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

int main(void){

    string Texto = get_string("Cole o texto: \n");


    int letras = 0;
    int palavras = 1;
    int frases = 0;

    for (int i = 0; Texto[i] != '\0'; i++){

        if ((Texto[i] >= 'a' && Texto[i] <= 'z') || (Texto[i] >= 'A' && Texto[i] <= 'Z')){
            letras++;
        }

        else if (Texto[i] == ' '){
            palavras++;
        }

        else if ((Texto[i] == '.') || (Texto[i] == '!') || (Texto[i] == '?')){
            frases++;
        }
    }
    float  L = (((float) letras / palavras) * 100);
    float  S = (((float) frases / palavras) * 100);
    float índice = (0.0588 * L - 0.296 * S - 15.8);
    int grade = lround(índice);

    if (grade < 1) {
        printf("Before Grade 1\n");
    }

    else if (grade > 15){
        printf("Grade 16+\n");
    }

    else{
        printf("Grade %i\n", grade);
    }
}