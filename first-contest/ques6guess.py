n = int(input())

for i in range(n):
  a = int(input())

  count = 0

  for j in range(a):
    if a + 1 - j:
      count += 1

  print(count + a)