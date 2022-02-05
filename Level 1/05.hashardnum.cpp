// Programmers Level 1. ÇÏ»þµå ¼ö
// https://programmers.co.kr/learn/courses/30/lessons/12947

#include <bits/stdc++.h>
using namespace std;

bool solution(int x) {
	int num = 0;
	int copyX = x;

	while (copyX > 0)
	{
		num += copyX % 10;
		copyX /= 10;
	}

	if (x % num == 0)
		return true;
	else 
		return false;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int x;
	cin >> x;

	bool isHashard = solution(x);
	cout << isHashard << '\n';
	return 0;
}