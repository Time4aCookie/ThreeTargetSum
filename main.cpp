// Created by Rohan Tatikonda on 5/21/23.
#include "3SumTarget.h"
#include "iostream"

using namespace std;

int main(int argc, char* argv[]){
	ThreeSumCloset test;
	vector<int> integers{0,1,2};
	int k = test.optimalThreeSumCloset(integers, 0);
	cout << k << endl;

}
