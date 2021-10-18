####----TWO KNIGHTS---#######

# Your task is to count for k=1,2,…,n the number of ways two knights can be placed on a k×k chessboard so that they do #  not attack each other.

n = int(input())

for i in range(1,n+1):
    results = 0.5*(((i*i)**2 - 9*(i*i) + 24*i - 16))
    print(int(results))
#this will print all the possible cases.

#Computed the final equation and then coded.

#THINK ON THE LOGIC BEHIND EQUATION
