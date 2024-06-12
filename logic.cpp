#include <bits/stdc++.h>
using namespace std;

int main() {
    double level, totalSum = 0, betAmount, increasePercent;
    cout << "Enter Bet amount: ";
    cin >> betAmount;
    cout << "Enter increase Percent: ";
    cin >> increasePercent;
    cout << "Enter Level: ";
    cin >> level;

    double currentBet = betAmount;

    for(int i = 1; i <= level; i++) {
        totalSum += currentBet;
        cout << "Level " << i << ": " << currentBet << endl;
        currentBet += (currentBet * increasePercent / 100);
    }

    cout << "The Total Sum is: " << totalSum << endl;
    return 0;
}
