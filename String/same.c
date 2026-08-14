#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int freq1[256] = {0};
    int freq2[256] = {0};

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    for (int i = 0; str1[i] != '\0'; i++) {
        if (str1[i] != '\n')
            freq1[(unsigned char)str1[i]]++;
    }

    for (int i = 0; str2[i] != '\0'; i++) {
        if (str2[i] != '\n')
            freq2[(unsigned char)str2[i]]++;
    }
    if (memcmp(freq1, freq2, sizeof(freq1)) == 0)
        printf("Strings are similar.\n");
    else
        printf("Strings are not similar.\n");

    return 0;
}
