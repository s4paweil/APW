//
// Created by patrick on 18.04.24.
//

// Testcase3: 1660

#include "iostream"

using namespace std;

int main() {
    int participants, budget, hotels, weeks;

    cin >> participants >> budget >> hotels >> weeks;

    int minCost = INT32_MAX;

    bool stayHome = true;

    int price;
    int beds;

    while (cin >> price) {
        for (int i = 0; i < weeks; i++) {
            cin >> beds;

            int totalCosts = participants * price;

            if (beds < participants) {
                continue;
            } else if ((totalCosts) > budget) {
                continue;
            } else {
                if (totalCosts < minCost) {
                    stayHome = false;
                    minCost = totalCosts;
                }
            }
        }
    }

    if (!stayHome) {
        cout << minCost << endl;
    } else {
        cout << "stay home" << endl;
    }
}
