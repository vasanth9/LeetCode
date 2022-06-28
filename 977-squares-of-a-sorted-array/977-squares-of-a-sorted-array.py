class Solution:
    def sortedSquares(self, nums: List[int]) -> List[int]:
        start = 0
        end = len(nums)-1
        result = [0]*(end+1)
        last = end
        while(start<=end):
            if(nums[start]*nums[start]>nums[end]*nums[end]):
                result[last]=nums[start]*nums[start]
                start=start+1
                last=last-1
            else:
                result[last]=nums[end]*nums[end]
                end=end-1
                last=last-1
        return result
        