def potRecursiva(a,b):
    if b==0:
        return 1
    else:
        return a*potRecursiva(a,b-1)

a=int(2)
b=int(2)
print(potRecursiva(a,b))
