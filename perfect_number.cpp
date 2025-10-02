#include <bits/stdc++.h>
using namespace std;

bool checkPerfectNumber(int num) {
    if (num <= 1) return false;
    int sum = 1;
    for (int i = 2; i <= sqrt(num); ++i) {
        if (num % i == 0) {
            sum += i;
            if (i != num / i) sum += num / i;
        }
    }
    return sum == num;
}

int main() {
    cout << checkPerfectNumber(28) << endl; // 1 (true)
    return 0;
}
