Sources Used:
ASCII Encoding and Decoding-https://www.i2tutorials.com/how-to-get-the-ascii-value-of-a-character-in-python/
Creating dynamic array of known size:https://www.studytonight.com/python-howtos/how-to-declare-an-array-in-python#:~:text=Python%20has%20a%20module%20numpy%20that%20can%20be,along%20with%20the%20specified%20size%20inside%20the%20initializer.
	
The code works as expected and returns the most used character in the inputed string to include keyboard letters, numbers, and symbols. Some issues with the program could include that it only will return and analyze ASCII characters, and that if a string does not have one maximum used character it will return the value that is lower in index in the ASCII code index. 
For example:
if inputed string is 'aabbd' the character returned will be a as a's ASCII value is 97 and b's is 98.

another example would be if there is no max such as 'abcd' it will again return a because a is lowest on the ASCII index
