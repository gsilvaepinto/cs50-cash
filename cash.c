#include <stdio.h>

int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(){
    int cents = 0;
    int result = 0;

    do
    {
        printf("Total Owed: ");
        result = scanf("%i", &cents);

        if(result == 0){
            while(getchar() != '\n');
            cents = -1;
        }
    } while (cents < 0);

    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;

    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;

    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

    int total_coins = quarters + dimes + nickels + pennies;

    printf("Total Amount: %i\n", total_coins);
}

int calculate_quarters(int cents){
    int quarters = 0;

    while(cents >= 25){
        cents = cents - 25;
        quarters++;
    }
    return quarters;
}

int calculate_dimes(int cents){
    int dimes = 0;

    while(cents >= 10){
        cents = cents - 10;
        dimes++;
    }
    return dimes;
}

int calculate_nickels(int cents){
    int nickels = 0;

    while(cents >= 5){
        cents = cents - 5;
        nickels++;
    }
    return nickels;
}

int calculate_pennies(int cents){
    int pennies = 0;

    while(cents >= 1){
        cents = cents - 1;
        pennies++;
    }
    return pennies;
}