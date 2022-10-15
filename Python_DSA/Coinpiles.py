##### COINPILES #####

# You have two coin piles containing a and b coins. On each move, you can either remove one coin from the left pile and two coins from the right pile, or two coins from the left pile and one coin from the right pile.

# Your task is to efficiently find out if you can empty both the piles.


n = int(input())
x = []
for i in range(n):
    a, b = list(map(int, input().split()))
    while a!=0 and b!=0:
        if a >= b:
            a = a -2
            b = b -1
        else:
            a = a -1
            b = b -2
    if (a+b == 0):
        x.append('YES') # print "YES" if you can empty the piles 
    else:
        x.append("NO") # and "NO" otherwise.

for i in range(len(x)):
    print(x[i])

# the logic is my own
# TRY IT YOURSELF
