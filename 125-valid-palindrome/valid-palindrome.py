class Solution:
    def isPalindrome(self, s: str) -> bool:
        for char in s:
            if not char.isalnum(): # if it's not alpha num ie COMMA take it out
                s = s.replace(char, "")

        s = s.lower() # then make everything lowercase

        if len(s) is (0 or 1): # edgecases
            return True

        for i in range(len(s)//2): # palindrome checker, refer to LC #9
            if s[i] != s[len(s)-i-1]:
                return False
        return True