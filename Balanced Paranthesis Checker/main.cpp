#include <bits/stdc++.h>
using namespace std;

char input[32000];
char Stack[32000];
int index;

void push(char ch)
{
    Stack[++index] = ch;
}

void pop()
{
    index--;
}

bool isEmpty()
{
    if(index > 0)
        return false;
    else
        return true;
}

char top()
{
    return input[index];
}

bool verify(char input[])
{
    index = 0;
    for(int i = 0; input[i] != '\0'; i++)
    {
        if(input[i] == '[' || input[i] == '{' || input[i] == '(')
            push(input[i]);

        if(input[i] == ']')
        {
            if(isEmpty() || Stack[index] != '[')
                return false;
            else
                pop();
        }

        if(input[i]=='}')
        {
            if(isEmpty() || Stack[index] != '{')
                return false;
            else
                pop();
        }

        if(input[i]==')')
        {
            if(isEmpty() || Stack[index] != '(')
                return false;
            else
                pop();
        }
    }

    if (isEmpty())
        return true;
    else
        return false;
}

int main()
{
    cin>>input;

    cout<<verify(input);

    return 0;
}
