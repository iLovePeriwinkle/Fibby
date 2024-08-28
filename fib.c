#include <stdio.h>
#include <stdlib.h>

int count = 2;

void fibo(int, int, int);

int main ()
{
    int n1 = 0;
    int n2 = 1;
    int i;

    printf("How many sequences do you want?: ");
    scanf("%d", &i); 
    fibo(n1, n2, i);
    
    return 0;

}

void fibo(int n1, int n2, int i)
{
    
    if (n1 == 0)
    {
    
        printf("%d ", n1);

    }
    
    if (n2 == 1 && count != 3)
    {
    
        printf("%d ", n2);
    
    }

    if (count < i)
    {
        //The next sequence of Fibonacci  
        int n3 = n1 + n2;
        
	printf("%d ", n3);
        
	//The Fibonacci sequence is basically the sum of 2 previous numbers
	//We're currently in 'n' position (0-based index) the sum of two
	//previous numbers is (n - 1) + (n - 2) and we'll get the next 
	//iteration of the sequence.
	n1 = n2;
	n2 = n3;

	count += 1;

	fibo(n1, n2, i);
          
    }	    
    
    else
    {
    	
    	printf("\n");

        return;
    
    }
}

