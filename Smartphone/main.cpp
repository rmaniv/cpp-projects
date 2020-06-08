//https://www.codechef.com/ZCOPRAC/problems/ZCO14003

#include <bits/stdc++.h>
using namespace std;

ifstream f("data.in");
ofstream g("data.out");

int main() {

    int c;
    f >> c;

    //accepting budgets from customers

    long int cbudget[5000];

    for (int n = 0; n < c; n++)
        f >> cbudget[n];

    long int revenue[5000];

    //finding all possible revenues

    for (int i = 0; i < c; i++)
    {
        revenue[i] = 0;

        for (int j = 0; j < c; j++)
        {
            if (cbudget[j] >= cbudget[i])
                revenue[i] += cbudget[i];
        }
    }

    //finding maximum revenue

    for(int k = 1; k < c; ++k)
    {
       if(revenue[0] < revenue[k])
           revenue[0] = revenue[k];
    }

    g << endl << revenue[0];

	return 0;
}
