#include "fun.h"
#include <math.h>
void arrowhead(int pos,int arrpos){
	if(pos==arrpos){
		printf("==>>>");
	}else{
		printf("     ");
	}
}
int fact(int z){
	int i,fact=1;
	for(i=1;i<=z;i++){    
      fact=fact*i;    
    }
	return fact;    
}
double square(double x){
    return x*x;
}
double qube(double x){
    
    return x*x*x;
}
double squareroot(double x){
	return sqrt(x);

}