#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

string encipher(string plain, string key);

int main(int argc, string argv[])
{
    if (argc == 2) {

        if (strlen(argv[1]) != 26){
            printf("key must contain 26 characters.\n");
            return 1;
        }

        char repeat[26] = {0};

        for (int i = 0, n = strlen(argv[1]); i < n; i++){

            if (!isalpha(argv[1][i])){
                printf("key must only contain alphabetic characters.\n");
                return 1;
            }

            argv[1][i] = toupper(argv[1][i]);
            repeat[argv[1][i] - 'A']++;
        }

        for (int i = 0; i < 26; i++) {

            if (repeat[i] != 1) {
                printf("Key must not contain repeated characters\n");
                return 1;
            }
        }


        string plainText = get_string("plaintext: ");

        printf("ciphertext: %s\n", encipher(plainText, argv[1]));

        return 0;
    }

    printf("Usage: ./substituition key\n");
    return 1;
}

string encipher(string plain, string key){

    char offset = 0;
    bool lower = false;

    for (int i = 0, n = strlen(plain); i < n; i++){

        if (!isalpha(plain[i])){
            continue;
        }

        if (islower(plain[i])){
            offset = 'a';
            plain[i] = tolower(key[plain[i] - offset]);
        }

        else{
            offset = 'A';
            plain[i] = toupper(key[plain[i] - offset]);
        }
    }
    return plain;
}