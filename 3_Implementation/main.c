#include <stdio.h>
#include "function.h"
#include <stdlib.h>
#include <windows.h>
#include <strings.h>
#include <ctype.h>
void menu(){
	system("cls");
	int position=1;
	int keyPressed=0;
	while(keyPressed != 13){
		system("cls");
		char*c="";
		arrowhead(1,position);printf("%20s ADDITION\n",c);
		arrowhead(2,position);printf("%20s SUBTRACTION\n",c);
		arrowhead(3,position);printf("%20s MULTIPLICATION\n",c);
		arrowhead(4,position);printf("%20s DIVISION\n",c);
		keyPressed=getch();
		if(keyPressed==80 && position!=4){
			position++;
		}else if (keyPressed==72 && position!=1){
			position--;
		}else{
		position=position;
		}	
	}
	printf("selection is %d\n",position);
	getch();
	
}
void arrowhead(int pos,int arrpos){
	if(pos==arrpos){
		printf("==>>>");
	}else{
		printf("     ");
	}
}
int main(){
	menu();
	return 0;
}