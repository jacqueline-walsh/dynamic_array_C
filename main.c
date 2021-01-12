#include <stdio.h>
#include <stdlib.h>

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
            
    }
    
    free(a);
    printNumbers();
}

void printNumbers() {
    for(int i = 0; i < 10; i++) {
        printf("%d \n", a[i].id);
    }
    printf("\n\n");

}
