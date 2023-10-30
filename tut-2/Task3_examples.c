#include <stdio.h>
#include "Task3_exploits.h"
#include "makroTask.h"
// UNSAFE CODE!!!

void exampleA(){
    char userInputA[256];
    gets(userInputA);
    printf("->%s\n", userInputA);
}

void exampleB(){
    char userInputB[256] = {0};
    int ret = scanf("%256s", userInputB);

    printf("->%d", ret);
}

void TaskA(){
    int exploitRet;
    exampleA();

    //Possible Exploit:
    exploitRet = exploitA();
    printf("returned: %d", exploitRet);
}

void TaskB(){
    int exploitRet;
    exampleB();

    //Possible Exploit:
    exploitRet = exploitB();
    printf("returned: %d", exploitRet);
}


int main(void){


    TaskA();
    TaskB();

    TaskC();
    correctTaskC();

}