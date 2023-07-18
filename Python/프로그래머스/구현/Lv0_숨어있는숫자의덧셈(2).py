# Python 숨어있는 숫자의 덧셈 (2)
# 문자열 my_string이 매개변수로 주어집니다. my_string은 소문자, 대문자, 자연수로만 구성되어있습니다. 
# my_string안의 자연수들의 합을 return하도록 solution 함수를 완성해주세요.

# sol1)
def solution(my_string):
    answer = 0
    temp = ""
    for char in my_string:
        if char.isdigit():
            temp += char
        else:
            if temp:
                answer += int(temp)
            temp = ""
    return answer + int(temp) if temp else answer

# sol2)
def solution(my_string):
    s = ''.join(char if char.isdigit() else ' ' for char in my_string)
    return sum(int(char) for char in s.split())