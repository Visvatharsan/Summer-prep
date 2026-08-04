class Solution(object):
    def isPalindrome(self, s):
        x = 0
        y = len(s)-1

        while(x<y):
            while(x < y and not s[x].isalnum()):
                x+=1
            
            while(x<y and not s[y].isalnum()):
                y-=1
            
            if(s[x].lower() != s[y].lower()):
                return False
            x+=1
            y-=1
        
        return True

        