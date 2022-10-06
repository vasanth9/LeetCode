class Solution:
    def simplifyPath(self, path: str) -> str:
        paths=path.split("/")
        n=len(paths)
        stack = []
        for p in paths:
            if p == "":
                continue
            elif p == ".":
                continue
            elif p == "..":
                if stack:
                    stack.pop()
                else:
                    continue
            else:
                stack.append(p)
        return "/"+ "/".join(stack)

        