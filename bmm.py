# a: الگوریتم محاسبه ب.م.م : بزرگترین مقسوم علیه ( شمارنده ) مشترک 

# (num1 , num2 ) 
num1:int = int( input("Enter number 1 of (num1 , num2): ") )
num2:int = int( input("Enter number 2 of (num1 , num2): ") )

counter = max(num1 , num2)  # iter in (num1 , num2 )

result = None

while ( counter > 1):
	if ( (num1 % counter) == 0 ) and ( (num2 % counter) == 0 ):
		if result == None:
			result = counter			
	
	counter -= 1
	
if result == None:
	print("The Numbr <1>")
else:
	print( f"The Number is <{result}>")
