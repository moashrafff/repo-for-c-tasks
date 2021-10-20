#include<iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main(void){
int num;
int A=0,B=0,C=0,pass=0,fail =0 ;
while (num!= -1 ) {
printf("Enter your mark ");
scanf("%d",&num);
printf(" You entered %d", num); 
printf("\n");

	if(num >= 85){
	printf(" You got A grade"); 
	printf("\n");
	A+=1;
	pass+=1;
		}
		else if ( num >75 && num <=85 ){ 
		printf(" You got B grade");
		printf("\n");
		B+=1;
		pass+=1;
		}
	else if ( num >= 65 && num <=75 ){
		printf(" You got C grade");
		printf("\n");
		C = C+1;
		pass+=1;
		}
	else if ( num <65&& num >0){
		printf(" You Failed in this exam");
		printf("\n");
		fail+=1;
		}
}

cout<<"The no of students get score A "<<A<<endl;
cout<<"The no of students get score B "<<B<<endl;
cout<<"The no of students get score C "<<C<<endl;
cout<<"The no of students Pass "<<pass<<endl;
cout<<"The no of students Failure "<<fail<<endl;
return 0;
}
