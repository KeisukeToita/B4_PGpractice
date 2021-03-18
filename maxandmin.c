#include <stdio.h>

#define MAX 1 //max mode
#define MIN 2 //min mode
#define SIZE 8

void printMaxAndMin(int* input);
int searchMaxAndMin(int* input, int size, int mode);

int main(void){
    int input[] = {1, 2, 3, 4, 5, 6, 10, -2};
    
    printMaxAndMin(input);
}
    
void printMaxAndMin(int* input){
    printf("max: %d\n", searchMaxAndMin(input, SIZE, MAX));
    printf("min: %d\n", searchMaxAndMin(input, SIZE, MIN));
}

int searchMaxAndMin(int* input, int size, int mode){
    if(mode == MAX){//max mode
        int max = input[0];
        for(int i = 1;i<size;i++){
            int x = input[i];
            if(x > max){
                max = x;
            }
        }
        return max;
    }else if(mode == MIN){//min mode
        int min = input[0];
        for(int i = 1;i<size;i++){
            int x = input[i];
            if(x < min){
                min = x;
            }
        }
        return min;
    }else{
        printf("error\n");
    }
}