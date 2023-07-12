-- Mysql 조건에 맞는 사용자와 총 거래금액 조회하기
-- USED_GOODS_BOARD와 USED_GOODS_USER 테이블에서 완료된 중고 거래의 총금액이 70만 원 이상인 사람의 회원 ID, 닉네임, 총거래금액을 조회하는 SQL문을 작성해주세요. 
-- 결과는 총거래금액을 기준으로 오름차순 정렬해주세요.

SELECT
    u.USER_ID
    ,NICKNAME
    ,TOTAL_SALES
FROM (
    SELECT
        t.WRITER_ID
        ,sum(t.PRICE) TOTAL_SALES
    FROM USED_GOODS_BOARD t
    WHERE 1=1
        AND t.STATUS = 'DONE'
    GROUP BY t.WRITER_ID, t.STATUS
    HAVING sum(t.PRICE) >= 700000
    ) b
INNER JOIN USED_GOODS_USER u
    ON b.WRITER_ID = u.USER_ID
ORDER BY TOTAL_SALES
;