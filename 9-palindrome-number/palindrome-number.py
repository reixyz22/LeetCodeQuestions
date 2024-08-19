class Solution(object):
    def isPalindrome(self, x):
        x_str = str(x)  # Convert the number to a string
        return x_str == x_str[::-1] 
        