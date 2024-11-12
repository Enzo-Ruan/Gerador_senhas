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
        int letra = rand()%('z' - 'a' +1) +'a';
        if(rand()%2 != 0)
        {
            letra += 'A' - 'a'; 
        }

        printf("%c", (char)letra);
    }
}