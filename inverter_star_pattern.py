
# python 3 code to print inverted star
# pattern 
  
# n is the number of rows in which
# star is going to be printed.
n=11
  
# i is going to be enabled to
# range between n-i t 0 with a
# decrement of 1 with each iteration.
# and in print function, for each iteration,
# ” ” is multiplied with n-i and ‘*’ is
# multiplied with i to create correct
# space before of the stars.
for i in range (n, 0, -1):
    print((n-i) * ' ' + i * '*')
