#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <string>
#include <string.h>
#include <stack>
using namespace std;

int main(int argc, char const *argv[])
{
    int x,y,i;
    char s[] = "12+34+*";

    stack<int> st;

    for (i = 0; s[i] != '\0'; i++)
    {
        //cout<<s[i]<<" ";
    } 
    i = 0;
    while(s[i] != '\0')
    {
        if(s[i] >= '0' && s[i]<= '9')
        {
            x = s[i]-'0';
            st.push(x);
        }
        else if(s[i] == '-')
        {
            x = st.top();
            st.pop();
            y = st.top();
            st.pop();
            st.push(x - y);
        }
        else if(s[i] == '+')
        {
            x = st.top();
            st.pop();
            y = st.top();
            st.pop();
            st.push(x + y);
        }
        else if(s[i] == '*')
        {
            x = st.top();
            st.pop();
            y = st.top();
            st.pop();
            st.push(x * y);
        }
        else if(s[i] == '/')
        {
            x = st.top();
            st.pop();
            y = st.top();
            st.pop();
            st.push(x / y);
        }
        //cout<<st.top()<<endl;
        i++;
    }
    x = st.top();
    cout<<x<<endl;

    return 0;
}