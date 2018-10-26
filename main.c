#include <stdio.h>

int main() {
int b;
    for (b = 100; b >= 1 ; --b)
    {
        if (!(b%2 ))
        {
            printf("%d\t ", b);
        }
    }
    return 0;
}