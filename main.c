#include <stdio.h>

int main() {
int b = 0;
int licznik_petli = 0;

    printf("Program podaje największą liczbę, mniejszą od\n");
    printf("podanej przez użytkownika,\n");
    printf("jednocześnie niepodzielną przez 2, 3, 5 i 7\n\n");
    printf("Podaj liczbę b: ");
    scanf("%d", &b);
    // zrób nieparzystą
    if(!(b % 2)) --b;
       for (; !(b % 3) || !(b % 5) || !(b % 7); b -= 2) {
                licznik_petli++;
        }
    printf("znaleziona liczba: %d\n", b);

    printf("\n");
    printf("licznik pętli wynosiła: %d\n", licznik_petli);
        return 0;
    }