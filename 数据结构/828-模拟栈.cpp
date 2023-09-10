#include <iostream>
using namespace std;

const int N= 100010;

int stk[N], tt; 

int main()
{
	int n,x;
	cin >> n;
	while(n --)
	{
		string op;
		cin >> op;
		if(op == "push")
		{
			cin >> x;
			stk[++ tt] = x;
		}
		else if(op == "pop") tt--;
		else if(op == "empty") cout << (tt?"NO":"YES")<< endl;
		else cout << stk[tt] <<endl; 
	}
	
	return 0;
}
