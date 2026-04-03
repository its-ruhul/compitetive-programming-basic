t = int(input())

for i in range(t):
  a1 = int(input())
  a2 = int(input())
  b1 = int(input())
  b2 = int(input())

  big2 = (a1 > b1 and a2 > b2) and (a1 > b2 and a2 > b1)
  small2 = (a1 < b1 and a2 < b2) and (a1 < b2 and a2 < b1)
  

