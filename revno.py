temp = 0
def revno(n):
    global temp
    if n==0:
       return n
    else:
     temp = (temp*10) + (n%10)
     revno(n//10)  #recursive call
     return temp

print("------------ REVERSE NUMBER ------------")
num = int(input("PLEASE ENTER A NUMBER "))
print("THE REVERSE OF NUMBER IS ", revno(num))