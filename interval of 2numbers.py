smaller=int(input("Enter the lower limit for the range:"))
higher=int(input("Enter the upper limit for the range:"))
for i in range(smaller,higher+1):
    if(i%2!=0):
          print(i)
