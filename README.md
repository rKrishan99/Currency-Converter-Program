# Currency-Converter-Program
Currency Converter Program Using C Language

# 1. Introduction:
The Currency Converter Program is a C language-based project designed to facilitate currency conversions between three 
major currencies: US Dollar (USD), Euro (EUR), and Sri Lankan Rupee (LKR). The program takes user input for the amount 
to convert and allows the user to choose the source currency and the target currency. Based on these selections, the 
program performs the currency conversion using predefined exchange rates and displays the converted amount.
2. Purpose and Goals:
The primary purpose of this program is to provide a simple and user-friendly interface for currency conversion. The goals 
of this project are as follows:
a. Enable users to convert an amount between USD, EUR, and LKR.
b. Offer a straightforward user interface for ease of use.
c. Utilize predefined exchange rates for accurate conversions.
3. Features:
The Currency Converter Program offers the following key features:
a. User Input: The program allows the user to input the amount to convert and select the source and target currencies.
b. Exchange Rates: The exchange rates used for currency conversion are predefined as constants in the program.
c. Currency Options: The program supports conversions between USD, EUR, and LKR, providing a limited but practical 
selection of major currencies.
4. Implementation Details:
The program is implemented in C language and consists of the following components:
a. Conversion Functions: The program contains six conversion functions (usd_to_eur, usd_to_lkr, eur_to_usd, eur_to_lkr, 
lkr_to_usd, lkr_to_eur), each responsible for converting an amount between two specific currencies using the 
predefined exchange rates.
b. Main Function: The main function serves as the program's entry point. It prompts the user to input the amount, select 
the source currency, and choose the target currency. Based on the user's selections, the main function calls the 
appropriate conversion functions and calculates the converted amount.
5. Usage Instructions:
To use the Currency Converter Program, follow these steps:
a. Run the program.
b. Enter the amount to convert when prompted.
c. Choose the source currency (USD, EUR, or LKR) by entering the corresponding number.
d. Choose the target currency (USD, EUR, or LKR) by entering the corresponding number.
e. The program will display the original amount, source currency, converted amount, and target currency.
6. Limitations and Improvements:
The current version of the Currency Converter Program has the following limitations:
a. Limited Currencies: The program only supports conversions between USD, EUR, and LKR. Future improvements could 
include adding more currencies to provide a broader range of conversion options.
b. Static Exchange Rates: The program uses fixed exchange rates, which may become outdated over time. A dynamic 
solution could fetch real-time exchange rates from external APIs.
7. Conclusion:
The Currency Converter Program serves as a functional and educational tool for currency conversions. It demonstrates 
the basic concepts of C programming and provides a foundation for future enhancements. While it has some limitations, 
it meets its primary objective of converting between three major currencies accurately.
8. Acknowledgments:
We would like to express our gratitude to the C programming language creators and the open-source community for 
providing the necessary tools and resources to develop this Currency Converter Program. Additionally, we thank our 
university and instructors for their support and guidance throughout this project
