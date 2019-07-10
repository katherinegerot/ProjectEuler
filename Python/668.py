s = 0; 
  
def maxdiv(n): 
  div = 0
  if n == 1:  
    return 1
  
  while n % 2 == 0: 
    n = n // 2
    div = 2
  
  size = 1 + int(n ** 0.5)
  for i in range(3, size, 1): 
    while n % i == 0: 
      div = i 
      n = n // i 
  return max(n, div)
  
  
def checkSmooth(bottom, top):     
  global s
  for i in range(bottom, top + 1): 
    sq = i ** 0.5
    if maxdiv(i) < sq:
      if(i % 10000 == 0):
        print(i)
      s += 1


checkSmooth(3, 1000000000) #bottom min 3
print("Sum:", s + 1)
