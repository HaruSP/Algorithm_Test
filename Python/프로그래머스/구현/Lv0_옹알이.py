# Python 옹알이(1)
# 머쓱이는 태어난 지 6개월 된 조카를 돌보고 있습니다. 조카는 아직 "aya", "ye", "woo", "ma" 네 가지 발음을 최대 한 번씩 사용해 조합한(이어 붙인) 발음밖에 하지 못합니다.
# 문자열 배열 babbling이 매개변수로 주어질 때, 머쓱이의 조카가 발음할 수 있는 단어의 개수를 return하도록 solution 함수를 완성해주세요.

def solution1(babbling):
    answer = 0
    words = ["aya", "ye", "woo", "ma"]
    
    for i in babbling:
        for j in words:
            i = i.replace(j, " ")
        if not i.strip():
            answer += 1
    return answer


# Python 옹알이(2)
# 머쓱이는 태어난 지 6개월 된 조카를 돌보고 있습니다. 조카는 아직 "aya", "ye", "woo", "ma" 네 가지 발음을 최대 한 번씩 사용해 조합한(이어 붙인) 발음밖에 하지 못합니다.
# 문자열 배열 babbling이 매개변수로 주어질 때, 머쓱이의 조카가 발음할 수 있는 단어의 개수를 return하도록 solution 함수를 완성해주세요.

def solution2(babbling):
    words = ["aya", "ye", "woo", "ma"]
    answer = 0
    
    for i in babbling:
        for j in words:
            if j * 2 in i:
                break
            i = i.replace(j," ")
        
        if not i.strip():
            answer += 1
    return answer


# 확인
if __name__ == "__main__":
    input_babbling = ["ayaye", "uuuma", "ye", "yemawoo", "ayaa"]
    actual_output = solution2(input_babbling)
    print(f"발음단어수: {actual_output}")