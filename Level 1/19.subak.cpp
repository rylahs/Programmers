// Programmers Level 1. 수박수박수박수박수박수?
// https://programmers.co.kr/learn/courses/30/lessons/12922

#include <bits/stdc++.h>
using namespace std;

string solution(int n) {
	string answer = "";
	for (int i = 1; i <= n; i++)
	{
		if (i % 2)
			answer += "수";
		else
			answer += "박";
	}
	
	return answer;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	cout << solution(n) << '\n';
	
	return 0;
}