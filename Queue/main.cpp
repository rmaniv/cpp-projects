#include <bits/stdc++.h>

using namespace std;

int Queue[32000];
int backInd = -1;
int frontInd = 0;

void push(int n)
{
    Queue[++backInd] = n;
}

void pop()
{
    Queue[frontInd] = 0;
    frontInd++;
}

bool isEmpty()
{
    if (frontInd > backInd)
        return true;
    else
        return false;
}

int Front()
{
    return Queue[frontInd];
}

int main()
{
    int o, n;
    cout << "1. Push 2. Pop 3. Emptiness 4. Front 5. Exit \n";

    do
    {
        cin >> o;

        if(o == 1)
        {
            cin >> n;
            push(n);
            cout << endl;
        }

        else if(o == 2)
        {
            pop();
            cout << endl;
        }

        else if(o == 3)
            cout << isEmpty() << endl;

        else if(o == 4)
            cout << Front() << endl;

        else if(o == 5)
            cout << endl << "Bye!";

        else
            cout << endl << "Incorrect Input, please choose one of {1,2,3,4}";
    } while(o != 5);

    return 0;
}
