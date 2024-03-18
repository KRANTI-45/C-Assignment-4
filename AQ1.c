//1. Write a function to calculate factorial of a given number.

# include<stdio.h>

int fact_num(int num);
int main()
{
int num,result;
printf("Enter the number: \n");
scanf("%d",&num);
result=fact_num(num);
printf("The factorial  is:%d\n",result);
return 0;
}

int fact_num(int num){
int fact=1;
for(int i=1;i<=num;i++)
{           
fact=fact*i;
}
return fact;
}
