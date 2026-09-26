def fibonacci_generator():
    a = 0
    b = 1

    while True:
        yield a
        a, b = b, a + b

generator = fibonacci_generator()

print(next(generator))
print(next(generator))
print(next(generator))
print(next(generator))
print(next(generator))
print(next(generator))
print(next(generator))
print(next(generator))
