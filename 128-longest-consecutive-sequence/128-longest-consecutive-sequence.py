class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        length = 0
        d=set(nums)
        for i in nums:
            if i-1 not in d:
                number = i
                count=1
                while number+1 in d:
                    number+=1
                    count+=1
                length=max(count,length)
                    
        return length
        