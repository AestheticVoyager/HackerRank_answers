# DomirScire
#!/bin/python3

import os
import sys

#
# Complete the miniMaxSum function below.
#
def miniMaxSum(arr):
    aa = [sum(arr) - arr[i] for i in range(len(arr))]
    print("%d %d" % (min(aa), max(aa)))

if __name__ == '__main__':
    arr = list(map(int, input().rstrip().split()))

    miniMaxSum(arr)
