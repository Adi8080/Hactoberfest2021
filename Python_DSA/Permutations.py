###### PERMUTATIONS ######

# A permutation of integers 1,2,…,n is called beautiful if there are no adjacent elements whose difference is 1.

#INPUT
#Given n, construct a beautiful permutation if such a permutation exists.
#OUTPUT
#If there are several solutions, you may print any of them. If there are no solutions, print "NO SOLUTION".

#EXAMPLE
# Input:
# 5

# Output:
# 4 2 5 3 1

#PROGRAM
n = int(input())
if (n == 2 or n==3):
    print("NO SOLUTION")

v = 2
while v<=n:
    print(v,end=" ")
    v+=2

v = 1
while v<=n:
    print(v,end=" ")
    v+=2


#The logic is my own so 
#FIRST TRY TO BUILD YOUR OWN LOGIC
