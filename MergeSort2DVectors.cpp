/*
Name:			Matthew Wilson
Course:			CSCE 2110.002
Date:			12/4/21
Description:	Exam 4 question 6
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<vector<int>> arr = {{10, 20, 30, 40}, {15, 25, 35}, {27, 29, 37, 48, 93}, {32, 33}};//input
	
	vector<int> v;//merged input
	
	for(int i = 0; i < 4; i++)
	{
		for(int j = 0; j < arr[i].size(); j++)
		{
			v.push_back(arr[i][j]);//merging input
		}
	}
	
	sort(v.begin(), v.end());//sorting input
	
//	output: 
	cout << "[";
	
	for(int i = 0; i < v.size(); i++)
	{
		if(i == v.size() - 1)
		{
			cout << v[i];
		}
		
		else
		{
			cout << v[i] << ", ";
		}
	}
	
	cout << "]" << endl;
	
	return 0;
}