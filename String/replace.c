
#include <stdio.h>
#include <string.h>

int main() {
    char str[200], old[50], newStr[50];
    char result[300] = "";

    printf("Enter main string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter string to replace: ");
    fgets(old, sizeof(old), stdin);

    printf("Enter new string: ");
    fgets(newStr, sizeof(newStr), stdin);

    str[strcspn(str, "\n")] = '\0';
    old[strcspn(old, "\n")] = '\0';
    newStr[strcspn(newStr, "\n")] = '\0';

    char *pos = strstr(str, old);

    if (pos != NULL) {
        int index = pos - str;
        strncpy(result, str, index);
        result[index] = '\0';

        strcat(result, newStr);

        strcat(result, pos + strlen(old));

        printf("After replacement: %s\n", result);
    } else {
        printf("String not found.\n");
    }

    return 0;
}
