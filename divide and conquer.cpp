#include <stdio.h>
struct MaxMin {
    int max;
    int min;
};
struct MaxMin findMaxMin(int arr[], int low, int high) {
    struct MaxMin result, leftResult, rightResult;
    int mid;
    if (low == high) {
        result.max = arr[low];
        result.min = arr[low];
        return result;
    }
    if (high == low + 1) {
        if (arr[low] > arr[high]) {
            result.max = arr[low];
            result.min = arr[high];
        } else {
            result.max = arr[high];
            result.min = arr[low];
        }
        return result;
    }
    mid = (low + high) / 2;
    leftResult = findMaxMin(arr, low, mid);
    rightResult = findMaxMin(arr, mid + 1, high);
    if (leftResult.max > rightResult.max)
        result.max = leftResult.max;
    else
        result.max = rightResult.max;

    if (leftResult.min < rightResult.min)
        result.min = leftResult.min;
    else
        result.min = rightResult.min;

    return result;
}
int main() {
    int arr[] = {3, 6, 1, 8, 10, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
	struct MaxMin result = findMaxMin(arr, 0, n - 1);
	printf("Maximum element in the array: %d\n", result.max);
    printf("Minimum element in the array: %d\n", result.min);
}

