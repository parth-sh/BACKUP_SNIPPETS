def find_peak_element(nums):
    n = len(nums)
    
    if n == 1:
        return 0
    if nums[0] > nums[1]:
        return 0
    if nums[n-2] < nums[n-1]:
        return n-1
    
    lo, hi = 1, n-2
    while lo <= hi:
        mid = (lo + hi) // 2
        if nums[mid - 1] < nums[mid] and nums[mid] > nums[mid + 1]:
            return mid
        elif nums[mid] < nums[mid + 1]:
            lo = mid + 1
        else:  # nums[mid - 1] > nums[mid]
            hi = mid - 1
    return -1

heights = list(map(int, input().split()))
print(find_peak_element(heights))