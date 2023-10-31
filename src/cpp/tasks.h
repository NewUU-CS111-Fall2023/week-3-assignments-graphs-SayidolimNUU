/*
 * Author:  Sayidolimxon Usmanxonov
 * Date:    31.10.2023
 */

#include <iostream>
#include <vector>

using namespace std;

void task3() {
    int a, b, c = 1;
    vector<int> vector1;
    cin >> a >> b;

    while (a < b) {
        ++c;
        vector1.push_back(b);
        if (b % 2 == 0 && b >= 2 * a) {
            b /= 2;
        }
        else if (b % 10 == 1 && b >= 10 * a + 1) {
            b--;
            b /= 10;
        }
        else {
            cout << "NO";
            return;
        }
    }
    vector1.push_back(b);
    cout << "YES" << endl << c << endl << vector1.at(vector1.size() - 1);
    for (int i = vector1.size() - 2; i > -1; i--) {
        cout << " " << vector1.at(i);
    }
}
