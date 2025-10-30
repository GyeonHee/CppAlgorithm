#include <iostream>
#include <numeric>

using namespace std;

long long int a, b;
long long int r = 0;
long long int res;

int main() {

    cin.tie(0);
    cin.sync_with_stdio(false);
   
    cin >> a >> b;

    while (r == 0)
    {
        r = gcd(a, b);
    }

    res = a / r * b;

    cout << res;
}