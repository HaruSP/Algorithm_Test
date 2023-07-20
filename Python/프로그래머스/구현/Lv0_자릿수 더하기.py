# Python 자릿수 더하기
# 정수 n이 매개변수로 주어질 때 n의 각 자리 숫자의 합을 return하도록 solution 함수를 완성해주세요

def solution(n):
    answer = 0
    while n:
        answer += n % 10
        n //= 10

    return answer


# 확인
if __name__ == "__main__":  
    input_num = 987
    actual_output = solution(input_num)
    print(f"총합: {actual_output}")