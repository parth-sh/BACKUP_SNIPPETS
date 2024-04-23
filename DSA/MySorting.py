from typing import List


class MySorting:
    def __init__(self) -> None:
        pass

    def selectionSort(self, nums):
        n = len(nums)
        for i in range(0, n):
            min_idx = i
            for j in range(i + 1, n):
                if nums[j] < nums[min_idx]:
                    min_idx = j
            if min_idx != i:
                nums[i], nums[min_idx] = nums[min_idx], nums[i]

    def bubbleSort(self, nums):
        n = len(nums)
        for i in range(0, n - 1):
            for j in range(0, n - i - 1):
                if nums[j] > nums[j + 1]:
                    nums[j], nums[j + 1] = nums[j + 1], nums[j]

    def optimizedBubbleSort(self, nums):
        n = len(nums)
        for i in range(0, n - 1):
            flag = True
            for j in range(0, n - i - 1):
                if nums[j] > nums[j + 1]:
                    flag = False
                    nums[j], nums[j + 1] = nums[j + 1], nums[j]
            if flag:
                break

    def inserttionSort(self, nums):
        n = len(nums)
        for i in range(0, n):
            j = i
            while j > 0 and nums[j - 1] > nums[j]:
                nums[j - 1], nums[j] = nums[j], nums[j - 1]
                j -= 1

    def __merge(self, nums: List[int], left: int, mid: int, right: int):
        n = right - left + 1
        mergedArr = [0] * n
        pt1, pt2, j = left, mid + 1, 0
        while pt1 <= mid and pt2 <= right and j < n:
            if nums[pt1] <= nums[pt2]:
                mergedArr[j] = nums[pt1]
                j += 1
                pt1 += 1
            else:
                mergedArr[j] = nums[pt2]
                j += 1
                pt2 += 1
        while pt1 <= mid and j < n:
            mergedArr[j] = nums[pt1]
            j += 1
            pt1 += 1
        while pt2 <= right and j < n:
            mergedArr[j] = nums[pt2]
            j += 1
            pt2 += 1
        nums[left : right + 1] = mergedArr

    def mergeSort(self, nums: List[int], left: int, right: int):
        if left >= right:
            return
        mid = (right + left) // 2
        self.mergeSort(nums, left, mid)
        self.mergeSort(nums, mid + 1, right)
        self.__merge(nums, left, mid, right)

    def __partition(self, nums: List[int], low: int, high: int) -> int:
        pivot = nums[low]
        start = low
        end = high
        while start < end:
            while nums[start] <= pivot and start <= high - 1:
                start += 1
            while nums[end] > pivot and end >= low + 1:
                end -= 1
            if start < end:
                nums[start], nums[end] = nums[end], nums[start]
        nums[end], nums[low] = nums[low], nums[end]
        return end

    def quickSort(self, nums: List[int], low: int, high: int):
        if low >= high:
            return
        pivot = self.__partition(nums, low, high)
        self.quickSort(nums, low, pivot - 1)
        self.quickSort(nums, pivot + 1, high)


x = MySorting()

# nums = [5, 4, 3, 2, 1]
# x.selectionSort(nums)
# print(nums)

# nums = [5, 4, 3, 2, 1]
# x.bubbleSort(nums)
# print(nums)

# nums = [5, 4, 3, 2, 1]
# x.optimizedBubbleSort(nums)
# print(nums)

# nums = [5, 4, 3, 2, 1]
# x.inserttionSort(nums)
# print(nums)

# nums = [5, 4, 3, 2, 1]
# x.mergeSort(nums, 0, len(nums) - 1)
# print(nums)

nums = [5, 4, 3, 2, 1]
x.quickSort(nums, 0, len(nums) - 1)
print(nums)
