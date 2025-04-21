/*
/ * * * \  / * * * \  / * * * \  / * * * \  / * * * \
|   R   |  |   A   |  |   F   |  |   I   |  |   Q   |
\ * * * /  \ * * * /  \ * * * /  \ * * * /  \ * * * /
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    std::vector<int> arr(3);
    std::cin >> arr[0] >> arr[1] >> arr[2] >> k;

    sort(arr.begin(), arr.end());

    std::cout << arr[0] + arr[1] + (arr[2] << k);

    return 0;
}
