#include <stdio.h>
#include <stdlib.h>

int main() {
    int total_sales;
    int days;
    double average_sales;

    printf("Enter total sales (UGX): ");
    scanf("%d", &total_sales);

    printf("Enter number of days: ");
    scanf("%d", &days);

    average_sales = (double)total_sales / days;

    printf("Average Sales per Day: %.2lf UGX\n", average_sales);

    return 0;
}
