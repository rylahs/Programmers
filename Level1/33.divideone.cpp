// Programmers Level 1. 나머지가 1이 되는 수 찾기
// https://programmers.co.kr/learn/courses/30/lessons/87389

#include <bits/stdc++.h>
using namespace std;

int solution(int n) {
	int x = 1;
	for (int i = 1; i < n; i++)
	{
		if (n % i == 1)
		{
			x = i;
			break;
		}
	}
	return x;
}
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	cout << solution(n) << "\n";
	return 0;
}