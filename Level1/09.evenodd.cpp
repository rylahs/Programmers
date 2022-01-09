// Programmers Level 1. Â¦¼ö¿Í È¦¼ö
// https://programmers.co.kr/learn/courses/30/lessons/12937

#include <bits/stdc++.h>
using namespace std;

string solution(int num) {
	string answer = "";

	if (num % 2)
		answer += "Odd";
	else
		answer += "Even";
	return answer;
}
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	string str = solution(n);
	cout << "\"" << str << "\"\n";


	return 0;
}