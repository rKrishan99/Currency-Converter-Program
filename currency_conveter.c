#include <stdio.h>

// Function to convert USD to EUR
double usd_to_eur(double amount) {
    const double usd_to_eur_rate = 0.91;
    return amount * usd_to_eur_rate;
}

// Function to convert USD to LKR
double usd_to_lkr(double amount) {
    const double usd_to_lkr_rate = 321.41;
    return amount * usd_to_lkr_rate;
}

// Function to convert EUR to USD
double eur_to_usd(double amount) {
    const double eur_to_usd_rate = 1.10;
    return amount * eur_to_usd_rate;
}

// Function to convert EUR to LKR
double eur_to_lkr(double amount) {
    const double eur_to_lkr_rate = 353.46;
    return amount * eur_to_lkr_rate;
}

// Function to convert LKR to USD
double lkr_to_usd(double amount) {
    const double lkr_to_usd_rate = 0.0031;
    return amount * lkr_to_usd_rate;
}

// Function to convert LKR to EUR
double lkr_to_eur(double amount) {
    const double lkr_to_eur_rate = 0.0028;
    return amount * lkr_to_eur_rate;
}

int main() {
    double amount, converted_amount;
    int choice_from, choice_to;

    printf("Enter the amount: ");
    scanf("%lf", &amount);

    printf("\nChoose the currency to convert from:\n");
    printf("1. USD\n");
    printf("2. EUR\n");
    printf("3. LKR\n");
    printf("Enter your choice: ");
    scanf("%d", &choice_from);

    printf("\nChoose the currency to convert to:\n");
    printf("1. USD\n");
    printf("2. EUR\n");
    printf("3. LKR\n");
    printf("Enter your choice: ");
    scanf("%d", &choice_to);

    // Perform the conversion based on user choices
    switch (choice_from) {
        case 1: // USD
            switch (choice_to) {
                case 1: // USD
                    converted_amount = amount;
                    break;
                case 2: // EUR
                    converted_amount = usd_to_eur(amount);
                    break;
                case 3: // LKR
                    converted_amount = usd_to_lkr(amount);
                    break;
                default:
                    printf("Invalid choice for conversion to currency.\n");
                    return 1;
            }
            break;
        case 2: // EUR
            switch (choice_to) {
                case 1: // USD
                    converted_amount = eur_to_usd(amount);
                    break;
                case 2: // EUR
                    converted_amount = amount;
                    break;
                case 3: // LKR
                    converted_amount = eur_to_lkr(amount);
                    break;
                default:
                    printf("Invalid choice for conversion to currency.\n");
                    return 1;
            }
            break;
        case 3: // LKR
            switch (choice_to) {
                case 1: // USD
                    converted_amount = lkr_to_usd(amount);
                    break;
                case 2: // EUR
                    converted_amount = lkr_to_eur(amount);
                    break;
                case 3: // LKR
                    converted_amount = amount;
                    break;
                default:
                    printf("Invalid choice for conversion to currency.\n");
                    return 1;
            }
            break;
        default:
            printf("Invalid choice for conversion from currency.\n");
            return 1;
    }

    printf("\n%.2lf %s is equal to %.2lf %s.\n", amount, 
        (choice_from == 1) ? "USD" : (choice_from == 2) ? "EUR" : "LKR",
        converted_amount, 
        (choice_to == 1) ? "USD" : (choice_to == 2) ? "EUR" : "LKR");

    return 0;
}
