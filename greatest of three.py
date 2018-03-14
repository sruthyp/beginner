while True:
	print("Enter 'y' for exit:")
	print("Enter any three numbers: ")
	num1 = input()
	num2 = input()
	num3 = input()
	if num1 == 'y':
		break
	else:
		number1 = int(num1)
		number2 = int(num2)
		number3 = int(num3)
		largest = number1
		if largest < number2:
			if number2 > number3:
				largest = number2
			else:
				largest = number3
		elif largest < number3:
			if number3 > number2:
				largest = number3
			else:
				largest = number2
		else:
			largest = number1
		print("Largest of given three numbers is",largest,"\n")
