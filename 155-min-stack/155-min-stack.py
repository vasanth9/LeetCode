class MinStack:

    def __init__(self):
        self.stack=[]
        self.minStack=[]
        

    def push(self, val: int) -> None:
        self.stack.append(val)
        
        if self.minStack:
            if self.minStack[-1] < val:
                self.minStack.append(self.minStack[-1])
            else:
                self.minStack.append(val)
        else:
            self.minStack.append(val)
            
        

    def pop(self) -> None:
        if self.stack:
            self.stack.pop()
            self.minStack.pop()
        

    def top(self) -> int:
        if self.stack:
            return self.stack[-1]
        else:
            return -1
        

    def getMin(self) -> int:
        if self.minStack:
            return self.minStack[-1]
        else:
            return -1
        
        
        


# Your MinStack object will be instantiated and called as such:
# obj = MinStack()
# obj.push(val)
# obj.pop()
# param_3 = obj.top()
# param_4 = obj.getMin()