# functions
print('functions')
def hello(name):
    print('Hello {}' .format(name))

hello('Alice')
hello('Ripudaman')

import random
def getAnswer(answerNumber):
    if answerNumber == 1:
        return 'It is certain'
    elif answerNumber == 2:
        return 'It is decidedly so'
    elif answerNumber == 3:
        return 'Yes'
    elif answerNumber == 4:
        return 'Reply hazy try again'
    elif answerNumber == 5:
        return 'Ask again'
    elif answerNumber == 6:
        return 'Its six'
    elif answerNumber == 7:
        return 'OIs seven'
    elif answerNumber == 8:
        return 'Its eight'
    elif answerNumber == 9:
        return 'Its nine'
    
r = random.randint(1,9)
fortune = getAnswer(r)
print(fortune)

###################################################
print('simple print') # next line
print('simple print', end=' ') # no next line its space
print('World')

print('cats', 'dogs', 'mice', sep=',')

####################################################

def spam():
    global eggs
    eggs = 'spam'

eggs = 'global'
spam()
print(eggs)

####################################################
print('Error Handling')

def spam(divideby):
    try:
        return 42/divideby
    except ZeroDivisionError as e:
        print('Error: Invalid Args:{}'.format(e))

print(spam(2))
print(spam(100))
print(spam(0))

####################################################
print('Error handling finally')

def spam(divideby):
    try:
        return 42/divideby
    except ZeroDivisionError as e:
        print('Error: Invalid Args:{}'.format(e))
    finally:
        print('-- divison finished--')

print(spam(12))
print(spam(0))

