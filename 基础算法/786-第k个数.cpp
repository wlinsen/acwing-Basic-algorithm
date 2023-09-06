#include <iostream>
using namespace std;
const int N = 100010;
int n,k;
int  a[N];
int quick_sort(int l, int r, int k)
{
	if(l == r) return a[l];
	int i = l -1, j = r + 1, x = a[i + j >> 1];
	while(i < j)
	{
		do i++; while(a[i] < x);
		do j--; while(a[j] > x);
		if(i <j) swap(a[i], a[j]);
	}
	if(j - l + 1 >= k) return quick_sort(l, j, k);
	else return quick_sort(j+ 1, r, k -(j - l + 1));
}

int main()
{
	scanf("%d%d", &n, &k);
	for(int i = 0; i< n; i++)
		scanf("%d", &a[i]);
	printf("%d",quick_sort(0, n -1, k));
	
	return 0;
}
