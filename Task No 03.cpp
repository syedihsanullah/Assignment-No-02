#include<iostream>
using namespace std;
int main()
{
    int Pen= 10, Rubber= 40, Marker=20;
    int Quantity_Pen, Quantity_Rubber, Quantity_Marker;
    cout<<"Enter Quantity of Pen:";
    cin>>Quantity_Pen;
    cout<<"Enter Quantity of Rubber:";
    cin>>Quantity_Rubber;
    cout<<"Enter Quantity of Marker:";
    cin>>Quantity_Marker;
    int Total = (Pen*Quantity_Pen)+(Rubber*Quantity_Rubber)+(Marker*Quantity_Marker);
    int finalTotal = (Total>200)? Total*0.9 : Total;
    int shipping = (finalTotal<150)?15.0:0.0;
    cout<<"Total after discount and shipping: $"<<finalTotal+shipping<<endl;
    return 0;
}
