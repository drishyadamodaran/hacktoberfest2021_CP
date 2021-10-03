# -- Case-1 -->> Using Function
# This is a program to find fibonacci series using simple function
def fib(n):
    if n < 1:  # Fibonacci is not defined for negative numbers
        return None
    if n < 3:  # The first two elements of fibonacci are 1
        return 1
    elem1 = elem2 = 1
    sum = 0
    for i in range(3, n+1):
        sum = elem1+elem2
        elem1, elem2 = elem2, sum
        # First element becomes becomes second element
        # Second element becomes the sum of previous two elements

    return sum


#--Main--#
for i in range(1, 10):
    print(i, " -->> ", fib(i))


# -- Case-2 -->> Using Recursive Function
def fib_rec(n):
    if n < 0:
        return None
    if n < 3:
        return 1
    return fib(n-1)+fib(n-2)
