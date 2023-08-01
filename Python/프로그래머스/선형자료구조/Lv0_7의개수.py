# Python 7의 개수
# 머쓱이는 행운의 숫자 7을 가장 좋아합니다.
# 정수 배열 array가 매개변수로 주어질 때, 7이 총 몇 개 있는지 return하도록 solution 함수를 완성해보세요.

def solution(array):
    answer = 0
    for num in array:
        # print(num)
        for char in str(num):
            # print(char)
            if char == "7":
                answer += 1
    return answer


# 확인
if __name__ == "__main__":
    input_array = [7, 77, 17]
    actual_output = solution(input_array)
    print(f"7의 개수: {actual_output}")