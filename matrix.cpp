#include <iostream>
#include <sstream>
using namespace std;

bool read_numbers(int matrix[3][3])
{
	bool success = true;
	for (int i = 0; i < 3; ++i)
	{
		string string;
		getline(cin, string);
		istringstream stream(string);
		for (int j = 0; j < 3; ++j)
		{
			if (!(stream >> matrix[i][j]))
			{
				success = false;
				break;
			}
		}
		if (!(success))
		{
			break;
		}
	}

	return success;
}

int main()
{
	int mtx1[3][3];
	int mtx2[3][3];
	string op;
	if (read_numbers(mtx1))
	{
		getline(cin, op);
		if (op == "+")
		{
			if (read_numbers(mtx2))
			{
				cout << endl;
				for (int i = 0; i < 3; ++i)
				{
					for (int j = 0; j < 3; ++j)
					{
						cout << mtx1[i][j] + mtx2[i][j] << " ";
					}
					cout << endl;
				}
			}
			else
			{
				cout << "Error has been found while program was running  \n";
				return -1;
			}
		}
		else if (op == "-")
		{
			if (read_numbers(mtx2))
			{
				cout << endl;
				for (int i = 0; i < 3; ++i)
				{
					for (int j = 0; j < 3; ++j)
					{
						cout << mtx1[i][j] - mtx2[i][j] << " ";
					}
					cout << endl;
				}
			}
			else
			{
				cout << "Error has been found while program was running  \n";
				return -1;
			}
		}
		else if (op == "*")
		{
			if (read_numbers(mtx2))
			{
				cout << endl;
				for (int i = 0; i < 3; ++i)
				{
					for (int j = 0; j < 3; ++j)
					{
						int result = 0;
						for (int k = 0; k < 3; ++k)
						{
							result += mtx1[i][k] * mtx2[k][j];
						}
						cout << result << " ";
					}
					cout << endl;
				}
			}
			else
			{
				cout << "Error has been found while program was running  \n";
				return -1;
			}
		}
		else
		{
			cout << "Error has been found while program was running  \n";
			return -1;
		}
	}
	else
	{
		cout << "Error has been found while program was running  \n";
		return -1;
	}
	return 0;
}
