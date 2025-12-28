#include <stdio.h>

int main(void) {
    // Prompt the user for the value of trade
    float value_of_trade;
    while (1) {
        printf("Enter value of trade: ");
        scanf("%f", &value_of_trade);

        if (!value_of_trade) {
            break;
        }

        // Calculate the commission
        float commission;
        if (value_of_trade < 2500) {
            commission = 30 + 0.017 * value_of_trade;
        } else if (value_of_trade >= 2500 && value_of_trade < 6250) {
            commission = 56 + 0.0066 * value_of_trade;
        } else if (value_of_trade >= 6250 && value_of_trade < 20000) {
            commission = 76 + 0.0034 * value_of_trade;
        } else if (value_of_trade >= 20000 && value_of_trade < 50000) {
            commission = 100 + 0.0022 * value_of_trade;
        } else if (value_of_trade >= 50000 && value_of_trade < 500000) {
            commission = 155 + 0.0011 * value_of_trade;
        } else {
            commission = 255 + 0.0009 * value_of_trade;
        }
        printf("Commission: $%.2f\n", commission);
    }

    return 0;
}