#include"inc/fun.h"
#include<stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <ctype.h>
#include <windows.h>
#include <conio.h>
int main(){
	system("cls");
	int position=1;
	int keyPressed=0;
	int keypressedagain=0; 
	float x;
	float y;
	int z;
	while(keyPressed != 13){
		system("cls");
		char*c="";
		printf("***********************************************************************\n");
	    printf("***********************************************************************\n");
	    printf("%25s Calculator\n",c);
	    printf("***********************************************************************\n");
	    printf("***********************************************************************\n");
		printf("\n");
		printf("\n");
		arrowhead(1,position);printf("%20s ADDITION\n",c);
		arrowhead(2,position);printf("%20s SUBTRACTION\n",c);
		arrowhead(3,position);printf("%20s MULTIPLICATION\n",c);
		arrowhead(4,position);printf("%20s DIVISION\n",c);
		arrowhead(5,position);printf("%20s FACTORIAL\n",c);
		arrowhead(6,position);printf("%20s SQUAREROOT\n",c);
		arrowhead(7,position);printf("%20s SQUARE\n",c);
		arrowhead(8,position);printf("%20s QUBE\n",c);
		printf("\n");
		printf("\n");
		printf("Press ENTER to select an operation\n");
		printf("Press UP and DOWN arrow keys to navigate through the options\n");
		keyPressed=getch();
		if(keyPressed==80 && position!=8){
			position++;
		}else if (keyPressed==72 && position!=1){
			position--;
		}else{
		position=position;
		}	
	}
	char *operation[10]={"ADDITION","SUBTRACTION",
	                      "MULTIPLICATION","DIVISION",
						  "FACTORIAL","SQUAREROOT",
						  "SQUARE","QUBE"};
	int operationselection=position-1;					  
	printf("Selected operation is %s\n",operation[operationselection]);
	printf("Press ESC if you don't prefer this operation \n");
	printf("Press any key other than ESC if you want to proceed with the operation\n");
	keypressedagain=getch();
	if(keypressedagain==27){
		main();
	}else{
		switch(position){
		case(1):
		    system("cls"); 
		    printf("ADDITION\n");
		    printf("Enter the first number: \n");
	        scanf("%f",&x);
	        printf("Enter the second number: \n");
	        scanf("%f",&y); 
			printf("Answer is : %.1f\n", sum(x,y));
		    break;
		case(2):
		    system("cls");
		    printf("SUBTRACTION\n");
		    printf("Enter the first number: \n");
	        scanf("%f",&x);
	        printf("Enter the second number: \n");
	        scanf("%f",&y);
		    printf("Answer is : %.1f\n", subtraction(x,y));
		    break;
		case(3):
		    system("cls");
		    printf("MULTIPILCATION\n");
		    printf("Enter the first number: \n");
	        scanf("%f",&x);
	        printf("Enter the second number: \n");
	        scanf("%f",&y);
	        printf("Answer is : %.1f\n",product(x,y));
		    break;
		case(4):
		    system("cls");
		    printf("DIVISION\n");
		    printf("Enter the first number: \n");
	        scanf("%f",&x);
	        printf("Enter the second number: \n");
	        scanf("%f",&y);
		    printf("Answer is : %.1f\n",division(x,y));
		    break;
		case(5):
		    system("cls");
		    printf("FACTORIAL\n");
		    printf("Enter the number: \n");
	        scanf("%d",&z);
		    printf("Answer is : %d\n",fact(z));
		    break;
	    case(6):
		    system("cls");
		    printf("SQUAREROOT\n");
		    printf("Enter the number: \n");
	        scanf("%f",&x);
		    printf("Answer is : %.1f\n",squareroot(x));
		    break;
		case(7):
		    system("cls");
		    printf("SQUARE\n");
		    printf("Enter the number: \n");
	        scanf("%f",&x);
		    printf("Answer is : %.1f\n",square(x));
		    break;
		case(8):
		    system("cls");
            printf("QUBE\n");
		    printf("Enter the  number: \n");
	        scanf("%f",&x);
		    printf("Answer is : %.1f\n",qube(x));
		    break;			
		default:
		    system("cls");
		    printf("Operant is invalid");
		    break;
	}
	}
	printf("Press any key to return to main menu\n");
	getch();
	main();
	return 0;}
