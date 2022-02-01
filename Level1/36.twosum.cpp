// Programmers Level 1. 두 개 뽑아서 더하기
// https://programmers.co.kr/learn/courses/30/lessons/68644

#include <bits/stdc++.h>
using namespace std;
vector<int> solution(vector<int> numbers) {
	vector<int> answer;
	set<int> sum;
	for (int i = 0; i < numbers.size(); i++)
	{
		for (int j = 0; j < numbers.size(); j++)
		{
			if (i == j)
				continue;
			sum.insert(numbers[i] + numbers[j]);
		}
	}

	/*for (auto& e : sum)
		answer.emplace_back(e);*/
	
	answer.assign(sum.begin(), sum.end());
	return answer;
}
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	vector<int> numbers = { 2,1,3,4,1 };
	vector<int> result;
	result = solution(numbers);
	for (auto& e : result)
		cout << e << " ";

	return 0;
}