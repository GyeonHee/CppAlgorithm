#include <iostream>
#include <numeric>

using namespace std;

long long int a1, b1, a2, b2, a3, b3, r, g;

int main() {

    cin.tie(0);
    cin.sync_with_stdio(false);
   
    cin >> a1 >> b1 >> a2 >> b2;

    // 공통 분모 구하기
    r = gcd(b1, b2);
    b3 = b1 / r * b2;

    // 통분 후 분자 계산
    a3 = a1 * (b3 / b1) + a2 * (b3 / b2);

    // 기약분수로 약분
    g = gcd(a3, b3);
    a3 /= g;
    b3 /= g;

    cout << a3 << " " << b3;
}