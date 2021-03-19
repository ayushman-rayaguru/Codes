def shortest_distance(a, b, c):
    if(a==b)&(a==c):
        return((a**2+(b+c)**2)**0.5)
    if(a>b)&(a>c):
        return((a**2+(b+c)**2)**0.5)
    if(b>a)&(b>c):
        return((b**2+(a+c)**2)**0.5)
    if(c>b)&(c>a):
        return((c**2+(a+b)**2)**0.5)