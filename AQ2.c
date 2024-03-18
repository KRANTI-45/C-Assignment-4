// 2. Write a function to calculate power.

# include<stdio.h>
//void display(int);
//void accept(int);
int power_fun(int,int);
int main()
{
int base,index;
long double result;
printf("Enter the base: \n");
scanf("%d",&base);
printf("Enter the index: \n");
scanf("%d",&index);
result=power_fun(base,index);
printf("The power of base %d and index %d is:%Lf\n",base,index,result);
return 0;
}

int power_fun(int base,int index)
{

long double power1=1;
int i;
// for negative index
for (i=index;i<0;i++)

  {
  power1=power1/base;
 
 
  }
  // for positive index
for (i=index;i>0;i--)

  {
  power1=power1*base;
  
 
  }
return power1 ;
}  


