#include <iostream>
using namespace std;
typedef long long LL;
const int N = 100010;
int a[N], temp[N];
int n;
LL merge_sort(int l, int r)
{
	if(l >= r) return 0;
	int mid = l + r >> 1;
	LL ans = merge_sort(l, mid) + merge_sort(mid + 1, r);
	int i = l, j = mid + 1;
	int k =0;
	
	while(i <= mid && j <= r)
	{
		if(a[i] <= a[j]) temp[k++] = a[i++];
		else
		{
			temp[k++] = a[j++];
			ans += mid - i + 1;
		}
	}
	while(i <= mid) temp[k++] = a[i++];
	while(j <= r) temp[k++] = a[j++];
	for(int i =l, j = 0; i<= r; i++, j++) a[i] = temp[j]; 
	return ans;
}
int main()
{
	scanf("%d", &n);
	for(int i =0 ; i< n; i++) scanf("%d", &a[i]);
	LL ans = merge_sort(0, n-1);
	printf("%lld", ans);
	
}
