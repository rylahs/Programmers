// Programmers Level 1. ���￡�� �輭�� ã��
// https://programmers.co.kr/learn/courses/30/lessons/12921

#include <bits/stdc++.h>
using namespace std;

string first_solution(vector<string> seoul) {
	string answer = "";
	for (int i = 0; i < seoul.size(); i++)
	{
		if (seoul[i] == "Kim")
		{
			answer += "�輭���� " + to_string(i) + "�� �ִ�";
			break;
		}
	}
	return answer;
}

string solution(vector<string> seoul) {
	string answer = "";
	answer += "�輭���� " + to_string(find(seoul.begin(), seoul.end(), "Kim") - seoul.begin()) + "�� �ִ�";

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