#include <bits/stdc++.h>
using namespace std;

ifstream f("data.in");
ofstream g("data.out");

int main() {

	int N; f >> N;

	for (int t=0; t<N; t++)
	{

	    int m,n; f >> m >> n;

	    bool prime[n+1];
	    memset(prime, true, sizeof(prime));

	    int i;

	    for(int p=2; p*p<=n; p++)
	    {
	        if (prime[p] == true)
	        {
	            for(i=p*p; i<=n; i+=p)
	            {
	                prime[i] = false;
	            }
	        }
	    }

	    if(m==1)
	    {
	        m++;
	    }

	    for(int p=m; p<=n; p++)
	    {
	        if(prime[p])
	        {
	            g << endl << p;
	        }
	    }

	    g << endl;
	}

	return 0;
}
