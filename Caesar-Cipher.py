# DomirScire
#!/bin/python3
import math
import os
import random
import re
import sys

# Complete the caesarCipher function below.
def caesarCipher(s, k):
    k = k%26
    aa = "abcdefghijklmnopqrstuvwxyz"
    ra = aa[k:] + aa[:k]
    AA = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    RA = AA[k:] + AA[:k]
    ret = []
    for c in s:
        if c in aa:
            ret.append(ra[aa.index(c)])
        elif c in AA:
            ret.append(RA[AA.index(c)])
        else:
            ret.append(c)
    return ''.join(ret)

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    s = input()

    k = int(input())

    result = caesarCipher(s, k)

    fptr.write(result + '\n')

    fptr.close()
