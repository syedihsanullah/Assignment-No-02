#include<iostream>
using namespace std;
int main() 
{
    double Chocolate = 120.0, Gum = 40.0, Chips = 20.0;
    int quantityA, quantityB, quantityC;
    double total, total_dis;
    double total_Shipping = 0.0;
    int p_method;
    double transactionFee, After_Payment;
    cout << "How many Chocolate do you need: ";
    cin >> quantityA;
    cout << "The total price of Chocolate you buy is =$" << quantityA * Chocolate << endl;
    
    cout << "How many Gum do you need: ";
    cin >> quantityB;
    cout << "The total price of Gum you buy is =$" << quantityB * Gum << endl; 
    cout << "How many Chips do you need: ";
    cin >> quantityC;
    cout << "The total price of Chips you buy is =$" << quantityC * Chips << endl;
    total = (quantityA * Chocolate) + (quantityB * Gum) + (quantityC * Chips);
    cout << "The total bill of all items is equal to =$" << total << "\n";
    if (total > 1000)
     {
        total_dis = total * 0.9;
        cout << "you got a 10% dis. Total after dis: $" << total_dis << endl;
    }
     else
      {
        total_dis = total;
    }
    int location;
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
double totalWithTax = total_dis * (1 + taxRate);
cout << "Total after applying sales tax: $" << totalWithTax << endl;
    int loyaltyPoints = (total_dis > 1000) ? 50 : 20;
    cout << "Your loyalty points are: " << loyaltyPoints << endl;
    return 0;
}