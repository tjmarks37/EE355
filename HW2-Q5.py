#!/usr/bin/python 
from collections import Counter
def max_occuring_char(char_list):
    #create fucntion that takes in list of ASCII Values
    
    counts=[]
    counts=[0 for i in range(128)] 
    #Create list from range 0-127 aka the range of ASCII values and makes each indexes value 0, this list will keep count of how many characters we have for each ASCII value
    
    for i in range(len(counts)):
    #For loop from 0-127
        for k in range(len(char_list)):
        #Nested for loop from 0 to length of string inputed by user
            if char_list[k]==i:
                counts[i]=counts[i]+1
                #if the ASCII value in the list is equal to the current index of counts, then increment the value of counts at that index as the index value of counts represents the ASCII values
    
    max=counts[0]
    #establish a max value to compare
    max_index=0
    
    
    for j in range(len(counts)):
        if counts[j]>max:
            max=counts[j]
            ASCII_VAL=j
            #goes through counts and compares current max value to value at currewnt index, if greater than new max is established and new maximum used ASCII Value is created
            
    return ASCII_VAL
    
print('Enter a string')
word=input()
#take in string input from user

ASCII=[ord(char) for char in word]
#convert each character in the inputted string into its corresponding ASCII value and add to a list

maximum_character_ASCII_VAL=max_occuring_char(ASCII)
#call our created function inputing the list of ASCII values 

max_character=chr(maximum_character_ASCII_VAL)
#convert the returned ASCII value into its corresponding character

print('The maxiumum occuring character is '+max_character)
#print the maximum used character to screen

        
