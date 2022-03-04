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
float square(float x){
    return x*x;
}
float qube(float x){
    
    return x*x*x;
}
float squareroot(float x){
	return sqrt(x);

}