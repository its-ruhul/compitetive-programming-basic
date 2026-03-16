n = int(input())

for i in range(n):

  s = input()

  ans = ''

  for i in s:
    if i == 'p':
      ans = ans + 'q'
    elif i == 'q':
      ans = ans + 'p'
    else:
      ans = ans + 'w'

  ansRev= ans[::-1]
  print(ansRev)