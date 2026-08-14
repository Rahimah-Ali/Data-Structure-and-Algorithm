
#include <stdio.h>
#include <string.h>

#define MAX 100

typedef struct
{
    char data[MAX];
    int length;
} String;

void create(String *s)
{
    printf("Enter a string: ");
    fgets(s->data, MAX, stdin);

    s->data[strcspn(s->data, "\n")] = '\0';
    s->length = strlen(s->data);
}


void display(String s)
{
    printf("String: %s\n", s.data);
}


int length(String s)
{
    return s.length;
}


void concatenate(String *s1, String s2)
{
    strcat(s1->data, s2.data);
    s1->length = strlen(s1->data);
}


int compare(String s1, String s2)
{
    return strcmp(s1.data, s2.data);
}

int main()
{
    String s1, s2;

    create(&s1);
    display(s1);

    printf("Length: %d\n", length(s1));

    printf("\nEnter second string:\n");
    create(&s2);

    concatenate(&s1, s2);

    printf("After concatenation: ");
    display(s1);

    printf("Comparison result: %d\n", compare(s1, s2));

    return 0;
}
