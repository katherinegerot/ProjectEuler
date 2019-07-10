var sum = 0

var n_1 = 1
var n_2 = 2

while n_2 < 4000000 {
  if(n_2 % 2 == 0) {
    sum+=n_2
  }
  let temp = n_2
  n_2 += n_1
  n_1 = temp
} 

print(sum)
