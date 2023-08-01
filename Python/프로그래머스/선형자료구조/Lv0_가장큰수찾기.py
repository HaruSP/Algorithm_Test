# Python 가장 큰 수 찾기
# 정수 배열 array가 매개변수로 주어질 떄, 가장 큰 수와 그 수의 인덱스를 담은 배열을 return하도록 solution 함수를 완성해보세요.

# sol1)
def solution1(array):
    largest = max(array)
    # print(largest)
    return [largest, array.index(largest)]

# sol2)
def solution2(array):
    largest = 0
    index = None
    for idx, num in enumerate(array):
        # print(f"{idx}: {num}")
        # print(largest)
        if num > largest:
            largest = num
            index = idx
    return [largest, index]


# 확인
if __name__ == "__main__":
    input_array = [9, 10, 11, 8]
    actual_output = solution1(input_array)
    print(f"7의 개수: {actual_output}")