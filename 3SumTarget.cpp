// Created by Rohan Tatikonda on 5/21/23.
#include <vector>
#include "3SumTarget.h"
#include <iostream>

using namespace std;

int ThreeSumCloset::threeSumClosest(std::vector<int> &nums, int target) { //solution simply checks all combinations of the sum of 3 numbers and difference from it to the target, saves the closest.
	int biggest = INT16_MIN;
	int smallest = INT_MAX;
	int sum = 0;
	int currentDistance = INT_MAX;
	//gives us both the smallest and biggest numbers is the set
	for(int i = 0; i < nums.size(); ++i){
		if(nums[i] > biggest){
			biggest = nums[i];
		}
		if(nums[i] < smallest){
			smallest = nums[i];
		}
	}
	if(target > biggest  && nums.size() >= 300){
		std::remove(nums.begin(), nums.end(),biggest);
		nums.resize(nums.size()-1);
		for (int i = 0; i < nums.size() - 1; ++i) {
			for (int j = i + 1; j < nums.size() ; ++j) {
				if (abs(biggest + nums[i] + nums[j] - target) < currentDistance) {
					currentDistance = abs(biggest + nums[i] + nums[j] - target);
					sum = nums[i] + nums[j] + biggest;
				}
			}
		}
		return sum;
	} // issue is that size isn't changed when I delete from vector.
	else if(target < smallest && nums.size() >= 300){
		std::remove(nums.begin(), nums.end(),smallest);
		nums.resize(nums.size()-1);
		for (int i = 0; i < nums.size() - 1; ++i) {
			for (int j = i + 1; j < nums.size() ; ++j) {
				if (abs(smallest + nums[i] + nums[j] - target) < currentDistance) {
					currentDistance = abs(smallest + nums[i] + nums[j] - target);
					sum = nums[i] + nums[j] + smallest;
				}
			}
		}
		return sum;
	}
	else {
		for (int i = 0; i < nums.size() - 2; ++i) {
			for (int j = i + 1; j < nums.size() - 1; ++j) {
				for (int k = j + 1; k < nums.size(); ++k) {
					if (abs(nums[i] + nums[j] + nums[k] - target) < currentDistance) {
						currentDistance = abs(nums[i] + nums[j] + nums[k] - target);
						sum = nums[i] + nums[j] + nums[k];
					}
				}
			}
		}
		return sum;
	}
}