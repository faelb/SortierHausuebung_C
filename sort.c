//
// Created by faelb on 6/16/19.
//

#include <stddef.h>



void selectionSort(char *array) {
    int length = 0;
    char buffer = '0';
    int help = 0;
    //erstmal länge des Übergebenen Arrays herausfinden
    while (array[length] != 0) {
        length++;
    }
    printf("length init: %d\n", length);

    for (int i = 0; i < length; ++i) {
        buffer = array[i];

        //printf("i = %d \n",i);
        for (int j = i + 1; j < length; ++j) {
            //printf("j = %d \n",j);

            if (buffer > array[j]) {
                buffer = array[j];
                printf("buffer = %d\n", buffer);
                help = j; //merken an welcher Stelle wir den niedrigsten Wert gefunden haben
            }
            if (j == length - 1) {
                printf("j is now length, switching process initialized \n");
                array[help] = array[i];
                array[i] = buffer;
                for (int k = 0; k < length; ++k) {
                    printf("%d", array[k]);
                }
                printf("\n");
            }
        }
    }
}
