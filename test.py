from functools import reduce

def func(a):
    print(a)
    print(reduce(lambda x, y: x+y, a))
    print(sorted(a))
    print(a)
    a.sort(reverse=True)
    print(a)
    return True
print((lambda a, b: a*b)(98761,2))


b=[1,2,8,3,4,5]
func(b)