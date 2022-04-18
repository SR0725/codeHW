
print ('這裡改成你的班級學號姓名')



for i in range(1,10):
    for j in range(1,10):
        if j == 1:
            if i == 1 and j == 1:
                print ('* |', end = ' ')
                print (i * j, end = ' ')
            else:
                print (i, end = ' ')
                print('|', end = ' ')

        print (i * j, end = ' ')
        
    if i == 1:
        
        for i in range(1,10):
            print('_', end = ' ')
        
        print('\n')
        print (1, end = ' ')
        print('|', end = ' ')
        for i in range(1,10):
            print ( i, end = ' ')
            
print ('這裡改成你的班級學號姓名')



for i in range(1,10):
    for j in range(1,10):
        if j == 1:
            if i == 1 and j == 1:
                print ('* |', end = ' ')
                print (i * j, end = ' ')
            else:
                print (i, end = ' ')
                print('|', end = ' ')

        print (i * j, end = ' ')
        
    if i == 1:
        print('\n')
        for i in range(1,10):
            print('-', end = ' ')
        
        print('\n')
        print (1, end = ' ')
        print('|', end = ' ')
        for i in range(1,10):
            print ( i, end = ' ')
            
    print('\n')
