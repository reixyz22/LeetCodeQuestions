class Solution(object):
    def isPalindrome(self, x):
        return str(x) == ''.join(reversed(str(x)))