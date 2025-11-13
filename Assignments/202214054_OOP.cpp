#include <bits/stdc++.h >
using namespace std;

namespace Financial {
    namespace Mortgage {
        double monthlyPayment(double P, double r, double n) {
            r = r / 12.0;
            double c = pow(1.0 + r, n) - 1.0;
            return (P * r) / c;
        }

        double totalPayments(double monthly_payment, double n) {
            return monthly_payment * n;
        }
    }

    namespace Retirement {
        double monthlySavings(double P, double r, double n) {
            r = r / 12.0;
            double c = pow(1.0 + r, n) - 1.0;
            return P / ((pow(1.0 + r, n) - 1.0) / r) * c;
        }

        double totalSavings(double monthly_savings, double n) {
            return monthly_savings * n * 12.0;
        }
    }
}

int main() {
    double principal_amount, interest_rate, number_of_periods;
    cout << "Enter principal amount: ";
    cin >> principal_amount;
    cout << "Enter interest rate: ";
    cin >> interest_rate;
    cout << "Enter number of periods: ";
    cin >> number_of_periods;

    double monthly_payment = Financial::Mortgage::monthlyPayment(principal_amount, interest_rate, number_of_periods);
    double total_payments = Financial::Mortgage::totalPayments(monthly_payment, number_of_periods);

    double monthly_savings = Financial::Retirement::monthlySavings(principal_amount, interest_rate, number_of_periods);
    double total_savings = Financial::Retirement::totalSavings(monthly_savings, number_of_periods);

    cout << "Total payments for mortgage: " << total_payments << endl;
    cout << "Total savings needed for retirement: " << total_savings << endl;

    return 0;
}
