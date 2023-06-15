#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void *a,const void *b) {
    return strncmp(*(char **)a, *(char **)b, 1);
}

int main() {
    char *names[5];  // array of 5 pointers to char
    int i;

    // get names from user input
    for (i = 0; i < 5; i++) {
        printf("Enter name %d: ", i+1);
        char student[20];
        fgets(student, sizeof(student), stdin);  // read name from standard input
        size_t len = strlen(student);
        if (student[len-1] == '\n') {
            student[len-1] = '\0';  // remove newline character
        }
        names[i] = strdup(student);  // make a copy of the input string
    }

    // sort names based on first letter using qsort
    qsort(names, 5, sizeof(char *), compare);

    // print sorted names
    printf("\nSorted names:\n");
    for (i = 0; i < 5; i++) {
        printf("%s\n", names[i]);
        free(names[i]);  // free the memory allocated by strdup
    }

    return 0;
}

