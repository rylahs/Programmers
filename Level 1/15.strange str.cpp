// Programmers Level 1. 이상한 문자 만들기
// https://programmers.co.kr/learn/courses/30/lessons/12930

#include <bits/stdc++.h>
using namespace std;

string solution(string s) {
	string answer = "";
	int cnt = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == ' ')
		{
			cnt = 0;
			answer += s[i];
			continue;
		}
		if (cnt % 2 == 0)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
				answer += (s[i] - 32);
			else
				answer += s[i];
			cnt++;
		}
		else
		{
			if (s[i] >= 'A' && s[i] <= 'Z')
				answer += (s[i] + 32);
			else
				answer += s[i];
			cnt++;
		}
	}
	return answer;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	string str = "try hello world";
	cout << solution(str) << '\n';
	return 0;
}