//Profit or Loss Percentage
#include <stdio.h>

int main() {
    float cp,sp;
    printf("Enter Cost Price: ");
    scanf("%f", &cp);
    printf("Enter Selling Price: ");
    scanf("%f", &sp);
    if (sp-cp>0) {
        printf("\nProfit: Rs.%0.2f\n", cp-sp);
        printf("Profit Percentage: %0.2f %%\n", (sp/cp-1)*100);
    } else if (cp-sp>0) {
        printf("\nLoss: Rs.%0.2f\n", cp-sp);
        printf("Loss Percentage: %0.2f %%\n", (1-sp/cp)*100);
    } else
        printf("\nNo Profit, No Loss.\n");
    return(0);
}
