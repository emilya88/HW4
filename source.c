#include <stdio.h>
#include <string.h>


int main() {
    char names[50][50] = {
        "Emily", "Elvis", "Emily", "John", "David", "Bob", "Eve"
    };
    int n = 7; 

    printf("Duplicate names:\n");
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(names[i], names[j]) == 0) {
                printf("%s\n", names[i]);
                break; 
            }
        }
    }

    return 0;
}
