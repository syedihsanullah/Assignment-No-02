#include<iostream>
using namespace std;
int main() 
{
    double Pen = 50.0, Pencil = 70.0, Chair = 190.0;
    int quantityA, quantityB, quantityC;
    double total, total_dis;
    double total_Shipping = 0.0;
    int p_method;
    double transactionFee, After_Payment;
    cout << "How many Pen do you need: ";
    cin >> quantityA;
    cout << "The total price of Pen you buy is =$" << quantityA * shoes << endl;
    cout << "How many Pencil do you need: ";
    cin >> quantityB;
    cout << "The total price of Pencil you buy is =$" << quantityB * cloth << endl; 
    cout << "How many Chair do you need: ";
    cin >> quantityC;
    cout << "The total price of Chair you buy is =$" << quantityC * bag << endl;
    total = (quantityA * Pen) + (quantityB * Pencil) + (quantityC * Chair);
    cout << "The total bill of all items is equal to =$" << total << "\n";
    if (total > 1000)
     {
        total_dis = total * 0.9;
        cout << "You got a 10% dis. Total after discount: $" << total_dis << endl;
    }
     else
      {
        total_dis = total;
    }
    if (total_dis > 500)
     {
        total_Shipping = total_dis + 30; 
        cout << "After adding shipping, total price is = $" << total_Shipping << "\n";
    } 
    else
     {
        total_Shipping = total_dis; 
    }
    int customer;
    cout<<"Enter num \"1\"if regular customer if VIP enter \"2\" :";
    cin>>customer;
    if(customer==02)
    {
        cout<<"due to VIP customer you have 5% diS :"<<total_dis*0.95<<endl;
    }
    else{
        cout <<"your bill is :"<<total_dis<<endl;
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