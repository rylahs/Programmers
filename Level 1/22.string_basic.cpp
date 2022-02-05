// Programmers Level 1. 문자열 다루기 기본
// https://programmers.co.kr/learn/courses/30/lessons/12918

#include <bits/stdc++.h>
using namespace std;

bool first_solution(string s) {
	bool answer = true;
	if (s.size() != 4 && s.size() != 6)
		return false;
	for (int i = 0; i < s.size(); i++)
		if (s[i] < '0' || s[i] > '9')
			return false;
	return answer;
}

bool solution(string s) {
	bool answer = true;
	if (s.size() == 4 || s.size() == 6)
	{
		for (int i = 0; i < s.size(); i++)
			if (!isdigit(s[i]))
				return false;

		return true;
	}
	else
		return false;
	
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string s = "a234";
	string s1 = "1234";

	cout << solution(s) << '\n';
	cout << solution(s1) << '\n';
	return 0;
}