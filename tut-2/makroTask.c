#include <stdio.h>

void TaskC(){
    #define MUL(x,y) x*y

    int y = MUL(4+1,3+6);

    printf("Wrong: %d\n", y);
}


void correctTaskC(){
    #define MULCORRECT(x,y) ((x)*(y))

    int y = MULCORRECT(4+1,3+6);

    printf("Correct: %d", y);
}