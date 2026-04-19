import statistics

def oddOneOut():
  t = int(input())

  array = []
  sum = 0

  for i in range(t):
    a = int(input())
    array.append(a)

  list1 = []

  for i in range(t-1):
    list1.append(array[i+1] - array[i])

  mode = statistics.mode(list1)
  print("List1: ", list1)
  print("Mode: ", mode)

  odd = 0

  for i in range(t-1):
    if list1[i] != mode:
      print("Answer: ", array[i+1])
      return
    
  print("Answer: ", array[t-1])

oddOneOut()
