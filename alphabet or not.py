print ("0 for exit:");
st = input("Enter any character: ");
if st == '0':
    exit();
   
else:
    if((st>='a' and st<='z') or (st>='A' and st<='Z')):
    	print(st, "is an alphabet:");
    else:
    	print(st, "is not an alphabet:");
