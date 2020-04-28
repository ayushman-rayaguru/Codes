def ft(n):
    if n==1:
        return 1
    elif n==0:
        print("FACTORIAL IS 1")
    else:
        return n * ft(n-1)

print("*************** FACTORIAL PROGRAM ***************")
num =int(input("PLEASE ENTER A NUMBER: "))
print("THE FACTORIAL IS", ft(num))
