#include <stdlib.h>
#include <stdio.h>

/*
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target) {
	int i, j, prev_index = 0;
	int *sol = (int *)malloc(sizeof(int)*2);

	for (i=prev_index; i<numsSize; i++) {
		for (j=prev_index+1; j<numsSize; j++) {
			if (nums[i] + nums[j] == target) {
				sol[0] = i;
				sol[1] = j;
				return sol;
			}
		}
		prev_index++;
	}
	printf("There is no solution\n");
	return sol;
}

int main(void) {
	int nums[] = {2, 7, 11, 15};
	int target = 9;
	int count = sizeof(nums) / sizeof(int);
	int *solution;

	solution = twoSum(nums, count, target);
	printf("solution = %d, %d\n", *solution, *(solution + 1));
	free(solution);
	return 0;
}
