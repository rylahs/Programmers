// Programmers Level 1. 서울에서 김서방 찾기
// https://programmers.co.kr/learn/courses/30/lessons/12921

#include <bits/stdc++.h>
using namespace std;

string first_solution(vector<string> seoul) {
	string answer = "";
	for (int i = 0; i < seoul.size(); i++)
	{
		if (seoul[i] == "Kim")
		{
			answer += "김서방은 " + to_string(i) + "에 있다";
			break;
		}
	}
	return answer;
}

string solution(vector<string> seoul) {
	string answer = "";
	answer += "김서방은 " + to_string(find(seoul.begin(), seoul.end(), "Kim") - seoul.begin()) + "에 있다";

	return answer;
}


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	vector<string> seoul;
	seoul.emplace_back("Jane");
	seoul.emplace_back("Kim");

	cout << solution(seoul) << '\n';


	return 0;
}