#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
	cin.tie(NULL);
	cin.sync_with_stdio(false);
	
	while(true)
	{
        string s;
        getline(cin, s);

        if (s == ".") 
        {
            break;
        }

        stack<char> st;
        bool flag = 0;
        for (int i = 0; i < s.length(); i++) 
        {
            if ((s[i] == '(') || (s[i] == '['))
            {
                st.push(s[i]);
            }
            else if (s[i] == ')') 
            {
                if (!st.empty() && st.top() == '(') 
                {
                    st.pop();
                }
                else 
                {
                    flag = 1;
                    break;
                }
            }
            else if (s[i] == ']')
            {
                if (!st.empty() && st.top() == '[') 
                {
                    st.pop();
                }
                else 
                {
                    flag = 1;
                    break;
                }
            }
        }

        if (flag == 0 && st.empty()) 
        {
            cout << "yes" << endl;
        }
        else 
        {
            cout << "no" << endl;
        }
	}
}
