//CODE FOR ODD-EVEN IDENTIFICATION//
#include <stdio.h>
int main () {

    int n1;
    printf("Write a number to check if its divisible by 2.\n");
    scanf("%d", &n1);
    //MY APPROACH FOR THIS CODE//
    
    printf("[0->ODD 1->EVEN]\n");
    printf("The number is %d.\n", !(n1%2));
    
    //STANDARD APPROACH FOR THIS CODE//
    printf("%d\n",n1%2==0);
    
    return 0;
}