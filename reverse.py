
def rev(str):
    s=""
    for ch in str:
        s = ch + s 
    return s

mystr = input(" PLEASE ENTER A STRING ")
print("REVERSED STRING :",rev(mystr))