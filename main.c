#include <stdio.h>

int main() {
int b;
int licznik_petli = 0;
for (b = 1999; !(b%3) || !(b%5) || !(b%7); b-=2){
                licznik_petli++;
        }
    printf("znaleziona liczba: %d\n", b);

    printf("\n");
    printf("licznik pętli wynosiła: %d\n", licznik_petli);
        return 0;
    }