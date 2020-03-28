#include <stdlib.h>
#include "data.h"

int main(int argc, char* argv[])
{
    int limit = atoi(argv[1]);
    for (int i = 0; i < limit; i++)
    {
        if (get_value() != 0)
            return 0;
    }

    return 1;
}
