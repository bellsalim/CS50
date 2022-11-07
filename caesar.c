#include <stdio.h>
#include <cs50.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[]){
    if (argc != 2){
        printf("Use:./ceasar key\n");
        return 1;
    }

    int K = atoi(argv[1]);

    for (int i = 0, n = strlen(argv[1]); i < n; i++)

    if (K <= 0 || (!isdigit(argv[1][i]))) {
        printf("Use:./ceasar key\n");
        return 1;
    }

    string s = get_string("plaintext: ");
    printf("ciphertext: ");

    for (int i = 0, n = strlen(s); i < n; i++)

    if (isalpha(s[i])){
        int ci = ((((s[i]) - 97) + K) % 26) + 97;
        int ce = ((((s[i]) - 65) + K) % 26) + 65;

        if(islower(s[i]))  {
            printf("%c", ci);
        }

        if(isupper(s[i])){
            printf("%c", ce);
        }
    }

    else {
        printf("%c", s[i]);
    }

    printf("\n");


}