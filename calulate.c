# include"library.h"

double calulate(double a,char opr, double b)
{

switch(opr)
{
    case '1' :
	         return a + b;
    case '2' :
	         return a - b;
    case '3' :
	         return a * b;
    case '4' :if(b==0)

	          return -1;
			  else
			 return a / b ;
	       
}

}

