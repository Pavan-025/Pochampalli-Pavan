#include <stdio.h>


struct employee 
{
    int emp_code;
    char name[50];
    int join_year;
};


int calculate_tenure(int current_year, int join_year) 
{
    return current_year - join_year;
}

int main() {
    
    int num_employees;

    
    printf("Enter the number of employees: ");
    scanf("%d", &num_employees);

    struct employee employees[num_employees];


    for (int i = 0; i < num_employees; i++) 
	{
        printf("\nEnter details for employee %d:\n", i + 1);
        printf("Employee Code: ");
        scanf("%d", &employees[i].emp_code);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Year of Joining: ");
        scanf("%d", &employees[i].join_year);
    }


    int current_year;
    printf("\nEnter the current year: ");
    scanf("%d", &current_year);

    
    printf("\nEmployees with a tenure of 3 or more years:\n");
    for (int i = 0; i < num_employees; i++) {
        int tenure = calculate_tenure(current_year, employees[i].join_year);
        if (tenure >= 3) {
            printf("%s\n", employees[i].name);
        }
    }

    return 0;
}
