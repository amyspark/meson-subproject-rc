#include <stdio.h>

#include "config.h"

int foo(int argc, char* argv[])
{
    printf("%s\n", BUILDSUF);

    return 0;
}
