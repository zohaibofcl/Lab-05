#include <iostream>
using namespace std;

int main() {
    // Initial account balance
    float balance = 1000.0; // You can set any starting balance here
    
    // Display initial balance
    cout << "Initial Balance: " << balance << " PKR" << endl;

    // Simulate deposit
    float depositAmount = 500.0; // Amount to deposit
    balance += depositAmount; // Using += operator
    cout << "After Deposit of " << depositAmount << " PKR, Balance: " << balance << " PKR" << endl;

    // Simulate withdrawal
    float withdrawalAmount = 200.0; // Amount to withdraw
    balance -= withdrawalAmount; // Using -= operator
    cout << "After Withdrawal of " << withdrawalAmount << " PKR, Balance: " << balance << " PKR" << endl;

    // Final account balance display
    cout << "Final Account Balance: " << balance << " PKR" << endl;

    return 0;
}
