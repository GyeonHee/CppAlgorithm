#include <string>
#include <iostream>

using namespace std;

int findFactor(int num)
{
    int cnt = 0;
    for(int i = 1; i <= num; ++i)
    {
        if(num % i == 0)
        {
            cnt++;
        }
    }
    cout << cnt;
    return cnt;
}

int solution(int left, int right)
{
    int answer = 0;
    int tot;
    for(int i = left; i <= right; ++i)
    {
        tot = findFactor(i);
        if(tot % 2 == 0)
        {
            answer+=i;
        }
        else
        {
            answer-=i;
        }
    }
    
    
    return answer;
}