with open('testin', 'r') as file:
    prio = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"
    result = 0
    count = 0
    string = ''
    for line in file:
        if count == 3:
            result += prio.find(string)+1
            count = 0
        else:
            string+=line.strip('\n')
        count += 1
                    
    print(result)