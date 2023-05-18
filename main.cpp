/******************************************************************************
 *  Fibonati.
 * Fib (n) = Fib(n - 1) + Fib(n - 2) 
 *
 */
#include <stdio.h>
int fibonati (int num); 

int main()
{
    int num = 0;
    printf("Informe o número que você queira Fibnatizar: ");
    scanf("%d", &num);
    printf("O numero fibonatizado e: %d",fibonati(num));
    return 0;
}

int fibonati(int num){
    if (num == 0){
        return 0;
    }
   
    else if (num == 1){
       return 1;
    }
    
    else if (num > 0){
        return ( fibonati(num - 1) + fibonati(num - 2 ));
    }
    
}

