# DomirScire
#!/bin/python3

import os
import sys

#
# Complete the timeConversion function below.
#
def timeConversion(s):
    #
    # Write your code here.
    #
    h = int(s[0:2])
    if s[-2:] == "PM":
        if h != 12:
            h += 12
    else:
        if h == 2:
            h = 0
    return "%02d%s" % (h, s[2:-2])

if __name__ == '__main__':
    f = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    result = timeConversion(s)

    f.write(result + '\n')

    f.close()
