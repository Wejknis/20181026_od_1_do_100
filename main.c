#include <stdio.h>

int main() {
int b;
int licznik_petli = 0;
    for (b = 100; b >= 1 ; b -=2)
    {
    printf("%d\t ", b);

            licznik_petli++;
        }
    printf("\n");
    printf("licznik pętli wynosiła: %d\n", licznik_petli);
    return 0;
}