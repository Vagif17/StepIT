# 1
# def max_string(x):
#     amount = 0
#     amount_2 = 0
#     max_amount = 1
#     string_1 = ()
#     string_2 = ()
#     for b in range(len(x)):
#         for i in x[b]:
#             if b == 0:
#                 amount += 1
#                 string_1 = x[b]
#             if 0 < b < max_amount:
#                 amount_2 += 1
#                 string_2 = x[b]
#         if amount > amount_2:
#             amount_2 = 0
#             max_amount += 1
#         else:
#             amount = 0
#     print(list_string)
#     if amount > amount_2:
#         print(string_1)
#     else:
#         print(string_2)
#
#
#
# list_string = ['Vagif', 'Isa', 'Lionel','Elvin']
# max_string(list_string)


# 2

# def string_factorial(x):
#     numbers_amount = 0
#     res = 1
#     numbers = 1
#     all_res = 0
#     factorial_amount = 0
#     for j in range(len(x)):
#         for i in x:
#             if i == x[j]:
#                 for b in i:
#                     res *= numbers
#                     numbers += 1
#                 print(f'Factorial of \'{x[0]}\' is = {res} ')
#                 all_res += res
#                 factorial_amount += 1
#         res = 1
#         numbers = 1
#         i = x[j]
#     print(f'Factorial of all word are = {all_res / factorial_amount} ')
#
#
#
# words = ['Hi','Go', 'Bye']
# string_factorial(words)