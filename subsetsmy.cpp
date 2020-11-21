#include<iostream>
using namespace std;

void Andy(int arr[], int N, int I, int out)
{
	if(I == N)
	{
		return;
	}
	else{
		cout<<out<<endl;
		for(int i=I+1; i<N; i++)
		{
			out = out * 10 + arr[i];
			Andy(arr, N, i, out);
			out = out/10;
		}
	}
}

int main()
{
	int N = 4;
	int arr[N] = {1,2,3,4};
	Andy(arr, N, -1, 0);
}
