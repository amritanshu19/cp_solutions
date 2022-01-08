//https://codeforces.com/problemset/problem/1343/B
t = int(input())
while t>0:
  n = int(input())

  if n%4==0 :
    print("YES")
    for i in range(n) :
      if i<n/2 :
        print(2*(i+1), end=" ")
      elif i!=n-1 :
        print(2*(i-n//2)+1,end=" ")
      else :
        print(2*(i-n//2)+1+n//2)

    
  else:
    print("NO")

  

  t=t-1
