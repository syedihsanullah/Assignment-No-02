#include<iostream>
using namespace std;
int main()
{
    int Charger = 100;
    int Headphone = 70;
    int Cover = 40;
    int Quantity_Charger, Quantity_Headphone, Quantity_Cover;
    cout<<"Enter the Quantity of Charger:";
    cin>>Quantity_Charger;
    cout<<"Enter the Quantity of Headphone:";
    cin>>Quantity_Headphone;
    cout<<"Enter the Quantity of Cover:";
    cin>>Quantity_Cover;
    int total = (Quantity_Charger*Charger)+(Quantity_Headphone*Headphone)+(Quantity_Cover*Cover);
    cout<<"Your Total Bill is :$"<<total;
    return 0;
}