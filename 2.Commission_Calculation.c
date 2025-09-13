#include <stdio.h>
#include <stdlib.h>

int main() {
    double sales_volume;
    double commission_rate;
    double commission;

    printf("Enter sales volume (UGX): ");
    scanf("%lf", &sales_volume);

    printf("Enter commission rate (For example 0.05 for 5%%): ");
    scanf("%lf", &commission_rate);

    commission = sales_volume * commission_rate;

    printf("Commission Earned: %.2lf UGX\n", (double)commission);

    return 0;
}
