
def angryProfessor(k, a):
    # Write your code here

    on_time=0
    for item in a:
        if item >= 0:
            on_time+=1
            
    if on_time < k:
        return "YES"
        
    
    return "NO"
print(angryProfessor(3,[-1, -3, 4, 2]))
