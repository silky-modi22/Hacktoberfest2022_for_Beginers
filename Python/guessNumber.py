import random
SecreteNumber= random.randint(1,20)
print("i am thinking  of the number between 1 to 20 ")
GuessNumber=int(input("take a guess:\n"))
if GuessNumber < SecreteNumber:
    print("your guess is lesser")
elif GuessNumber > SecreteNumber:
    print("your guess is higher")
else:

    if GuessNumber == SecreteNumber:
        print("great !! Thats a   right guess ! congtrs")
    else:
        print("the number that i was thinking of is "+ str(SecreteNumber))


