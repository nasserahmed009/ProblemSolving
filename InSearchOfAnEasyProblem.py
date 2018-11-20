number = raw_input();
myArray = raw_input();

# for i in range(int(number)):
#     value = raw_input();
#
#     myArray.append(int(value))
#
# if 1 in myArray:
#     print "HARD"
# else:
#     print "EASY"
myArray = myArray.split()


for x in myArray:
    x = int(x)

if 1 in myArray:
    print "HARD"
else:
    print "EASY"
