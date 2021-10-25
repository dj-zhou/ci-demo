/******************************************************************************
File Name     : main.cpp
Author        : Dingjiang Zhou
Email         : zhoudingjiang@gmail.com
Create Time   : Tue, Oct. 12th, 2021. 01:52:26 PM
Last Modified :
Purpose       :
-------------------------------------------------------------------------------
INPUTS

OUTPUTS

******************************************************************************/
#include <iostream>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

using namespace std;

int main(int argc, char* argv[]) {
    ( void )argc;
    ( void )argv;
    static int loop = 0;
    for (int i = 0; i < 10; i++) {
        printf("%d: hello world\n", loop++);
        sleep(1);
    }

    printf("anything good today?");
    printf("yes!\n");
    return 0;
}
