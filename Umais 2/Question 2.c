#include <stdio.h>

int main() {
    
    const int BOLT_PRICE = 5;
    const int NUT_PRICE = 3;
    const int WASHER_PRICE = 1;

 
    int bolts, nuts, washers;

    
    printf("Enter the number of bolts: ");
    scanf("%d", &bolts);
    
    printf("Enter the number of nuts: ");
    scanf("%d", &nuts);

    printf("Enter the number of washers: ");
    scanf("%d", &washers);

    
    int flag = 1;  

    
    if (nuts < bolts) {
        printf("Check the Order: too few nuts\n");
        flag = 0;
    }

    
    if (washers < 2 * bolts) {
        printf("Check the Order: too few washers\n");
       flag = 0;
    }

   
    if (flag) {
        printf("Order is OK.\n");
    }

    
    int totalPrice = (bolts * BOLT_PRICE) + (nuts * NUT_PRICE) + (washers * WASHER_PRICE);
    printf("Total price: %d cents\n", totalPrice);

    return 0;
}
