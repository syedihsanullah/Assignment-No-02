#include<iostream>
using namespace std;
int main ()
{
    int Chocolate= 40, Gum = 30, Biscuit=20;
    int Quantity_Chocolate, Quantity_Gum, Quantity_Biscuit;
    cout<<"Enter the Quantity of Chocolate:";
    cin>>Quantity_Chocolate;
    cout<<"Enter the Quantity of Gum:";
    cin>>Quantity_Gum;
    cout<<"Enter the Quantity of Biscuit:";
    cin>>Quantity_Biscuit;
    int Total = (Chocolate*Quantity_Chocolate)+(Gum*Quantity_Gum)+(Biscuit*Quantity_Biscuit);
    int finalTotal = (Total>200)? Total*0.9 : Total;
    cout<<"Total after discount: $"<<finalTotal<<endl;
    return 0;
}