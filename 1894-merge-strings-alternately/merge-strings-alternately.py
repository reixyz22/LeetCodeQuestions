class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:

        merged = ""
        top = 0
        bottom = 0

        while word1 and word2:
            merged += word1[top]
            word1 = word1[1:]
            merged += word2[bottom]
            word2 = word2[1:]
            
        merged += word1 + word2
        return merged