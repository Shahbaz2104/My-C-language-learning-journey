#include <stdio.h>
#include <string.h>
int main(){
    int a , b , c;
    printf("Enter the sides of the triangle\n");
    scanf(" %d %d %d", &a ,&b,&c);
    
    if( a<=0 || b<=0 || c<=0) {
    	printf("Not a triangle");
    
	}else if ( a>= b+c || b >= c+a || c >= a+b){
		printf("Cannot calculate");
	}
	 else if ( a==b && b==c){
		printf("Equilateral");
		
	}else if ( a==b || b==c || c==a){
		printf("Isosceles");
	
	}else{
		printf("Scalene");
	}
  
  	return 0;
}