##https://www.hackerrank.com/challenges/find-a-string/problem
def count_substring(string, sub_string):
    counter=0
    n=len(string)-len(sub_string)
    for i in range (n+1):
        if string.find(sub_string,i,i+len(sub_string))>=0:
            counter+=1     
    return counter

if __name__ == '__main__':
    string = input().strip()
    sub_string = input().strip()
    
    count = count_substring(string, sub_string)
    print(count)