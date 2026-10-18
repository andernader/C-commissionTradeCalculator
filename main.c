#include <stdio.h>

int main(void){
    int value_of_trade;
    float commission;
    program_start:
    printf("Enter value of trade: ");
    scanf("%d", &value_of_trade);
    if(value_of_trade < 2500)
        commission = value_of_trade * 1.7f / 100 + 30;
    else if(value_of_trade >= 2500 && value_of_trade < 6250)
        commission = value_of_trade * 0.66f / 100 + 56;
    else if(value_of_trade >= 6250 && value_of_trade < 20000)
        commission = value_of_trade * 0.34f / 100 + 76;
    else if(value_of_trade >= 20000 && value_of_trade < 50000)
        commission = value_of_trade * 0.22f / 100 + 100;
    else if(value_of_trade >= 50000 && value_of_trade < 500000)
        commission = value_of_trade * 0.11f / 100 + 155;
    else if(value_of_trade >= 500000)
        commission = value_of_trade * 0.09f / 100 + 255;
    else{
        printf("Wrong input, try again!\n");
        goto program_start;
    }

    if(commission < 39)
        commission = 39;

    printf("Commission: $%.2f\n", commission);

    return 0;
}
