#include <iostream>
#include <vector>

using namespace std;

int solution(vector<int> a, int m, int k)
{
	int count1 , count = 0;
	for (int i = 0; i < a.size() - m; i++)
	{
		count1 = 0;
		for (int l = i; l < i + m - 1; l++)
		{
			for (int j = l + 1; j <= i + m - 1; j++)
			{
				if (a[l] + a[j] >= k)
				{
					count1++;
				}
			}
		}
		if (count1 != 0)
		{
			count++;
		}
	}
	return count;
}

int main()
{
	vector<int> a = { 2,3,3,3,4,3,2,1,2,4 };
	cout << solution(a, 2, 7);
}