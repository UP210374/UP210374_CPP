#Section 1
print('hello \nworld'); print(':)')
print('hello','world', end='...',sep='-')#change default settings line end='\n' and sep=' '
print('hello','world')

print('Greg\'s book')#use \ to print (') special character 
print("Greg's book")
print('"Greg\'s book"')

#Arrays
import array as arr
a= arr.array('i',[1,2,3,4,5])# 'i' only acept integer values
print(a)
print(a[3])

b=[55,22,'hi']
b.append(3)#append add a value to the array
print(b)
b.pop(1)#pop erase a value fron the arrray
print(b)

c=[]
c.append(7)
print(c)