#include <stdio.h>
#include "function.h"


int main(){
	char op;
	double x, y,s,su,d,p;
	printf("Pls enter the operation of the symbol that is to be performed (+,-,/,*) :");
	scanf("%c",&op);
	printf("please enter the numbers :");
	scanf("%lf %lf", &x, &y);
	switch (op)
	  {
	  case('+'):
		   s = sum(x, y);
		   printf("%.1lf",s);
		   break;
	  case ('-'):
	      su = subtraction(x, y);
	      printf("%.1lf",su);
		  break;
	  case '/':
	      d = division(x, y);
	      printf("%.1lf",d);
		  break;
      case '*':
	      p = product(x, y);
	      printf("%.1lf",p);
		  break;
	  default:
		  printf("Enter a valid operation");
		  break;
	}
	return 0;
}