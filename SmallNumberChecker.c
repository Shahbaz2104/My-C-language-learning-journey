#include <stdio.h>

int main (){
	int Num ;
	printf("\t Smallest Number Checker \n");
	printf("Enter Your Number (0 to end) : ");
	scanf("%d", &Num);
	
	//Loop Initialization
	if ( Num == 0) return ;
	 
  int SmallNum = Num;
	
	while ( Num != 0){
		if (Num < SmallNum)
		SmallNum = Num;
	  
	   printf("Enter Your Number (0 to end) : ");
	   scanf("%d", &Num);
	 }
	 printf("The Smallest Number is : %d " , SmallNum);
}
