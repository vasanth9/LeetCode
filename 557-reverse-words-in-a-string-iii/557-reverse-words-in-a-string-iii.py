class Solution:
    def reverseWords(self, s: str) -> str:
        strings = s.split(' ');
        n=len(strings)
        for i in range(n):
            strings[i]=strings[i][::-1]
                    
        return ' '.join(strings)
        