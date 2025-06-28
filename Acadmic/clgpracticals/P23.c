/*Ques 23. Write a program to input basic salary of an employee and calculate its gross or total 
salary according to following formula.
Total salary = Basic salary + HRA + DA
S. no.	Basic Salary	HRA	    DA
1	      <= 10k	      20%	90%
2      	  <= 20k	      25%	90%
3	      >=20k	          30%	95%
*/
#include <stdio.h>

int main() {
    float basic_salary, hra, da, total_salary;

    // Input basic salary
    printf("Enter the basic salary of the employee: ");
    scanf("%f", &basic_salary);

    // Calculate HRA and DA based on the basic salary
    if (basic_salary <= 10000) {
        hra = basic_salary * 0.20; // 20% HRA
        da = basic_salary * 0.90;   // 90% DA
    } else if (basic_salary <= 20000) {
        hra = basic_salary * 0.25; // 25% HRA
        da = basic_salary * 0.90;   // 90% DA
    } else {
        hra = basic_salary * 0.30; // 30% HRA
        da = basic_salary * 0.95;   // 95% DA
    }

    // Calculate total salary
    total_salary = basic_salary + hra + da;

    // Display the results
    printf("Basic Salary: %.2f\n", basic_salary);
    printf("HRA: %.2f\n", hra);
    printf("DA: %.2f\n", da);
    printf("Total Salary: %.2f\n", total_salary);

    return 0;
}
/*output
enter basic salary : 21000
basic salary of employee = 21000.00
HRA = 6300.00
DA = 19950.00
Gross or total salary of an employee = 47250.00
*/