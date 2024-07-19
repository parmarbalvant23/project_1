#include <stdio.h>


 main()
 
{
    float base_salary, gross_salary;
    float hra_percent, da_percent, ta_percent;
    float hra_amount, da_amount, ta_amount;

    
    printf("Enter base salary: ");
    scanf("%f", &base_salary);

    
    printf("Enter percentage of HRA: ");
    scanf("%f", &hra_percent);

    printf("Enter percentage of DA: ");
    scanf("%f", &da_percent);

    printf("Enter percentage of TA: ");
    scanf("%f", &ta_percent);

  
    hra_amount = (hra_percent / 100) * base_salary;
    da_amount = (da_percent / 100) * base_salary;
    ta_amount = (ta_percent / 100) * base_salary;

    
    gross_salary = base_salary + hra_amount + da_amount + ta_amount;

}
