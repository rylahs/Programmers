// Programmers Level 1. 2016³â
// https://programmers.co.kr/learn/courses/30/lessons/12901

#include <bits/stdc++.h>
using namespace std;
string solution(int a, int b) {
	string answer = "";
	string date[7] = { "THU", "FRI", "SAT", "SUN", "MON", "TUE", "WED" };
	int arr[13]{ 0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int term = 0;
	for (int i = 1; i < a; i++)
		term += arr[i];
	term = (term + b) % 7;

	answer = date[term];
	return answer;
}
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int month, date;
	month = 5;
	date = 24;
	cout << solution(month, date) << "\n";
	return 0;
}