#include <stdlib.h>
#include <stdio.h>

FILE *Fptr;



int main(void){

    Fptr = fopen("InputData.txt","r");
    if(Fptr == NULL)
    {
        printf("This file doesnt exist\n");
        return 0;
    }
    
    return 1;
}