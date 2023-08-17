#!/usr/bin/python3
def is_palindrome(n):
    return str(n) == str(n)[::-1]

def largest_palindrome():
    max = 0
    for i in range(100, 1000):
        for j in range(100, 1000):
            mul = i * j
            if is_palindrome(mul) and mul > max:
                max = mul
    return max

result = largest_palindrome()

with open("102-result", "w") as file:
    file.write(str(result))
