// Programmers Level 1. 문자열 내 마음대로 정렬하기
// https://programmers.co.kr/learn/courses/30/lessons/12915

#include <bits/stdc++.h>
using namespace std;

int idx = 0;
bool compare(string& a, string& b) {
	if (a[idx] == b[idx])
		return a < b;
	return a[idx] < b[idx];
}


vector<string> solution(vector<string> strings, int n) {
	idx = n;
	sort(strings.begin(), strings.end(), compare);
	return strings;
}
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	vector<string> str;
	vector<string> str1;
	string s1 = "sun";
	string s2 = "bed";
	string s3 = "car";
	int n;
	cin >> n;
	str.emplace_back(s1);
	str.emplace_back(s2);
	str.emplace_back(s3);

	s1 = "abce";
	s2 = "abcd";
	s3 = "cdx";
	str1.emplace_back(s1);
	str1.emplace_back(s2);
	str1.emplace_back(s3);

	vector<string> result;
	result = solution(str1, n);
	for (auto e : result)
		cout << e << ' ';
	cout << '\n';
	return 0;
}