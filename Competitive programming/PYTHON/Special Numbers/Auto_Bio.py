# Autobiographical numbers within range 0 to N
#An autobiographical number is a number such that the first digit of it counts how many zeroes are    there in it, the second digit counts how many ones are there and so on.
#For example, 1210 has 1 zero, 2 ones, 1 two and 0 threes.

from math import pow

def isAutoBio(N):
	
#Converting number to string for simpler execution
	Str = str(N)

	for i in range(0, len(Str)):
		
#Extracting character at each index and converting back to integer
		index = int(Str[i])

		c = 0 #counter variable for counting 0's,1's, and so on

		for j in range(0, len(Str)):
		
			num = int(Str[j])

			# Check if equal to the index, if true then increment count
			if num == i:

				#An Autobiographical number
				c += 1

		# Return false if counter and index not equal
		if c != index:

			return False
	
	return True

# Function to print autobiographical number

def findAutoBios(n):

	
	flag= 0

    #print("********AUTOBIOGRAPHICAL NUMBERS IN THIS RANGE 0 TO ",n)

	for i in range(0,n+1):
        
        #Passing every number from 0 to n+1 to check for Autobiographical number

		if isAutoBio(i): 
			flag = 1
			print i,"is an autobiographical number\n"


# Driver Code

if __name__ == "__main__":

	N = input("Please enter the max range\n")

	findAutoBios(N)