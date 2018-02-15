#include <stdio.h>
#include <stdlib.h>

int *insertionSort(int array[]) {
    int i, temp, j;
    for (i = 1; i < 1000; i++) {
        temp = *(array + i);
        j = i - 1;

        while (j >= 0 && *(array + j) > temp) {
            *(array + j + 1) = *(array + j);
            j = j - 1;
        }
        *(array + j + 1) = temp;
    }
    return array;
}

void printArray(int array[]) {
    int i;
    for (i = 0; i < 1000; i++) {
        printf("%d\n", *(array + i));
    }
}

int main(int argc, char **argv) {
    /* Create an array of 1000 integers using malloc
     * fill the array with random numbers using the rand() function from stdlib.h
     * write an Insertion sort (https://en.wikipedia.org/wiki/Insertion_sort).
     * Output the unsorted and sorted array.
     * */

    int *intArray = (int *) malloc(1000 * sizeof(int));
    int i;
    for (i = 0; i < 1000; i++) {
        *(intArray + i) = rand() % 1001;
    }
    printf("Unsorted Array\n");

    printArray(intArray);

    int *sortedIntArray = insertionSort(intArray);

    printf("Sorted Array\n");
    printArray(sortedIntArray);

    return 0;

}