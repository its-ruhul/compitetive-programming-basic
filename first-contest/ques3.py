t = int(input())

for i in range(t):
  word = input()
  l = len(word)
  last = 0

  newNum = l
  for j in range(l-1):
    if word[j] == word[j+1]:
      last = j + 1

    newNum = l - last
    
  print(newNum)
