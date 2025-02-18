class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        mapping = {')': '(', ']': '[', '}': '{'}
        
        for char in s:
            if char in mapping.values():  # If it's an opening bracket
                stack.append(char)
            elif char in mapping:  # If it's a closing bracket
                if not stack or stack.pop() != mapping[char]:  # Check and pop in one step
                    return False
        
        return not stack  # True if all brackets are matched
