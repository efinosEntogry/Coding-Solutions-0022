#include <iostream>

using namespace std;

int countZeros(int n) {
    if (n == 0) return 1;
    int count = (n % 10 == 0) ? 1 : 0;
    if (n / 10 == 0) return count;
    return count + countZeros(n / 10);
}

int main() {

    cout << countZeros(100600050) << endl;

    return 0;
}
