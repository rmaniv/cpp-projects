//FINAL
#include <bits/stdc++.h>

using namespace std;

ifstream f("data.in");
ofstream g("data.out");

char Stack[32000];
int ind;

void push(char ch)
{
    Stack[++ind] = ch;
}

void pop()
{
    ind--;
}

int main()
{
    int t;
    f >> t;

    char exp[32000];

    for(int i = 0; i <t; i++)
    {
        f >> exp;

        g << endl;

        ind = 0;

        for(int j = 0; exp[j] != '\0'; j++)
        {
            if(exp[j] == '(' || exp[j] == '+' || exp[j] == '*' || exp[j] == '-' || exp[j] == '/' || exp[j] == '^')
                push(exp[j]);

            if(exp[j] >= 'a' && exp[j] <= 'z')
                g << exp[j];

            else if(exp[j] == ')')
            {
                while(Stack[ind] != '(')
                {
                    g << Stack[ind];
                    pop();
                }
                pop();
            }
        }
    }
    return 0;
}
