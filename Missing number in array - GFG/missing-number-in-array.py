#User function Template for python3


class Solution:
    def missingNumber(self,array,n):
        
        check=[x for x in range(1,n+1)]
        array.sort()
        for i in range(n-1):
            if(array[i]!=check[i]):
                return check[i]
        return check[-1]
        # code here


#{ 
 # Driver Code Starts
#Initial Template for Python 3




t=int(input())
for _ in range(0,t):
    n=int(input())
    a=list(map(int,input().split()))
    s=Solution().missingNumber(a,n)
    print(s)
# } Driver Code Ends