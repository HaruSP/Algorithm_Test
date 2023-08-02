# Python Lv1 모의고사
"""
수포자는 수학을 포기한 사람의 준말입니다.
수포자 삼인방은 모의고사에서 수학 문제를 전부 찍으려 합니다.
수포자는 1번 문제부터 마지막 문제까지 다음과 같이 찍습니다.

1번 수포자가 찍는 방식: 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, ...
2번 수포자가 찍는 방식: 2, 1, 2, 3, 2, 4, 2, 5, 2, 1, 2, 3, 2, 4, 2, 5, ...
3번 수포자가 찍는 방식: 3, 3, 1, 1, 2, 2, 4, 4, 5, 5, 3, 3, 1, 1, 2, 2, 4, 4, 5, 5, ...

1번 문제부터 마지막 문제까지의 정답이 순서대로 들은 배열 answers가 주어졌을 때, 가장 많은 문제를 맞힌 사람이 누구인지 배열에 담아 return 하도록 solution 함수를 작성해주세요.
"""

def solution(answers):
    answer_types = [
        [1, 2, 3, 4, 5],
        [2, 1, 2, 3, 2, 4, 2, 5],
        [3, 3, 1, 1, 2, 2, 4, 4, 5, 5]
    ]
    scores = [0, 0, 0]
    
    for type_idx, ans_type in enumerate(answer_types):
        # print(type_idx, ans_type)
        for idx, ans in enumerate(answers):
            # print(ans, idx, len(ans_type), idx % len(ans_type))
            if ans == ans_type[idx % len(ans_type)]:
                scores[type_idx] += 1
    
    return [idx + 1 for idx, score in enumerate(scores) if score == max(scores)]



# 확인
if __name__ == "__main__":  
    input_answer = [1,3,2,4,2]
    actual_output = solution(input_answer)
    print(f"가장 많이 맞춘 사람: {actual_output}")