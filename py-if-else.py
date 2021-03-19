# DomirScire
'''
n is odd => print weird

n is even and inclusive range of 2 to 5 => NOT weird
n is even and inclusive range of 6 to 20 => weird
n is even and greater than 20 => NOT weird

input: a single line containing a positive int
'''

input_v = input()
input_v=int(input_v)

if not(input_v%2) == 0:
    print('Weird')
elif (input_v%2==0) and input_v in range(2,6):
    print('Not Weird')
elif (input_v%2==0) and input_v in range(6,21):
    print('Weird')
elif (input_v % 2==0) and (input_v > 20):
    print('Not Weird')
