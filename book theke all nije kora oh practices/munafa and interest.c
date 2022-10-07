#include <stdio.h>
int main ()
{
double loan_amount, interest_rate, number_of_year, total_amount, monthly_amount;

printf ("Enter the loan_amount:");//10000
scanf ("%lf", &loan_amount);

printf ("Enter the interest_rate:");
scanf ("%lf", &interest_rate);//30

printf ("Enter the number of year:");
scanf ("%lf", &number_of_year);//5

total_amount= loan_amount+loan_amount*interest_rate*number_of_year/100.00;
monthly_amount = total_amount/number_of_year*12;

printf ("Total amount: %0.2lf", total_amount);
printf ("monthly amount: %0.2lf", monthly_amount);

return 0;
}
