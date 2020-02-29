
dp = [[[[-1 for i4 in range(51)] for i3 in range(51)] for i2 in range(51)] for i1 in range(20001)]

#再帰関数
def SolveCoin(a, b, c, x):
  res = 0

  if(dp[x][a][b][c]!= -1):
      return dp[x][a][b][c]#すでに計算していたら参照

  if x != 0 : #x==0ならresは0のまま
    if a > 0:
      for i in range(a+1):
        res += SolveCoin(0,b,c,x-500*i)
    elif b > 0:
      for i in range(b+1):
        res += SolveCoin(0,0,c,x-100*i)
    else:
      for i in range(c+1):
        if i*50 == x :
            res += 1
        else:
            res += 0

  dp[x][a][b][c] = res

  return res


#標準入力
a = input()
b = input()
c = input()
x = input()

a = min(a, x//500);
b = min(b, x//100);
c = min(c, x//50);

#再帰的に計算・判定
printf(SolveCoin(a,b,c,x))
