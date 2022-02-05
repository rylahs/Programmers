// Programmers Level 1. 시저 암호
// https://programmers.co.kr/learn/courses/30/lessons/12926

#include <bits/stdc++.h>
using namespace std;

string solution(string s, int n) {
	string answer = "";
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (s[i] + n > 'z')
				answer += s[i] + n - 26;
			else
				answer += s[i] + n;
		}
		else if (s[i] >= 'A' && s[i] <= 'Z')
		{
			if (s[i] + n > 'Z')
				answer += s[i] + n - 26;
			else
				answer += s[i] + n;
		}
		else
			answer += s[i];
	}
	
	return answer;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	string s;
	int n;
	getline(cin, s);
	cin >> n;
	cout << solution(s, n) << '\n';
	return 0;
}