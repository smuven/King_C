#include <stdio.h>
int main ()
{

    float n;
    float max = 0;
    
    while ( n!=0) {
        printf("Enter a number (enter 0 to escape): ");
        scanf("%f", &n);
        if ( n > max) {
            max = n;
        } // end if
        
        
    }  // end while
    
    printf( "\n");
    
    printf( "The largest number entered was %.2f \n\n", max);
    return 0;
}
