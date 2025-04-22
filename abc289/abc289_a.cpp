#include <bits/stdc++.h>
using namespace std;
int main() {
    string binary;
    cin >> binary;

    int len = binary.length();
    int num = stoi(binary, nullptr, 2); // Convert binary string to int
    int mask = (1 << len) - 1;          // Mask with same length as input
    int flipped = ~num & mask;          // Flip and mask

    // Output as binary string with leading zeros
    cout << bitset<32>(flipped).to_string().substr(32 - len) << endl;

    return 0;
}