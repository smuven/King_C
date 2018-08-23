# include <stdio.h>


int main (void)

{
    // Dollar Bill Counter

    int amt;
    int count_20, count_10, count_5, count_1;
    int moving_bal;
    printf("Enter any amount to find the number of bills you need: ");
    scanf("%d", &amt);
    
    
        count_20 = amt / 20 ;
        moving_bal = (amt - ((amt/20) * 20 ));
       
        count_10 = moving_bal / 10 ;
        moving_bal = (moving_bal - ((moving_bal/10) * 10 ));
        
        count_5 = moving_bal / 5 ;
        moving_bal = (moving_bal - ((moving_bal/5) * 5 ));
        
        count_1 = moving_bal / 1 ;
        moving_bal = (moving_bal - ((moving_bal/1) * 1 ));
    
    
    printf ("$20 bills: %d\n" ,  count_20);
    printf ("$20 bills: %d\n" ,  count_10);
    printf ("$20 bills: %d\n" ,  count_5);
    printf ("$20 bills: %d\n" ,  count_1);
    
    return 0;
}
