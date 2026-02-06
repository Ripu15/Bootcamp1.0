##########################################################
print('list')
spam = ['cat', 'bat', 'rat', 'elephant']
print(spam[0])
print(spam[-2])
print(spam[-1])
print(spam[0:4])
print(spam[1:3])
print(spam[0:-1])
#cpoy of list
print('copy of list')
spam2 = spam[:]
print('spam2:',spam2)
spam2.append('dog')
print('spam2:',spam2)
print(len(spam2))
spam2[4] = 'not dog'
print('spam2',spam2)
spam2[4] = spam2[0]
print('spam2', spam2)