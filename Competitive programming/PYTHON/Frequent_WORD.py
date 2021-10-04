# # Here we will find the maximum frequent word in the dataset
# # We will use the concept of dictionary.
# inp = list(input("Enter").split())
# d = {}
# for x in inp:
#     d[x] = 0
# for x in inp:
#     d[x] = d[x]+1

# max = 0
# ans = ''
# for x in inp:
#     if(d[x] > max):
#         max = d[x]
#         ans = x
# print(d)
# print(max)
# print("Max Repeating word = ", ans.upper())
def f(str):
    new = {}
    freq = {}
    str = list(str.lower().split(' '))
    for i in str:
        if i not in new:
            new[i] = 0
            new[i] += 1
        else:
            new[i] += 1
    for i in sorted(list(new.values())):
        freq[i] = []
    for x in freq:
        for word in new:
            if new[word] == x:
                freq[x] += [word]
    print(str, end='\n\n\n')
    print(new)
    print(freq)


f('My name is Lalit Kumar. My house is in #### %4^ 8')
