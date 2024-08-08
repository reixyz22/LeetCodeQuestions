class Solution:
    def addBinary(self, a: str, b: str) -> str:
        carry = 0
        output = ""
        max_length = max(len(a), len(b))

        # Reverse the strings to make addition easier
        a = a[::-1]
        b = b[::-1]

        for i in range(max_length):
            # Get the current bits from each string or 0 if the index is out of bounds
            bit_a = int(a[i]) if i < len(a) else 0
            bit_b = int(b[i]) if i < len(b) else 0

            # Calculate the total sum of bits and the carry
            total = bit_a + bit_b + carry
            carry = total // 2  # Update carry for next position

            # Calculate the bit to add to the result
            output = str(total % 2) + output

        # If there's a carry left after the last addition, add it to the result
        if carry:
            output = "1" + output

        return output
