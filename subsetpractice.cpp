#include<iostream>
using namespace std;

const int N = 4;
int arr[N] = {1,2,3,4};
int subsets[N] = {0,0,0,0};
int S_index = 0;

void Display()
{
	cout<<"{";
	for(int i=0; i<S_index; i++)
	{
		cout<<subsets[i];
		if(i!=S_index-1)
		{
			cout<<",";
		}
	}
	cout<<"}"<<endl;
}

void Sets(int indx)
{
	if(indx != N)
	{
		Display();
		for(int i=indx+1; i<N; i++)
		{
			subsets[S_index] = arr[i];
			if(S_index < N)
			{
				S_index++;
			}
			Sets(i);
			if(S_index > 0)
			{
				S_index--;
			}
			subsets[S_index] = 0;
		}
	}
}

int main()
{
	Sets(-1);
}
