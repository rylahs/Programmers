// Programmers Level 1. 문자열 내 p와 y의 개수
// https://programmers.co.kr/learn/courses/30/lessons/12916

#include <bits/stdc++.h>
using namespace std;

bool solution(string s)
{
	int pCount = 0, yCount = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == 'p' || s[i] == 'P')
			pCount++;
		if (s[i] == 'y' || s[i] == 'Y')
			yCount++;
	}

	return (pCount == yCount);
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string s = "pPoooyY";
	string s1 = "Pyy";

	cout << solution(s) << '\n';
	cout << solution(s1) << '\n';
	return 0;
}