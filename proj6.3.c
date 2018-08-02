   #include <stdio.h>
   int main ()
   int x, y, x_num0, y_denom0, remainder;
    
    printf("Enter a fraction to reduce it to its lowest terms: ");
    scanf("%d/%d" , &x , &y);
    
    x_num0 = x;
    y_denom0 = y;
    
    
    while ( y != 0) {
        remainder = x % y ;
        
        x = y;
        y = remainder;
    
    }
 
    printf("In lowest terms: %d/%d\n", x_num0 / x, y_denom0 / x);
    
    return 0;
    
    }
