#include <stdio.h>

int main (){
	int  marks;

	printf("Enter Your Marks Here :");
	scanf("%d",&marks);
	
	if (marks >= 75){
		printf("Your Grade is A");
	}else if (marks <= 75 && marks >=50){
		printf("Your Grade is B");
	}else if (marks < 50 && marks != 0){
		printf("Your Garde is F");
	}else {
		printf("Error");
	}
}