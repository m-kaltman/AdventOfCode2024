#include <stdio.h>
#include <stdlib.h>

#define INPUTSIZE 1000

FILE* DayOneInput;
int DataOne[INPUTSIZE];
int DataTwo[INPUTSIZE];


//Reads and stores data into an unsorted array
int ReadInputData(void){
    DayOneInput = fopen("DayOneInput.txt","r");
    //safety check the file is there
    if(DayOneInput == NULL){
        printf("File cannot be opened\r\n");
        return 0;
    }
    
    for(int i = 0; i < INPUTSIZE; i++)
    {
        fscanf(DayOneInput, "%d %d",&DataOne[i],&DataTwo[i]);
    }
    return 1;
}

//Compare function taken from geeks2geeks to implement stdlib qsort()
int CompareDataPoints(const void * a, const void * b){
     return ( *(int*)a - *(int*)b );

}

void PrintDataOne(){
    for(int i = 0; i <INPUTSIZE; i++)
    {
        printf("%d \n", DataOne[i]);
    }
}


void PrintDataTwo(){
    for(int i = 0; i <INPUTSIZE; i++)
    {
        printf("%d \n", DataTwo[i]);
    }
}

int SortDataPoints(){

    qsort(DataOne,INPUTSIZE,sizeof(int),CompareDataPoints);
    qsort(DataTwo,INPUTSIZE,sizeof(int),CompareDataPoints);

    return 1;    

}

int CalculateDistance(){
    int Total = 0;
    for(int i = 0; i < INPUTSIZE; i++)
    {
        Total += abs(DataOne[i] - DataTwo[i]);
        printf("%d - %d is %d\n", DataOne[i],DataTwo[i],Total);
    }
    return Total;
}
int main(void){
    int answer = 0;
    ReadInputData();
    SortDataPoints();
    answer = CalculateDistance();
    printf("%d\n", answer);
    return 1;
}