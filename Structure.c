#include <stdio.h>

 
typedef struct
{
 
    
    int  No;
    char Name;
    char Department;
    int  Salary;
    
       
 
}
 Employee;
 
int main()
{
    int i, n= 20;
 
     Employee employees[n];
 
    
 
    printf("Enter  Employee Details \n \n",n);
    for (i = 0; i < 20; i++){
 
        printf("Employee %d:- \n", i + 1);
        
        printf("No: ");
        scanf("%d", &employees[i].No);
        
        printf("Name: ");
        scanf("%s", &employees[i].Name);
        
        printf("Department: ");
        scanf("%s", &employees[i].Department);
        
        printf("Salary: ");
        scanf("%d", &employees[i].Salary);
 
        
    }
 
    
 
    printf("   All Employees Details   \n");
 
    for (i = 0; i < n; i++){
 
        printf("No \t: ");
        printf("%d \n",employees[i].No);
 
        printf("Name \t: ");
        printf("%s \n",employees[i].Name);
 
        printf("Department \t: ");
        printf("%s \n",employees[i].Department);
        
        printf("Salary \t: ");
        printf("%f \n",employees[i].Salary);
 
        printf("\n");
    }
 
    return 0;
 
}
