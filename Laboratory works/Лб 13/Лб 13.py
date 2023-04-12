import random
random_number = [random.randint(-20,20) for i in range(10)]
print(random_number)
#Task 1
# 1.
# def negative(x):
#     negative_res = 0
#     for i in range(len(x)):
#         if i == 0:
#             for b in x:
#                 if 0 > b:
#                     negative_res += b
#     print(negative_res)
# negative(random_number)

# 2.
# def even(x):
#     even_res = 0
#     for i in range(len(x)):
#         if i == 0:
#             for b in x:
#                 if b % 2 == 0:
#                     even_res += 1
#     print(even_res)
# even(random_number)

# 3.
# def odd(x):
#     odd_res = 0
#     for i in range(len(x)):
#         if i == 0:
#             for b in x:
#                 if b % 2 > 0:
#                     odd_res += b
#     print(odd_res)
# odd(random_number)

# 4.
# def index3(x):
#     index3_res = 0
#     count_numbers = -1
#     for i in range(len(x)):
#         if i == 0:
#             for b in x:
#                 count_numbers += 1
#                 if count_numbers > 0:
#                     if count_numbers % 3 == 0:
#                         index3_res += b
#     print(index3_res)
# index3(random_number)

# 5.
# def nubmer(x):
#     nubmer_res = 1
#     min_number = 0
#     for i in range(len(x)):
#         for b in range(9):
#             if x[b] > x[b + 1]:
#                 c = x[b]
#                 x[b] = x[b + 1]
#                 x[b + 1] = c
#     count = -1
#     len_1 = len(x)
#     for j in range(len(x)):
#         if j == 0:
#             for g in x:
#                 count += 1
#                 if count == len_1 - 1:
#                     break
#                 if count == 0:
#                     pass
#                 if count > 0:
#                     nubmer_res *= g
#
#     print(x)
#     print(nubmer_res)


#nubmer(random_number)

# 5.

# def number2(x):
#     number2_res = 0
#     count = -1
#     start_number = 0
#     end_number = 0
#     for i in range(len(x)):
#         if i == 0:
#             for b in x:
#                 if b > 0:
#                     start_number = b
#                     break
#         if i == 1:
#             for j in x:
#                 if j > 0:
#                     end_number = j
#         if i == 2:
#             for g in x:
#                 count += 1
#                 if count >= x.index(start_number):
#                    number2_res += g
#                 if count == x.index(end_number):
#                     break
#     print(number2_res)
#
#
# number2(random_number)

# Task 2

# 1.

# def even_list(x):
#     new_list = []
#     for i in range (len(x)):
#         if i == 0:
#             for b in x:
#                 if b > 0 and b % 2 == 0:
#                     new_list.append(b)
#     print(new_list)
#
# even_list(random_number)

# 2.
# def odd_list(x):
#     new_list = []
#     for i in range(len(x)):
#         if i == 0:
#             for b in x:
#                 if b > 0 and b % 2 != 0:
#                     new_list.append(b)
#     print(new_list)
#
# odd_list(random_number)


# 3.
# def negative_list(x):
#     new_list = []
#     for i in range(len(x)):
#         if i == 0:
#             for b in x:
#                 if b < 0:
#                     new_list.append(b)
#     print(new_list)
#
# negative_list(random_number)


# 4.
# def positive_list(x):
#     new_list = []
#     for i in range(len(x)):
#         if i == 0:
#             for b in x:
#                 if b > 0:
#                     new_list.append(b)
#     print(new_list)
#
# positive_list(random_number)