#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function prototypes
void generateRandomNumbers(int *arr, int size);
void bubbleSort(int *arr, int size);
void selectionSort(int *arr, int size);
void insertionSort(int *arr, int size);
void saveToFile(int *arr, int size, const char *filename);

int main() {
    srand(time(NULL)); // Seed the random number generator

    int maxSize = 1000000;
    int increment = 100000;
    int size;

    for (size = increment; size <= maxSize; size += increment) {
        int *arr = (int *)malloc(size * sizeof(int));
        if (arr == NULL) {
            printf("Memory allocation failed!\n");
            return 1;
        }

        // Generate random numbers
        generateRandomNumbers(arr, size);

        // Bubble sort
        clock_t start = clock();
        bubbleSort(arr, size);
        clock_t end = clock();
        double bubbleSortTime = (double)(end - start) / CLOCKS_PER_SEC;

        // Save sorted and unsorted numbers to files
        char filename[20];
        sprintf(filename, "numbers_%d.txt", size);
        saveToFile(arr, size, filename);

        // Selection sort
        start = clock();
        selectionSort(arr, size);
        end = clock();
        double selectionSortTime = (double)(end - start) / CLOCKS_PER_SEC;

        // Insertion sort
        start = clock();
        insertionSort(arr, size);
        end = clock();
        double insertionSortTime = (double)(end - start) / CLOCKS_PER_SEC;

        // Display sorting times
        printf("Size: %d\n", size);
        printf("Bubble Sort Time: %.4f seconds\n", bubbleSortTime);
        printf("Selection Sort Time: %.4f seconds\n", selectionSortTime);
        printf("Insertion Sort Time: %.4f seconds\n", insertionSortTime);

        // Free allocated memory
        free(arr);
    }

    return 0;
}

void generateRandomNumbers(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 1000000; // Generate random numbers up to 1,000,000
    }
}

void bubbleSort(int *arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void selectionSort(int *arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

void insertionSort(int *arr, int size) {
    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void saveToFile(int *arr, int size, const char *filename) {
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        printf("Failed to open file for writing!\n");
        return;
    }

    fprintf(file, "Unsorted Numbers:\n");
    for (int i = 0; i < size; i++) {
        fprintf(file, "%d ", arr[i]);
    }
    fprintf(file, "\n\n");

    fprintf(file, "Sorted Numbers:\n");
    for (int i = 0; i < size; i++) {
        fprintf(file, "%d ", arr[i]);
    }

    fclose(file);
}
