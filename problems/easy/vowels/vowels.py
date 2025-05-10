def count_vowels( word):
    
    vowels = 0
    # write your code here
    list=("a","e","i","o","u")
    
    for char in word:
        
        if char in list:
            vowels+=1
            
    return vowels

print(count_vowels("celebration mode"))