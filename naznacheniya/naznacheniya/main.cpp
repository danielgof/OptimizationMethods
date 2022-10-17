#include <iostream>
#include <vector>
using namespace std;

//Cmin = 7 + 2 + 6 = 15
//Путь: (3; 1), (1; 2), (2; 3)

void deleteMinRow(vector<vector<int>>&);
void deleteMinCol(vector<vector<int>>&);


int main() 
{
	setlocale(LC_ALL, "ru");
	vector<vector<int>> matrix
	{
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};
	
	cout << "matrix by row" << endl;
	for (int i = 0; i < matrix.size(); i++)
	{
		for (int j = 0; j < matrix[i].size(); j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	
	cout << "matrix by column" << endl;
	for (int j = 0; j < matrix[0].size(); j++)
	{
		for (int i = 0; i < matrix.size(); i++)
		{
			cout << matrix[i][j];
		}
		cout << endl;
	}

	cout << "first iter row" << endl;
	deleteMinRow(matrix);
	cout << "second iter row" << endl;
	deleteMinRow(matrix);
	cout << "first iter col" << endl;
	deleteMinCol(matrix);

	return 0;
}

void deleteMinRow(vector<vector<int>> &matrix)
{
	int min = 1;
	for (int i = 0; i < matrix.size(); i++)
	{
		for (int j = 0; j < matrix[i].size(); j++)
		{
			cout << matrix[i][j] - min << " ";
		}
		cout << endl;
	}
}

void deleteMinCol(vector<vector<int>> &matrix)
{
	int min = 1;
	for (int j = 0; j < matrix[0].size(); j++)
	{
		for (int i = 0; i < matrix.size(); i++)
		{
			cout << matrix[i][j] - min << " ";
		}
		cout << endl;
	}
}
