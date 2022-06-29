
#include<iostream>
using namespace std;
int MatrixChainOrder(int p[], int i, int j)
{
	if (i == j)
		return 0;
	int k;
	int min = INT_MAX;
	int count;
    for (k = i; k < j; k++)
	{
		count = MatrixChainOrder(p, i, k)
				+ MatrixChainOrder(p, k + 1, j)
				+ p[i - 1] * p[k] * p[j];

		if (count < min)
			min = count;
	}
	return min;
}
int main()
{
	int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    int a[n];
    cout<<"Enter the array:";
    for(int i=0;i<n;i++)
    cin>>a[i];
    cout<<"Minimum number of multiplications is "<<
		MatrixChainOrder(a, 1, n - 1)<<endl;
        return 0;
}
