class Solution(object):
    def convert(self, s, numRows):

        if numRows == 1: # edgecase
            return s

        out = []
        for i in range(numRows): # make a list of blank layers based on size of numRows
            out.append("")
        
        category = 0

        for i in range(len(s)): # add characters to this list of categories / layers according to the rules of zig zag
            out[category] += s[i]
            if category == 0:
                zag = False # zig!, we're at the top and need to go straight down until it's time to zag
            if category == numRows - 1:
                zag = True # zag, we made it down to the bottom and need to go diagonaly up until it's time to zig
            if zag:
                category -= 1
            if not zag:
                category += 1

        output = "" 
        for i, item in enumerate(out): # build the output based on the list of layers
            output += out[i]
        return output
        