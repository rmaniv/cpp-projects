#include <bits/stdc++.h>
using namespace std;

ifstream f("data.in");
ofstream g("data.out");

int reverse(int n)
{
	int rev = 0;

	while(n!=0)
	{
		rev = rev*10 + (n%10);
		n/=10;
	}

	return rev;
}

int main() {

	int N; f >> N;

	for(int t=0; t<N; t++)
	{
		int a, b; f >> a >> b;

		a = reverse(a); b = reverse(b);
		g << endl << reverse(a+b);
	}

	return 0;
}
