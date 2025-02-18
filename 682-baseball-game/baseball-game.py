class Solution:
    def calPoints(self, operations: List[str]) -> int:
        stack = []
        score = 0
        for char in operations:
            if char == '+':
                score += stack[-1] + stack[-2]
                stack.append(stack[-1] + stack[-2])
 
            elif char == 'D':
                score += stack[-1] * 2
                stack.append(stack[-1] * 2)
            
            elif char == 'C':
                score -= stack[-1]
                stack.pop() 
            
            else:
                x = int(char)
                score += x
                stack.append(x)
        return score