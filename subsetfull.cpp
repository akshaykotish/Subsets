#include<iostream>
using namespace std;

int N = 3;
int to_print[4] = {0, 0, 0};
int p_index = 0;

void Display()
{
	cout<<"{";
	for(int i=0; i<p_index; i++)
	{
		cout<<to_print[i];
		if(i != p_index-1)
		{
			cout<<",";
		}
	}
	cout<<"}";
	cout<<" ";
}

void Process(int arr[], int indx)
{
	if(indx == N)
	{
		return;
	}
	else{
		Display();
		for(int i=indx+1; i<N; i++)
		{
			to_print[p_index] = arr[i];
			if(p_index <4)
			{
				p_index++;
			}
			Process(arr, i);
			if(p_index>0)
			{
				p_index--;
			}
			to_print[p_index] = 0;
			
		}
	}
}


int main()
{
	int arr[N] = {1,2,3};
	Process(arr, -1);
}
