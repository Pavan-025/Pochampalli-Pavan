#include <stdio.h>

int compare_strings(char a[], char b[]) {
    // Check if the lengths of the strings are different
    int len_a = 0, len_b = 0;
    while (a[len_a] != '\0') {
        len_a++;
    }
    while (b[len_b] != '\0') {
        len_b++;
    }

    if (len_a != len_b) {
        return 0; // False
    }

    
    for (int i = 0; i < len_a; i++) {
        
        if (a[i] != b[i]) {
            return 0; 
        }
    }

    
    return 1; // True
}

int main() {
    // Example usage
    char string1[] = "hello";
    char string2[] = "world";
    char string3[] = "hello";

    int result1 = compare_strings(string1, string2);
    int result2 = compare_strings(string1, string3);

    printf("Result 1: %s\n", result1 ? "True" : "False");
    printf("Result 2: %s\n", result2 ? "True" : "False");

    return 0;
}
