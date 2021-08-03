n = int(input("Enter a number: "))
print ("The factors of",n,"are:")
i=1
while(i<=n):
    if(n%i==0):
        print(i)
    i += 1