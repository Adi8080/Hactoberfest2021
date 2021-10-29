import re
def matchingStrings(s,q):

     for pattern in queries:
         found = 0
         for s in strings:
             found += len(pattern.findall(s))
         print(found)

strings_count = int(input())
strings = []

for _ in range(strings_count):
        strings_item = input()
        strings.append(strings_item)

queries_count = int(input())
queries = []

for _ in range(queries_count):
    queries.append(re.compile(r'^'+input()+'$'))

matchingStrings(strings, queries)
