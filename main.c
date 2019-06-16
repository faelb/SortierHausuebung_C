#include <stdio.h>
#include "sort.h"

void insertionSort(char *array);

int main() {
    char unsortedArr[8] = {4, 9, 1, 3, 15, 11, 8, 2};
    insertionSort(
            unsortedArr); //selection Prüft die unsortierten Stellen einzeln und tauscht diese mit dem kleinsten Wert im unsortierten Teil aus


    return 0;
}

void insertionSort(char *array) {
    int length = 0;
    char buffer = '0';
    int j = 0;
    //erstmal länge des Übergebenen Arrays herausfinden
    while (array[length] != 0) {
        length++;
    }
    printf("length init: %d\n", length);
//i ist die Anzahl der bereits geprüften Anfangselemente

    for (int i = 1; i < length; ++i) {
        buffer = array[i];//zwischenspeichern der zu prüfenden nächsten
        j = i - 1;//um vorherige Stelle im array anzusprechen
        while (j >= 0 && array[j] > buffer) {
            //ist nun der buffer (also die zu Prüfende) größer, so wird diese eine Stelle weiter nach vorne geschoben
            array[j+1] = array[j];
            j = j - 1;
        }
        //array an der Stelle j ist nun die letzte Stelle, bei der der buffer nicht mehr größer ist,
        array[j + 1] = buffer;
    }
    int printhelp = 0;
    while (array[printhelp] != 0) {
        printf("%d", array[printhelp]);
        printhelp++;
    }

}



