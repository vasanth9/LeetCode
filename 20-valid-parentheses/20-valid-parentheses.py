class Solution:
    def isValid(self, s: str) -> bool:
        openBrackets="{[("
        bracketPairs={
            "}":"{",
            "]":"[",
            ")":"("
        }
        stack = []
        for bracket in s:
            if bracket in openBrackets:
                stack.append(bracket)
            else:
                if stack and bracketPairs[bracket] == stack[-1]:
                    stack.pop()
                else:
                    return False
        return len(stack)==0
                    