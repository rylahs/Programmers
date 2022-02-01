// Programmers Level 1. 가운데 글자 가져오기
// https://programmers.co.kr/learn/courses/30/lessons/12903

#include <bits/stdc++.h>
using namespace std;

string solution(string s) {
	string answer = "";
	int middle;
	if (s.size() % 2 == 1)
	{
		middle = s.size() / 2;
		answer += s[middle];
	}
	else
	{
		middle = s.size() / 2;
		answer += s.substr(middle -1 , 2);
	}
	
	
	return answer;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string s = "abcde";
	string s1 = "qwer";
	cout << solution(s) << '\n';
	cout << solution(s1) << '\n';
	return 0;
}