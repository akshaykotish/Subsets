#include<iostream>
#include<string.h>
using namespace std;

void PowerSet(string s, int i, int n, string current)
{
	if(i != n)
	{
		cout<<current<<endl;
		for(int a=i+1; a<n; a++)
		{
			current = current + s[a];
			cout<<" => i = "<<i<<" a = "<<a<<endl;
			PowerSet(s, a, n, current);
			
			current = current.substr(0, current.length() - 1);
			cout<<" <= i = "<<i<<" a = "<<a<<endl;
		}
	}
	else{
		return;
	}
}

int main()
{
	PowerSet("1234", -1, 4, "");
}
