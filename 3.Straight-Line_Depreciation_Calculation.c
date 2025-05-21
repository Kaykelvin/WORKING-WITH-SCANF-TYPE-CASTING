#include <stdio.h>
#include <stdlib.h>

int main() {
    double asset_cost;
    double residual_value;
    int useful_life;
    double depreciation;

    printf("Enter asset cost (UGX): ");
    scanf("%lf", &asset_cost);

    printf("Enter residual value (UGX): ");
    scanf("%lf", &residual_value);

    printf("Enter useful life (in years): ");
    scanf("%d", &useful_life);

    depreciation = (asset_cost - residual_value) / (double)useful_life;

    printf("Annual Depreciation: %.2lf UGX\n", depreciation);

    return 0;
}
