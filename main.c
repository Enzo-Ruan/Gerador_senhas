#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define PW_LEN (10)
#define SORT_MIN 'A'
#define SORT_MAX 'Z'

int main()
{
    int i;
    srand(time(0));
    printf("\n");

    for(i = 0; i< PW_LEN; i++)
    {
        char letra = rand()%(SORT_MAX - SORT_MIN +1) + SORT_MIN;
        printf("%c", letra);
    }
}