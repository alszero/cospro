// You may use include as below.
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(char* shirt_size[], int shirt_size_len) {
    // Write code here.
    int* answer;
    int* size_counter = (int*)malloc(sizeof(int)*6);
    for (int i = 0; i < 6; i++) {
        size_counter[i] = 0;
        for (int i = 0; i < shirt_size_len; i++) {
            if (strcmp(shirt_size, "XS") == 0)
                size_counter[0]++;
            else if (strcmp(shirt_size, "S") == 0)
                size_counter[1]++;
            else if (strcmp(shirt_size, "M") == 0)
                size_counter[2]++;
            else if (strcmp(shirt_size, "L") == 0)
                size_counter[3]++;
            else if (strcmp(shirt_size, "XL") == 0)
                size_counter[4]++;
            else if (strcmp(shirt_size, "XXL") == 0)
                size_counter[5]++;

        }
        return size_counter;
    }
}

// The following is main function to output testcase.
int main() {
    char* shirt_size[] = { "XS", "S", "L", "L", "XL", "S" };
    int shirt_size_len = 6;
    int* ret = solution(shirt_size, shirt_size_len);

    // Press Run button to receive output.       
    printf("Solution: return value of the function is {");
    for (int i = 0; i < 6; i++) {
        if (i != 0) printf(", ");
        printf("%d", ret[i]);
    }
    printf("} .\n");
}