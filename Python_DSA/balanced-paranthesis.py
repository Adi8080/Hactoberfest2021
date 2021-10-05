'''
Program to check if given parathesis is balanced or not

Example 1:
    Input : {[]{()}}
    Output : Balanced   

Example 2:
    Input : [{}{}(]
    Output : Unbalanced

'''
def check(string):
    brackets = ['()', '{}', '[]']
    while any(x in string for x in brackets):
        for br in brackets:
            string = string.replace(br, '')
    return not string

 
   
# Driver code
string = "{[]{()}}"
print(string, "is", "Balanced" 
      if check(string) else "Unbalanced")