'''import math
def swap(a,b):
    return (b , a)
a=int(input("enter a:"))
b=int(input("enter b:"))
print ("before swapping:")
print(a , b)
print ("after swapping: ",swap(a,b))'''

'''def is_palindrome(s): 
    return s == s[::-1] 
string = input("Enter a string: ") 
if is_palindrome(string): 
    print("It is a palindrome.") 
else: 
    print("It is not a palindrome.")'''

'''def sum_of_digits(n): 
    sum=0
    while(n>0):
        digit=n%10
        sum=sum+digit
        n=n//10
    return sum               
num = int(input("Enter a number: ")) 
print(f"Sum of digits: {sum_of_digits(num)}") '''

def is_prime(n):
    if n<=1:
        return False
    if n<=3:
        return True
    i=2
    while (i*i<=n):
        if(n%i==0):
            return False
        i+=1
    return True
num=int(input("enter a number:"))
if (is_prime(num)):
    print(num," is a prime number ")
else:
    print(num,"is not a prime number ")    
    