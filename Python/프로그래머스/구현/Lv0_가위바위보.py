# Python 가위 바위 보
# 가위는 2 바위는 0 보는 5로 표현합니다. 
# 가위 바위 보를 내는 순서대로 나타낸 문자열 rsp가 매개변수로 주어질 때, rsp에 저장된 가위 바위 보를 모두 이기는 경우를 순서대로 나타낸 문자열을 return하도록 solution 함수를 완성해보세요.

# sol1)
def solution1(rsp):
    answer = ''
    
    for i in rsp:
        if i == "2":
            answer += "0"
        elif i == "0":
            answer += "5"
        else:
            answer += "2"
    return answer

# sol2)
def solution2(rsp):
    win = {"2":"0","0":"5","5":"2"}
    return "".join([win[char] for char in rsp])


# 확인
if __name__ == "__main__":
    input_rsp = "205"
    actual_output = solution1(input_rsp)
    print(f"문자열: {actual_output}")