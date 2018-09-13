#include <iostream>
#include <vector>
using namespace std;
vector<vector<double>> multiplication(vector<vector<double>> first, vector<vector<double>> second);
int main() {
	vector<vector<double>> first, second,result;
	for (int i = 0; i < 3; i++) {
		vector<double> tmp;
		vector<double> tmp1;
		first.push_back(tmp);
		second.push_back(tmp1);
		for (int j = 0; j < 3; j++)
		{
			first[i].push_back(j+1);
			second[i].push_back(j + 1);
		}

		
	}
	cout << "First Matrix: " << endl;
	for (int i = 0; i < 3; i++)
	{
		
		for (int j = 0; j < 3; j++)
			cout << first[i][j] << " ";
		cout << endl;
	}

	cout << "Second Matrix: " << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			cout << second[i][j] << " ";
		cout << endl;
	}
	result = multiplication(first, second);
	cout << "Result: " << endl;
	for (int i = 0; i < result.size(); i++)
	{
		for (int j = 0; j < result[0].size(); j++)
		{
			cout << result[i][j] << " ";
		}
		cout << endl;
	}
	getchar();
	getchar();
}
vector<vector<double>> multiplication(vector<vector<double>> first, vector<vector<double>> second)
{
	vector<vector<double>> result;
	//Pushing Zeroes In the start of result matrix;

	for (int i = 0; i < first.size(); i++)
	{
		vector<double> tmp;
		result.push_back(tmp);
		for (int j = 0; j < second[0].size(); j++)
		{
			result[i].push_back(0);
		}
	}
	//Multiplication Algorithm
	if (first[0].size() == second.size()) {
		for (int i = 0; i < first.size(); ++i)
			for (int j = 0; j < second[0].size(); ++j)
				for (int k = 0; k < first[0].size(); ++k)
				{
					result[i][j] += first[i][k] * second[k][j];
				}
	}
	return result;
	}
