# Python 연속된 수의 합
# 연속된 세 개의 정수를 더해 12가 되는 경우는 3, 4, 5입니다. 두 정수 num과 total이 주어집니다. 
# 연속된 수 num개를 더한 값이 total이 될 때, 정수 배열을 오름차순으로 담아 return하도록 solution함수를 완성해보세요.

def get_middle_num(num, total):
    return total // num


def solution(num, total):
    middle_idx = num // 2
    
    middle_num = get_middle_num(num, total)
    
    start_num = middle_idx * - 1 if num % 2 == 1 else middle_idx * -1 + 1
    end_num = middle_idx + 1
    
    answer = [num + middle_num for num in range(start_num, end_num)]
    
    return answer


# 확인
if __name__ == "__main__":  
    input_num = 5
    input_total = 15
    actual_output = solution(input_num,input_total)
    print(f"정수 배열: {actual_output}")