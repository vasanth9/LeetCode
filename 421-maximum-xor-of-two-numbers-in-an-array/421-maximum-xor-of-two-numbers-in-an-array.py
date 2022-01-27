class Solution:
    def findMaximumXOR(self, nums: List[int]) -> int:
        mx,mask=0,0
        for i in range(31,-1,-1):
            possible_mx = mx | 1 << i
            mask = mask | 1 << i
            bits=set()
            for num in nums:
                bits.add(num & mask)
            print(bits)
            for bit in bits:
                if bit ^ possible_mx in bits:
                    mx = possible_mx
                    break
        return mx
        