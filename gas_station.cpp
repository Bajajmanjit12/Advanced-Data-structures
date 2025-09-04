//gas station greddy 4

#include <iostream>
using namespace std;

int main() {
    int gas[]  = {1, 2, 3, 4, 5};
    int cost[] = {3, 4, 5, 1, 2};
    int n = 5;

    int total = 0, tank = 0, start = 0;

    for (int i = 0; i < n; i++) {
        int diff = gas[i] - cost[i];
        total += diff;
        tank  += diff;

        if (tank < 0) {     // cannot reach next station
            start = i + 1;  // try next as new start
            tank = 0;       // reset tank
        }
    }

    if (total >= 0)
        cout << "Starting station = " << start << endl;
    else
        cout << "No solution (-1)" << endl;

    return 0;
}
