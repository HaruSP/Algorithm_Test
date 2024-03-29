# Python k의 개수
# 1부터 13까지의 수에서, 1은 1, 10, 11, 12, 13 이렇게 총 6번 등장합니다. 정수 i, j, k가 매개변수로 주어질 때, i부터 j까지 k가 몇 번 등장하는지 return 하도록 solution 함수를 완성해주세요.

def solution(i, j, k):
    answer = 0
    for num in range(i, j + 1):
        for char in str(num):
            if char == str(k):
                answer += 1
    return answer


# 확인
if __name__ == "__main__":  
    input_i = 10
    input_j = 50
    input_k = 5
    actual_output = solution(input_i,input_j,input_k)
    print(f"k 횟수: {actual_output}")