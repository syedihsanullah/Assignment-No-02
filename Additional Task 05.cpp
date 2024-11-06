#include <iostream>
using namespace std;
int main() {
    double Bed = 170.0, Shirt = 80.0, T_Shirt = 90.0;
    int quantityA, quantityB, quantityC;
    double total, total_dis, totalWithTax, After_Payment;
    int location, p_method;
    double transactionFee;
    cout << "How many Bed do you need: ";
    cin >> quantityA;
    cout << "The total price of Bed you buy is =$" << quantityA * Bed << endl;
    cout << "How many Shirt do you need: ";
    cin >> quantityB;
    cout << "The total price of Shirt you buy is =$" << quantityB * Shirt << endl;
    cout << "How many T_Shirt do you need: ";
    cin >> quantityC;
    cout << "The total price of T_Shirt you buy is =$" << quantityC * T_Shirt << endl;
    total = (quantityA *  Bed) + (quantityB * Shirt) + (quantityC * T_Shirt);
    if (total > 1000) {
        total_dis = total * 0.9;
        cout << "you got a 10% dis. \nTotal after dis: $" << total_dis << endl;
    } else {
        total_dis = total;
    }
    cout << "Enter your location (1, 2, or 3): ";
    cin >> location;
    double taxRate;
    if (location == 1) {
        taxRate = 0.05;
    } else if (location == 2) {
        taxRate = 0.10;
    } else {
        taxRate = 0.08;
    }
    totalWithTax = total_dis * (1 + taxRate);
    cout << "Total after applying sales tax: $" << totalWithTax << endl;
    cout << "Enter Payment Method (1 for Credit Card, 2 for PayPal, 3 for Cash): ";
    cin >> p_method;
    transactionFee = (p_method == 1) ? totalWithTax * 0.02 : (p_method == 2) ? totalWithTax * 0.03 : 0.0;
    After_Payment = totalWithTax + transactionFee;
    cout << "Transaction Fee: $" << transactionFee << endl;
    cout << "Total amount you pay is: $" << After_Payment << endl;
    int loyaltyPoints = (total_dis > 1000) ? 50 : 20;
     cout << "-------------------------------------\n";
    cout << "Bed Quantity : " << quantityA << "\tPrice :\t$" << quantityA * Bed << endl;
    cout << "Shirt Quantity : " << quantityB << "\tPrice :\t$" << quantityB * Shirt << endl;
    cout << "T_Shirt Quantity : " << quantityC << "\tPrice :\t$" << quantityC * T_Shirt<< endl;
    cout << "-------------------------------------\n";
    cout << "Your Bill with out extra charges \t$" << total << endl;
     cout << "-------------------------------------\n";
    cout << "Total after applying sales tax: $" << totalWithTax << endl;
    cout << "Transaction Fee: $" << transactionFee << endl;
    cout << "Total amount you pay is: $" << After_Payment << endl;
    cout << "Your loyalty points are: " << loyaltyPoints << endl;
    return 0;
}