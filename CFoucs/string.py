#Upper or lower ?

import os

# Clearing the Screen
os.system('cls')

letter = input("Enter a Letter ")

if(letter.isupper()):
    print("yes it's an upper case letter")
    
elif(letter.islower()):
    print("yes it's an lower case letter")

else:
    print("Oii it a number :)")


