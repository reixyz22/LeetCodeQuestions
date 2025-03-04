class Solution:
    def checkPowersOfThree(self, n: int) -> bool:
        x = 0
        count = 0

        powers = []
        while x < n:
            x = 3 ** count
            powers.insert(0, x)
            count += 1

        ternary = []
        for power in powers:
            z = (n // power)
            ternary.append(z)
            n = n - z * power

        return 2 not in ternary