N=6
arr=[1,2,3,4,5,6]
maxnum=0
minnum=99999

def dfs(n,plus,minus,mul,div,result):
    if n==N:
        minnum=min(result,minnum)
        maxnum=max(result,maxnum)
        return
    else:
        if(plus>0):
            new_result=result+arr[n]
            dfs(n+1,plus-1,minus,mul,div,new_result)
        if(minus>0):
            new_result=result-arr[n]
            dfs(n+1,plus,minus-1,mul,div,new_result)
        if(mul>0):
            new_result=result*arr[n]
            dfs(n+1,plus,minus,mul-1,div,new_result)
        if(div>0):
            new_result=result/arr[n]
            dfs(n+1,plus,minus,mul,div-1,new_result)


  dfs(1,2,1,1,1,arr[0])
        

