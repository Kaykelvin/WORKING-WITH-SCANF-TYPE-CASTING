#include <stdio.h>
#include <stdlib.h>

int main() {
    double customer1;
    double customer2;
    double customer3;
    double total_revenue;

    printf("Enter amount spent by Customer 1 (UGX): ");
    scanf("%lf", &customer1);

    printf("Enter amount spent by Customer 2 (UGX): ");
    scanf("%lf", &customer2);

    printf("Enter amount spent by Customer 3 (UGX): ");
    scanf("%lf", &customer3);

    total_revenue = customer1 + customer2 + customer3;

    printf("Total Revenue: %.2lf UGX\n", (double)total_revenue);

    return 0;
}
