#include <cs50.h>
#include <stdio.h>


int main(void){
 int n;

 do{
    n = get_int("altura: ");
 }

 while (n < 1 || n > 8);

 for (int i = 0; i < n; i++){
    for (int a = 0; a < i + 1; a++){
        printf("#");
    }
    printf("\n");
 }
}