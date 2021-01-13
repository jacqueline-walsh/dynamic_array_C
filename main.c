#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void loadNumbers(void);
void printNumbers(void);

typedef struct {
    int id;
    char firstName[10];
    char lastName[10];
} Employee;

Employee a_size[10];
Employee *a = NULL;

int main() {
    
    loadNumbers();
    
    return 0;
}

void loadNumbers() {
    a = malloc(sizeof(Employee));

    if (a == NULL) {
        fprintf(stderr, "Error allocating memory");
        exit(1);
    }
        for (int i = 0; i < 10; i++) {
            a[i].id = i+1;
            strcpy(a[i].firstName,"Sam");
            strcpy(a[i].lastName,"Smith");

    }
    
    free(a);
    printNumbers();
}

void printNumbers() {
    for(int i = 0; i < 10; i++) {
        printf("%d %s %s \n", a[i].id, a[i].firstName, a[i].lastName);
    }
    printf("\n\n");

}
