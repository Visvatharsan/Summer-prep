class Solution:
    def strongPasswordCheckerII(self, password: str) -> bool:
        if(len(password) < 8):
            return False
            
        flag=False
        for i in password:
            if(i >="A" and i<="Z"):
                flag=True
        if(not flag):
            return False

        flag=False
        for i in password:
            if(i >="a" and i<="z"):
                flag=True
        if(not flag):
            return False

        flag=False
        for i in password:
            if(i.isdigit()):
                flag=True
        if(not flag):
            return False

        flag=False
        for i in password:
            if(i in "!@#$%^&*()-+"):
                flag=True
        if(not flag):
            return False
        
        for i in range(1,len(password)):
            if(password[i] == password[i-1]):
                return False
        return True
        
        