// Programmers Level 1. 직사각형 별찍기 
// https://programmers.co.kr/learn/courses/30/lessons/12969
 
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << '*';
		cout << '\n';
	}
	return 0;
}
