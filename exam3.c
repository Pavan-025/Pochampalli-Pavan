#include <stdio.h>

int compareStrings(char str1[], char str2[]) 
{
    int i = 0;

    while (str1[i] != '\0' && str2[i] != '\0')
	 {
        if (str1[i] != str2[i]) {
            return 0;
        }
        i++;
    }

    
    if (str1[i] == '\0' && str2[i] == '\0') {
        return 1;
    } else {
        return 0; 
    }
}

int main() {
    char a[] = "hello";
    char b[] = "hello";

    if (compareStrings(a, b)) {
        printf("Strings are equal.\n");
    } else {
        printf("Strings are not equal.\n");
    }

    return 0;
}
