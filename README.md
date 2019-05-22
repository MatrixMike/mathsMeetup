# mathsMeetup
A C program to examine one puzzle from the May 2019 Maths Meetup
So we can generate some numbers that are 'One Off' in each digit +1, -1.
What is needed is to create a list, or loop through the sub-solutions iteratively, and test each combination for products.

This will be a useful tool as I have re-learned about atoi and itoa. So it is a working example but probably the worst code that I have wriiten in quite a while. The git stages show my development phases. 

A single digit number e.g. 7 has  two 'one off' possibilities. [6,8]
A double digit number e.g. 13 has four 'one off' possibilities. [24,22,04,02]
for three digits we see a sequence of -111,109,-91,89,89,91,109,111 . 
