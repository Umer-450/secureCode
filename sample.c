#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    // Ensure that the user supplied exactly one command line argument
    if (argc != 2) {
        fprintf(stderr, "Please provide the address of a file as an input.\n");
        return -1;
    }

    // Open the file in read mode
    FILE *file = fopen(argv[1], "rb");
    if (file == NULL) {
        perror("Error opening file");
        return -1;
    }

    // Seek to the end of the file to determine its size
    if (fseek(file, 0, SEEK_END) != 0) {
        perror("Error seeking to the end of the file");
        fclose(file);
        return -1;
    }

    // Get the size of the file
    long fileSize = ftell(file);
    if (fileSize == -1) {
        perror("Error getting the file size");
        fclose(file);
        return -1;
    }

    // Close the file
    fclose(file);

    // Print the file size
    printf("Size of the file is: %ld bytes\n", fileSize);

    return 0;
}
