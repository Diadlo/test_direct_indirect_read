#include <stdint.h>
#include <stdlib.h>

volatile int value = 0;

int main(int argc, char* argv[])
{
    int limit = atoi(argv[1]);
    for (int i = 0; i < limit; i++)
    {
        if (value != 0)
            return 0;
    }

    return 1;
}
