#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    int aMax = 0, bMax = 0;
    for(int i = 0; i < sizes.size(); ++i)
    {
        sort(sizes[i].begin(), sizes[i].end());
    }
  
    for(int i = 0; i < sizes.size(); ++i)
    {
        for(int j = 0; j < sizes[i].size(); ++j)
        {
            if(j == 0)
            {
                if(aMax < sizes[i][j])
                {
                    aMax = sizes[i][j];
                }
            }
            else
            {
                if(bMax < sizes[i][j])
                {
                    bMax = sizes[i][j];
                }
            }
        }
    }
    
    answer = aMax * bMax;
    return answer;
}