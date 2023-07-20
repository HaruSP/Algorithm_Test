# Python 문자열 계산하기
# my_string은 "3 + 5"처럼 문자열로 된 수식입니다. 
# 문자열 my_string이 매개변수로 주어질 때, 수식을 계산한 값을 return 하는 solution 함수를 완성해주세요.

# Sol 1
def solution1(my_string):
    answer = 0
    operator = ""
    
    for char in my_string.split():
        if char in ["+","-"]:
            operator = char
        else:
            if operator == "+":
                answer += int(char)
            elif operator == "-":
                answer -= int(char)
            else:
                answer = int(char)
    return answer

# Sol 2
def solution2(my_string):
    return eval(my_string)

# eval : eval 함수는 매개변수로 식을 받아서 실행하는 함수이다.
# 단, SQL Injection 등 보안문제에 취약하므로 실코드에서 사용



# 확인
if __name__ == "__main__":
    input_str = "3 + 4"
    actual_output = solution1(input_str)
    print(f"수식 값: {actual_output}")