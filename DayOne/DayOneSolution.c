#include <stdio.h>

#define INPUTSIZE 1000
FILE* DayOneInput;
int RawDataOne[INPUTSIZE];
int RawDataTwo[INPUTSIZE];
int AlignedDataOne[INPUTSIZE];
int AlignedDataTwo[INPUTSIZE];

int ReadInputData(void){

    DayOneInput = fopen("DayOneInput.txt","r");
    if(DayOneInput == NULL){
        printf("File cannot be opened\r\n");
        return 0;
    }
    int a,b;
    for(int i = 0; i < INPUTSIZE; i++)
    {
        fscanf(DayOneInput, "%d %d",&a,&b);
       

    }
}

int CompareDataPoints(const void * a, const void * b){
    int *ValA = a;
    int *ValB = b;
    return *ValA - *ValB;
}
int main(void){

    ReadInputData();
    return 1;
}