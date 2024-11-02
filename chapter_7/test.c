#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "hello";
    char str2[] = "hi";

    int result = strcmp(str1, str2);

    if (result == 0) {
        printf("The strings are identical.\n");
    } else {
        printf("The strings are different.\n");
    }

    return 0;
}
