/*3. Write a function to implement four function calculator. Function would take operands and
operator as arguments and returns result.
4. In above program, division may fail if denominator is zero. Use global variable as an error flag to
avoid this problem.*/


# include<stdio.h>
# include"library.h"
int main()
{
double a=0,b=0;
char opr;
printf("Enter the number the choice: 1.num1+num2 \n 2.num1-num2\n 3.num1*num2 \n  4.num1/num2\n");
scanf("%lf %c %lf",&a,&opr,&b);
printf("The result of operation is %lf\n",calulate(a,opr,b));

return 0;
}


