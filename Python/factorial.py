# -*- coding: utf-8 -*-
"""
Created on Sat Dec 12 21:49:34 2020

@author: user
"""

def factorial(n):
    if n == 0:
        return 1
    else:
        return n * factorial(n-1)
    
n=int(input("Enter A number : "))
print("Factorial of number is ",factorial(n))
