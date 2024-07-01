// improved code (CGT)

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    char *items[] = {"boat", "car", "truck", "train"};
    
    if (argc < 2) {
        printf("Usage: %s <number>\n", argv[0]);
        return 1;
    }

    char *endptr;
    long val = strtol(argv[1], &endptr, 10);
    if (*endptr != '\0' || val < 1 || val > 4) {
        printf("Invalid input\n");
        return 1;
    }

    int index = (int)val;
    printf("You selected %s\n", items[index-1]);
    
    return 0;
}
