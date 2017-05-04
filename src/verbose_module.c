#include "verbose_module.h"

#include <stdio.h>

void count_to(unsigned int n)
{
    unsigned int i;

    fprintf(stderr, "Starting to count to %d\n", n);
    for (i = 0; i < n; i++)
    {
        fprintf(stderr, "%d\n", i);
    }
    //fprintf(stderr, "Done counting to %d\n", n);
}
