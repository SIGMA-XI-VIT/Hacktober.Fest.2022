a=1
while a!=0:


    s=input("Enter string:")

    ans=s[::-1]
 
    if ans==s:
        print("Yes it is a palindrome...Ending program")
        a=0
        break
    else:
        print("No it isn't a palindrome")