#include <stdio.h>
#include <cs50.h>

int main(int argc, string argv[])
{
    int list[10] = {4,7,6,1,9,3,5,2,0,8};
    int temp;
    for (int i = 0; i < 10; i++)
    {
        temp = list[i];
        for (int j = i + 1; j < 10; j++)
        {
            if (list[j] < list[i])
            {
                list[i] = list[j];
                list[j] = temp;
                temp = list[i];
            }
        }
    }
    for (int o = 0; o < 10; o++)
    {
        printf("%i\n", list[o]);
    }
    return 0;
}