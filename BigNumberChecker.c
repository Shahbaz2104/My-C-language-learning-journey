#include <stdio.h>
int main (){
	int num , BigNum = 0;
	printf("Enter a Number (0 to end) : ");
	scanf( "%d", &num);
	
	// Loop Initialization
	
	while( num != 0){
		if (num > BigNum)
		BigNum = num;
		
		// Check If the number is big and repeat
	    printf("Enter a Number (0 to end) : ");
	    scanf( "%d", &num);			
	}
	printf("The biggest number is : %d\n",BigNum);

}