#include <stdio.h>
#include <stdlib.h>



int main()
{
    int i =34; 
    int j; 
    int * p;
    p = &i;
    (*p)++;
    j = *p + 33;

    printf("Conteudo de J = %d",j);
    printf("\n");
    return 0;
    
}