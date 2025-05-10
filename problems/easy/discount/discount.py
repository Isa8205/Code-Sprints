
# p =original price
#  d = percentage discount

def getdiscountedPS(p,d):
    
    price =p *(d/100)
    
    return price

print(getdiscountedPS(1500,50))