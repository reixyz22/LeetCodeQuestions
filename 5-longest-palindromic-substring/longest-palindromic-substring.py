class Solution(object):
    def longestPalindrome(self, s):

        def helperPalindromeChecker(z): # helper function to check valid palindromes, see LC # 9 
            return z == z[::-1]  
                
        size = len(s) # start with the biggest size possible
        while True: # outer loop to search all sizes
            left = 0 # reset / init left pointer
            for _ in range(0, len(s)-size+1): # inner loop to search all substrings of this size
                if helperPalindromeChecker(s[ left : left + size ]): # call helper function with a slice of left : left + size
                    return  s[ left : left + size ] # if it's true you're done
                left += 1 # if it isn't, move the the left pointer one to the right and keep inner-looping
            size -= 1 # if no substring of this size was found decrease the size by 1 and start to outer-loop again