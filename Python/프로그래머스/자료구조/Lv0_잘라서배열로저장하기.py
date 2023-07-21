# Python 잘라서 배열로 저장하기
# 문자열 my_str과 n이 매개변수로 주어질 때, my_str을 길이 n씩 잘라서 저장한 배열을 return하도록 solution 함수를 완성해주세요.

def solution(my_str, n):
    answer = []
    idx = 0
    while idx < len(my_str):
        answer.append(my_str[idx : idx + n])
        idx += n
        #print(answer)
    return answer


# 확인
if __name__ == "__main__":  
    input_str = "abc1Addfggg4556b"
    input_n    = 6
    actual_output = solution(input_str,input_n)
    print(f"배열값: {actual_output}")