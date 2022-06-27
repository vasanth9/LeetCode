# The isBadVersion API is already defined for you.
# def isBadVersion(version: int) -> bool:

class Solution:
    def firstBadVersion(self, n: int) -> int:
        start = 0
        end = n
        while(1):
            mid = (start+end)//2;
            x = isBadVersion(mid)
            if(mid>0 and x and not(isBadVersion(mid-1))):
                return mid;
            elif(x):
                if(mid==0):
                    return 0
                end=mid-1
            else:
                start=mid+1
        return 0