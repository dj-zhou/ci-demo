
#include "no-format.h"
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
    function1();
    function2(10);
    for (;;) {
        printf("%d: hello world\n", loop++);
        sleep(1);
    }
    return 0;
}
