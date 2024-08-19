class Solution(object):
    def reverse(self, x):
        negative = 1
        if x < 0:
            x = x * -1
            negative = -1
        output = int(''.join(reversed(str(x))))
        if output > 2**31:
            return 0
        else:
            return output * negative
        