from functools import reduce


def my_sum(*args):
    print(reduce((lambda x, y: x + y), args))


my_sum("Hello ", "World")
my_sum("my ", "name ", "is ", "martin")
my_sum(2, 3, 2)
my_sum(1, 2, 3, 5, 6, 5, 9, 7, 9, 100, 1, 3, 2, )
my_sum(2.2, 3.4, 2.3, 5, 6, 8, )
