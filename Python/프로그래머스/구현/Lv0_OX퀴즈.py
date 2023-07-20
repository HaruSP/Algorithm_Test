# Python OX 퀴즈
# 덧셈, 뺄셈 수식들이 'X [연산자] Y = Z' 형태로 들어있는 문자열 배열 quiz가 매개변수로 주어집니다. 
# 수식이 옳다면 "O"를 틀리다면 "X"를 순서대로 담은 배열을 return하도록 solution 함수를 완성해주세요.

def solution(quiz):
    answer = []
    for i in quiz:
        left, right = i.split(' = ')
        num1, operator, num2 = left.split()
        # print(f"num1: {num1}, op: {operator}, num2: {num2}")
        
        if operator == '+':
            left = int(num1) + int(num2)
        else:
            left = int(num1) - int(num2)
        # print(f"left: {left}")
        
        answer.append('O' if left == int(right) else 'X')
    return answer


# 확인
if __name__ == "__main__":  
    input_quiz = ["19 - 6 = 13", "5 + 66 = 71", "5 - 15 = 63", "3 - 1 = 2"]	
    actual_output = solution(input_quiz)
    print(f"OX 배열: {actual_output}")