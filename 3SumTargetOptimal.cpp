// Created by Rohan Tatikonda on 5/23/23.
#include "3SumTarget.h"
#include "iostream"
#pragma once

using namespace std;

int ThreeSumCloset::optimalThreeSumCloset(std::vector<int> &nums, int target) {
	sort(nums.begin(), nums.end());
	int difference = INT_MAX;
	int sum = INT_MAX;
	for(int i = 0; i < nums.size()-2 && sum != target; ++i){
		int low = i+1;
		int high = nums.size()-1;
		while(low < high){
			sum = nums[i]+nums[low]+nums[high];
			if(abs(sum-target) < abs(difference)){
				difference = sum-target;
			}
			if(sum < target){
				low++;
			}
			else high--;
		}
	}
	return target+difference;
}