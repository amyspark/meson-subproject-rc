#include <stdio.h>

#include "config.h"

extern int foo(int argc, char* argv[]);

int main(int argc, char* argv[])
{
    return foo(argc, argv);
}
