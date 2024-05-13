#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

class MySorting {
   private:
    void merge(vector<int> &arr, int low, int mid, int high) {
        const int n = high - low + 1;
        int *temp = new int[n];
        int pt1 = low, pt2 = mid + 1, j = 0;
        while (pt1 <= mid && pt2 <= high && j < n) {
            if (arr[pt1] < arr[pt2]) {
                temp[j++] = arr[pt1++];
            } else {
                temp[j++] = arr[pt2++];
            }
        }
        while (pt1 <= mid && j < n) {
            temp[j++] = arr[pt1++];
        }
        while (pt2 <= high && j < n) {
            temp[j++] = arr[pt2++];
        }
        j = 0;
        for (int i = low; i <= high; i++) {
            arr[i] = temp[j++];
        }
    }

    int partition(vector<int> &arr, int low, int high) {
        int pivotEle = arr[low];
        int start = low, end = high;
        while (start < end) {
            while (start <= high - 1 && arr[start] <= pivotEle) {
                start++;
            }
            while (end >= low + 1 && arr[end] > pivotEle) {
                end--;
            }
            if (start < end) {
                swap(arr[start], arr[end]);
            }
        }
        swap(arr[low], arr[end]);
        return end;
    }

   public:
    void selectionSort(vector<int> &arr) {
        int n = arr.size();
        for (int i = 0; i < n; i++) {
            int min_idx = i;
            for (int j = i + 1; j < n; j++) {
                if (arr[j] < arr[min_idx]) {
                    min_idx = j;
                }
            }
            if (min_idx != i) {
                swap(arr[i], arr[min_idx]);
            }
        }
    }

    void bubbleSort(vector<int> &arr) {
        int n = arr.size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    swap(arr[j], arr[j + 1]);
                }
            }
        }
    }

    void optimizedBubbleSort(vector<int> &arr) {
        int n = arr.size();
        for (int i = 0; i < n; i++) {
            bool check = true;
            for (int j = 0; j < n - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    check = false;
                    swap(arr[j], arr[j + 1]);
                }
            }
            if (check) {
                break;
            }
        }
    }

    void insertionSort(vector<int> &arr) {
        int n = arr.size();
        for (int i = 0; i < n; i++) {
            int j = i;
            while (j > 0 && arr[j] < arr[j - 1]) {
                swap(arr[j], arr[j - 1]);
                j--;
            }
        }
    }

    void mergeSort(vector<int> &arr, int low, int high) {
        if (low >= high) {
            return;
        }
        int mid = (low + high) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }

    void quickSort(vector<int> &nums, int low, int high) {
        if (low >= high) {
            return;
        }
        int pivot = partition(nums, low, high);
        quickSort(nums, low, pivot - 1);
        quickSort(nums, pivot + 1, high);
    }

    void cyclicSort(vector<int> &nums) {
        int n = nums.size();
        int i = 0;
        while (i < n) {
            if (nums[i] - 1 == i) {
                i++;
            } else {
                swap(nums[i], nums[nums[i] - 1]);
            }
        }
    }

    // 268. Missing Number,
    // https://leetcode.com/problems/missing-number/submissions/1257064517/
    // 448. Find All Numbers Disappeared in an Array
    // https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/submissions/1257074682/
    // 287. Find the Duplicate Number
    // https://leetcode.com/problems/find-the-duplicate-number/submissions/1257230928/
    // 442. Find All Duplicates in an Array
    // https://leetcode.com/problems/find-all-duplicates-in-an-array/submissions/1257234180/
    // 645. Set Mismatch
    // 41. First Missing Positive
    // https://leetcode.com/problems/first-missing-positive/submissions/1257257377/
};

void printArr(vector<int> &nums) {
    int n = nums.size();
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " - ";
    }
}

int main() {
    MySorting sort;

    vector<int> nums = {5, 4, 3, 2, 1};
    // sort.selectionSort(nums);

    // sort.bubbleSort(nums);

    // sort.optimizedBubbleSort(nums);

    // sort.insertionSort(nums);

    // sort.mergeSort(nums, 0, nums.size() - 1);

    // sort.quickSort(nums, 0, nums.size() - 1);

    sort.cyclicSort(nums);

    printArr(nums);
    return 0;
}
