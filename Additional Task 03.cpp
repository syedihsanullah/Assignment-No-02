#include <iostream>
using namespace std;
int main() 
{
    double Charger = 90.0, Cable = 60.0, Headphone = 70.0;
    int quantityA, quantityB, quantityC;
    double total, total_dis;
    double total_Shipping = 0.0;
    int p_method;
    double transactionFee, After_Payment;
    cout << "How many Charger do you need: ";
    cin >> quantityA;
    cout << "The total price of Charger you buy is =$" << quantityA * Charger << endl;
    
    cout << "How many Cable do you need: ";
    cin >> quantityB;
    cout << "The total price of Cable you buy is =$" << quantityB * Cable << endl; 
    cout << "How many Headphone do you need: ";
    cin >> quantityC;
    cout << "The total price of Headphone you buy is =$" << quantityC * Headphone << endl;
    total = (quantityA * Charger) + (quantityB * Cable) + (quantityC * Headphone);
    cout << "The total bill of all items is equal to =$" << total << "\n";
    if (total > 1000)
     {
        total_dis = total * 0.9;
        cout << "You got a 10% dis. Total after dis: $" << total_dis << endl;
    }
     else
      {
        total_dis = total;
    }
    if (total_dis > 500)
     {
        total_Shipping = total_dis + 30; 
        cout << "After adding shipping, the total price is = $" << total_Shipping << "\n";
    } 
    else
     {
        total_Shipping = total_dis; 
    }
    int guess;
    cout<<"Enter a code From 100 to 500 randomly to get $10 discount :"<<endl;
    cin>>guess;
    if(guess==405)
    {
        cout<<"you Guess correct code So $"<<total_dis-10<<endl;
     }
    cout << "Enter Payment Method (1 for Credit Card, 2 for PayPal, 3 for Cash): ";
    cin >> p_method;
    transactionFee = (p_method == 1) ? total_Shipping * 0.02 : (p_method == 2) ? total_Shipping * 0.3 : 0.0;
    After_Payment = total_Shipping + transactionFee;
    cout << "Total amount you pay is: $" << After_Payment << endl;
    int loyaltyPoints = (total_dis > 1000) ? 50 : 20;
    cout << "Your loyalty points are: " << loyaltyPoints << endl;
    return 0;
}