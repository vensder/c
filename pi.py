#!/usr/bin/env python3

#  4/1-4/3+4/5-4/7+4/9-4/11+4/13-4/15+4/17-4/19+4/21-4/23+4/25-4/27+4/29

sign = -1
acc = 0
for i in range(1,200000000,2):
    sign=sign*(-1)
    i=i*sign
#    print(i)
    acc = acc + (4/i)
    
print(acc)


