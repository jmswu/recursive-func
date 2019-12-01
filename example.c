#include <stdio.h>
#include <stdint.h>

/* Calculate factorial number
 * @param int n     - factorial number
 * @return int      - result
 */
int factor(int n);

/* Calculate the fibonacci number
 * @param int n     - the fibonacci number to get
 * @return int      - result
 */
int fib(int n);

int main(char *argv[], int argc){

    int input;

    printf("Please enter a number:");
    scanf("%d", &input);

    printf("%d!=%d\n", input, factor(input));
    printf("fib(%d)=%d\n", input, fib(input));

    return 0;
}

int factor(int n){

    /* error */
    if (n < 0) return -1;

    if (n >= 1){
        return n * factor(n - 1);
    }else{
        return 1;
    }
}

int fib(int n){

    if (n <= 2){
        return 1;
    }else{
        return fib(n - 1) + fib (n - 2);
    }
}