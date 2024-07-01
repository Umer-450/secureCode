// My code

int getValueFromArray(int *array, int len, int index) {
    // Retrieve the element from the array at the specified index
    return array[index];
}

// code produced by CGT

#include <stdio.h>

int getValueFromArray(int *array, int index) {
    // Retrieve the element from the array at the specified index
    return array[index];
}

int main() {
    int array[] = {10, 20, 30, 40, 50};
    int index = 2;
    int value = getValueFromArray(array, index);
    printf("The value at index %d is %d\n", index, value);
    return 0;
}
