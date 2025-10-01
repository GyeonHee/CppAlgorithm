#include <iostream>
#include <deque>

using namespace std;

int main() {

    cin.tie(0);
    cin.sync_with_stdio(false);
   
    deque<int> dq;

    int n; 
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        dq.push_back(i + 1);
    }

    while (dq.size() != 1)
    {
        dq.pop_front();
        dq.push_back(dq.front());
        dq.pop_front();               
    }

    cout << dq.front();
}