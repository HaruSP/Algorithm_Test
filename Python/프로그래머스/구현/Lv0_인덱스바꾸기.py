# Python 인덱스 바꾸기
# 문자열 my_string과 정수 num1, num2가 매개변수로 주어질 때, my_string에서 인덱스 num1과 인덱스 num2에 해당하는 문자를 바꾼 문자열을 return 하도록 solution 함수를 완성해보세요.

def solution(my_string, num1, num2):
    answer = ''
    string = list(my_string)
    string[num1], string[num2] = string[num2], string[num1]
    # print(string)
    answer = ''.join(string)
    return answer


# 확인
if __name__ == "__main__":  
    input_str = "I love you"
    input_num1 = 3
    input_num2 = 6
    actual_output = solution(input_str,input_num1,input_num2)
    print(f"after str: {actual_output}")