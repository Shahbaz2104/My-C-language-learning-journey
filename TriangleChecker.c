#include <stdio.h>

int main (){
	int a ,b ,c ;
	printf("\t Triangle Checker. \t");
	printf("\n \n Enter the sides of triangle : ");
	scanf("%d  %d %d", &a ,&b , &c);
	
	
	// Test to check Triangle Type
	
	
	if ( a <= 0 || b <= 0 || c < 0 ) 
	printf("Not a triangle");
	else if ( a >= b + c || b >= c + a || c >= a + b)
	printf("Not a triangle");
	else if ( a == b && b == c)
	printf("The Triangle is Equilateral");
	else if ( a == b || b == c)
	printf("The Triangle is Isosceles");
	else 
		printf("The Triangle is Scalene");
	
}