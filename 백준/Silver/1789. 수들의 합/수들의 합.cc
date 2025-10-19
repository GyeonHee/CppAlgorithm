#include <iostream>

using namespace std;

long long S;
long long num = 1;
unsigned long long int tot = 0;
int main() {

    cin.tie(0);
    cin.sync_with_stdio(false);
   
    cin >> S;

    while (1)
    {
        if (tot > S) break;
        tot += num++;
    }

    cout << num - 2;
}