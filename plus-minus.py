# DomirScire
import math
import os
import random
import re
import sys

# Complete the plusMinus function below.
def plusMinus(arr):
    pos = sum(map(lambda x: x>0,arr))*1.0/len(arr)
    neg = sum(map(lambda x: x<0,arr))*1.0/len(arr)
    zeros = sum(map(lambda x: x==0,arr))*1.0/len(arr)
    print("{0}\n{1}\n{2}".format(pos,neg,zeros))

if __name__ == '__main__':
    n = int(input())

    arr = list(map(int, input().rstrip().split()))

    plusMinus(arr)
