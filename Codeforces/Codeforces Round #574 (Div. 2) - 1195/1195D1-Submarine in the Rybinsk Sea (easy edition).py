import math
from collections import deque, defaultdict
from sys import stdin, stdout
input = stdin.readline
# print = stdout.write
listin = lambda : list(map(int, input().split()))
mapin = lambda : map(int, input().split())
def doTheThing(s):
    t = ''
    for i in s:
        t+=i
        t+=i
    return int(t)
n = int(input())
a = list(input().split())
a = [doTheThing(i) for i in a]
ans = 0
for i in a:
    ans+=(i*n)%998244353
    ans%=998244353
print(ans)