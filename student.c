#include <stdio.h>
struct student {
    char firstName[50];
    char branch[50];
    float cgpa;
} s[2];

int main() {
    int i;
    printf("Enter information of students:\n");

    
    for (i = 0; i < 2; ++i) {
        
        
        printf("Enter first name: ");
        scanf("%s", s[i].firstName);
            printf("Enter branch: ");
        scanf("%s", s[i].branch);
        printf("Enter cgpa");
        scanf("%f", &s[i].cgpa);
    }
    printf("Displaying Information:\n\n");


    for (i = 0; i < 2; ++i) {

        printf("First name: ");
        puts(s[i].firstName);
        printf("cgpa: %.1f", s[i].cgpa);
        printf("\n");
    }
    return 0;
}
