#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct person{
    struct person *parents[2];
    char alleles[2];
}
person;

const int GENERATIONS = 3;
const int INDENT_LENGTH = 4;

person *create_family(int generations);
void print_family(person *p, int generation);
void free_family(person *p);
char random_allele();

int main(void){
       srand(time(0));
    person *p = create_family(GENERATIONS);

    print_family(p, 0);

    free_family(p);
}
person *create_family(int generations){

    if (generations > 1) {

    }
       else {}

    return NULL;
}
void free_family(person *p){
}

void print_family(person *p, int generation){

    if (p == NULL)  {
        return;
    }

    for (int i = 0; i < generation * INDENT_LENGTH; i++){
        printf(" ");
    }

    printf("Generation %i, blood type %c%c\n", generation, p->alleles[0], p->alleles[1]);
    print_family(p->parents[0], generation + 1);
    print_family(p->parents[1], generation + 1);
}

char random_allele(){
    int r = rand() % 3;

    if (r == 0) {
        return 'A';
    }
    else if (r == 1) {
        return 'B';
    }
    else {
        return 'O';
    }
}
