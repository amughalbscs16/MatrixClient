#include<iostream>
#include<vector>

using namespace std;


void transpose(vector<vector<int>> &vec){

	int size = vec.size();
	cout << "Original Matrix";
	int k = 1;
	for (int i = 0; i < vec.size(); i++){
		for (int j = 0; j <size; j++){
			vec[j].push_back(k);
			k++;
		}
	}
	cout << endl;

	for (int i = 0; i < vec.size(); i++){
		for (int j = 0; j <vec[i].size(); j++){
			cout << vec[i][j]<<"	";
		}
		cout << endl;
	}

	vector<vector<int>> result;
	if (vec.size() == 0)
		return;

	vector<vector<int> > trans_vec(vec[0].size(), vector<int>());

	for (int i = 0; i < vec.size(); i++)
	{
		for (int j = 0; j < vec[i].size(); j++)
		{
			trans_vec[j].push_back(vec[i][j]);
		}
	}

	vec = trans_vec;

	cout << "Transposed Matrix"<< endl;
	
	for (int i = 0; i < vec.size(); i++){
		for (int j = 0; j <vec[i].size(); j++){
			cout << vec[i][j] << "	";
		}
		cout << endl;
	}

}

int main(){

	vector<vector<int>> matrix(4);
	transpose(matrix);

	system("pause");
	return 0;
}
