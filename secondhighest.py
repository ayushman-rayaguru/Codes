def rd(a):
    u =[]
    for x in a:
        if x not in u:
            u.append(x)
    return u

if __name__ == '__main__':
    n = int(input())
    arr = map(int, input().split())
    L = list(arr)
    Ls = sorted(rd(L))
    n = len(Ls)
    print(Ls[n-2])