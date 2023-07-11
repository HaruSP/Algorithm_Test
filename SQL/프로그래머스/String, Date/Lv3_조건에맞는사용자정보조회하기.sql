-- Mysql 조건에 맞는 사용자 정보 조회하기
-- USED_GOODS_BOARD와 USED_GOODS_USER 테이블에서 중고 거래 게시물을 3건 이상 등록한 사용자의 사용자 ID, 닉네임, 전체주소, 전화번호를 조회하는 SQL문을 작성해주세요. 
-- 이때, 전체 주소는 시, 도로명 주소, 상세 주소가 함께 출력되도록 해주시고, 전화번호의 경우 xxx-xxxx-xxxx 같은 형태로 하이픈 문자열(-)을 삽입하여 출력해주세요. 
-- 결과는 회원 ID를 기준으로 내림차순 정렬해주세요.

select
    u.USER_ID
    ,u.NICKNAME
    ,concat(u.CITY,' ',u.STREET_ADDRESS1,' ',u.STREET_ADDRESS2) 전체주소
    ,concat(substring(TLNO,1,3),'-',substring(TLNO,4,4),'-',substring(TLNO,8,4)) 전화번호
from (
    select
        *
        ,row_number() over(partition by WRITER_ID order by board_id) as rnum
    from USED_GOODS_BOARD
    ) b
inner join USED_GOODS_USER u
    on b.WRITER_ID = u.USER_ID
where 1=1
    and b.rnum >= 3
group by u.USER_ID,u.NICKNAME
order by USER_ID desc
;