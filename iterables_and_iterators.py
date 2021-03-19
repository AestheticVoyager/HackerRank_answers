# DomirScire
from itertools import combinations
input()
arr,k = input().split(),int(input())
l = list(combinations(arr,k))
print("%.4f" % (len(list(filter(lambda x: 'a' in x , l)))/len(l)))
