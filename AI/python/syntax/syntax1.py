#name = "Alice"
name = 'Alex'
age = 30
if name == 'Alice' :
    print('Hi, Alice.')
elif age < 12 : 
    print('You are not Alice kiddo.')
else :
    print('You are neither Alice nor little kid.!')

##################################################
spam = 0
while spam < 5:
    print('Hello World')
    spam = spam + 1

while True: #infinite loop
    print('Plz tell your name')
    name = input()
    if name == 'Ripudaman':
        break
print('Thank you!')

print('My name is:')
for i in range(5):
    print('Jimmy Five Times({})'.format(str(i)))
print('for loop from 0 9 incrementing 2')
for i in range(0, 10, 2):
    print(i)

for i in range(5, -1, -1):
    print(i)

###############################################################
print('import')
import random

for i in range(5):
    print(random.randint(1,10))

##############################################################
print('import sys')
import sys

while True:
    print('Type exit to exit')
    response = input()
    if response == 'exit':
        sys.exit()
    print('You typed {}.' .format(response))

