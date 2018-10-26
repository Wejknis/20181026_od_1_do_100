#include <stdio.h>

int main() {
int b = 0;
int i = 0;
int licznik_petli = 0;

    printf("Program podaje największą liczbę, mniejszą od\n");
    printf("podanej przez użytkownika,\n");
    printf("jednocześnie niepodzielną przez 2, 3, 5 i 7\n\n");
    printf("Podaj liczbę b: ");
    scanf("%d", &b);
    // zrób nieparzystą
            for (i = b; i > 0; --i) {
                licznik_petli++;
            if (i%2 && i%3 && i%5 && i%7){
                printf("%d", i);
                break;
            }
        }
    printf("znaleziona liczba: %d\n", i);

    printf("\n");
    printf("licznik pętli wynosiła: %d\n", licznik_petli);
        return 0;
    }