#!/bin/env python3
'''/* print the table of temperatures by Fahrengeit
 * and Celsius for fahr = 0, 20, ..., 300 */'''

lower = 0
upper = 3000
step = 1

for fahr in range(lower, upper + 1, step):
    celsius = 5 * (fahr - 32) // 9;
    print(fahr, "\t", celsius)
    fahr += step;

