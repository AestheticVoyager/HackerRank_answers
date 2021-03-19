# DomirScire
import numpy

N, M = map(int,input().split())

A = numpy.array([list(map(int,input().split())) for n in range(N)])
B = numpy.array([list(map(int,input().split())) for n in range(N)])

#1
print(numpy.add(A,B))
#2
print(numpy.subtract(A,B))
#3
print(numpy.multiply(A,B))
#4
m=A/B
print(numpy.int_(m))
#5
print(numpy.mod(A,B))
#6
print(numpy.power(A,B))
