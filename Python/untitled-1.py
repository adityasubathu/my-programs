def add(x, y):
    return x + y

def sub(x, y):
    return x - y

def mul(x, y):
    return x * y

def divi(x, y):
    return x / y

def main():
    print("Hi! Welcome to Python Calculator Program")
    
    a = int(input("Please enter the first number: "))
    o = str(input("Please enter operation sign: "))
    b = int(input("Please enter the second number: "))
    
    if o == '+':
        r = add(a, b)
    elif o == '-':
        r = sub(a, b)
    elif o == '*':
        r = mul(a, b)
    elif o == '/':
        r = divi(a, b)
        
    else:
        print("wrong operator")
        
    print(r)
main()