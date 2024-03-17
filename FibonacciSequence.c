//#include <stdio.h>
//
//int main (){
//	int num , i = 0;
//	
//	printf("\t Fibonacci Numbers \t");
//	printf("Enter the nth number of Fibonacci Sequence (Enter 0 to quit) : ");
//	scanf("%d" , &num);
//
//
//    do {
//     for ( i= 0 , i <= num , i++){
//     num 	
//	 }
//	}while (num != 0);
//	
//}


#include <stdio.h>
int main()
{
    unsigned int a;
    unsigned int b;
    unsigned int c;
    a = 0;
    b = 0;
    c = 1;
    while(1)
    {
        if (c < b)
            break;
        printf("%u\n",c);
        a = b;
        b = c;
        c = a + b;
    }
}