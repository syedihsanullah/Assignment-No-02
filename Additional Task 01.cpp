
#include <iostream>
using namespace std;

int main() {
    int Shoes = 90, Clothes = 140, Shirt = 70;
    int Quantity_Shoes, Quantity_Clothes, Quantity_Shirt;
    
    cout << "Enter Quantity of Shoes: ";
    cin >> Quantity_Shoes;
    
    cout << "Enter Quantity of Clothes: ";
    cin >> Quantity_Clothes;
    
    cout << "Enter Quantity of Shirt: ";
    cin >> Quantity_Shirt;
    
    int Total = (Shoes * Quantity_Shoes) + (Clothes * Quantity_Clothes) + (Shirt * Quantity_Shirt);
    int finalTotal = (Total > 200) ? Total * 0.9 : Total;
    int shipping = (finalTotal < 150) ? 15 : 0;
    int TotalWithShipping = finalTotal + shipping;
    int loyaltyPoints = (TotalWithShipping > 300) ? 50 : 20;
    
    cout << "Total after discount and shipping: $" << TotalWithShipping << endl;
    cout << "Loyalty points earned: " << loyaltyPoints << endl;
    
    int PaymentMethod;
    cout << "Select a Payment Method (1 for Credit Card, 2 for PayPal, 3 for Cash): ";
    cin >> PaymentMethod;
    
    int TransactionFee = (PaymentMethod == 1) ? TotalWithShipping * 0.02 : (PaymentMethod == 2) ? TotalWithShipping * 0.03 : 0;
    int TotalAfterPayment = TotalWithShipping + TransactionFee;
    
    cout << "Total After Applying Transaction Fee: $" << TotalAfterPayment << endl;
    
    return 0;
}
