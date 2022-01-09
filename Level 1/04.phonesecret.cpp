// Programmers Level 1. 핸드폰 번호 가리기
// https://programmers.co.kr/learn/courses/30/lessons/12948
 
#include <bits/stdc++.h>
using namespace std;

string solution(string phone_number) {
	string answer = "";
	for (int i = 0; i < phone_number.size() - 4; i++)
	{
		answer += '*';
	}
	answer.append(phone_number.end() - 4, phone_number.end());
	return answer;
}
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	string phone_number = "027778888";

	string answer = solution(phone_number);
	
	cout << answer << '\n';

	return 0;
}
