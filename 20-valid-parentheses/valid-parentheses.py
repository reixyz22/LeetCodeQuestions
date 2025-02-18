class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        for char in s:
            if char == '(' or char == '[' or char == '{':
                stack.append(char)

            if char == ')':
                if stack and stack[-1] == '(':
                    stack.pop()
                else:
                    return False

            elif char == ']':
                if stack and stack[-1] == '[':
                    stack.pop()
                else:
                    return False

            elif char == '}':
                if stack and stack[-1] == '{':
                    stack.pop()
                else:
                    return False
                    
        return len(stack) == 0