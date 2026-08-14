#include <stdio.h>

int main() {
    int A = 0, B = 0;
    int n, x;

    // Input Set A
    printf("Enter number of elements in Set A: ");
    scanf("%d", &n);

    printf("Enter elements of Set A: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        A = A | (1 << x);
    }

    // Input Set B
    printf("Enter number of elements in Set B: ");
    scanf("%d", &n);

    printf("Enter elements of Set B: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        B = B | (1 << x);
    }

    // Union
    printf("\nUnion: ");
    for (int i = 0; i < 10; i++) {
        if ((A | B) & (1 << i))
            printf("%d ", i);
    }

    // Intersection
    printf("\nIntersection: ");
    for (int i = 0; i < 10; i++) {
        if ((A & B) & (1 << i))
            printf("%d ", i);
    }

    // A - B
    printf("\nA - B: ");
    for (int i = 0; i < 10; i++) {
        if ((A & ~B) & (1 << i))
            printf("%d ", i);
    }

    // B - A
    printf("\nB - A: ");
    for (int i = 0; i < 10; i++) {
        if ((B & ~A) & (1 << i))
            printf("%d ", i);
    }

    return 0;
}
