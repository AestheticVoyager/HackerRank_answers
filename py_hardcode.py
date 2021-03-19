# DomirScire
y = 1000000121

while y >0:
    if y&1:
        print("res=(res*x)%1000000123;")
    print("x = (x*x)%1000000123;")
    y >>=1
