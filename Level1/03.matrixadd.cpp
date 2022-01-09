// Programmers Level 1. Çà·ÄÀÇ µ¡¼À
// https://programmers.co.kr/learn/courses/30/lessons/12950
 
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2)
{
	vector<vector<int>> answer;
	vector<int> ans;
	for (int i = 0; i < arr1.size(); i++)
	{
		ans.clear();
		for (int j = 0; j < arr1[i].size(); j++)
			ans.emplace_back(arr1[i][j] + arr2[i][j]);

		answer.emplace_back(ans);
	}
	return answer;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	vector<vector<int>> arr1;
	vector<vector<int>> arr2;
	vector<int> arrinput;
	arrinput.clear();
	arrinput.emplace_back(1);
	arrinput.emplace_back(2);
	arr1.emplace_back(arrinput);

	arrinput.clear();
	arrinput.emplace_back(2);
	arrinput.emplace_back(3);
	arr1.emplace_back(arrinput);

	arrinput.clear();
	arrinput.emplace_back(3);
	arrinput.emplace_back(4);
	arr2.emplace_back(arrinput);
	arrinput.clear();
	arrinput.emplace_back(5);
	arrinput.emplace_back(6);
	arr2.emplace_back(arrinput);

	vector<vector<int>> v;
	v = solution(arr1, arr2);

	for (auto e : v)
	{
		for (auto f : e)
		{
			cout << f << ' ';
		}
		cout << '\n';
	}

	return 0;
}
