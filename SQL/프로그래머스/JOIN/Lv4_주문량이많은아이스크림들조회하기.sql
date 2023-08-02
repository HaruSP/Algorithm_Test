-- Mysql Lv4 주문량이 많은 아이스크림들 조회하기
-- 7월 아이스크림 총 주문량과 상반기의 아이스크림 총 주문량을 더한 값이 큰 순서대로 상위 3개의 맛을 조회하는 SQL 문을 작성해주세요.

SELECT 
    t.FLAVOR
    # , t.TOTAL_ORDER
FROM
    (
    SELECT 
        *
    FROM FIRST_HALF h
    union
    SELECT
        *
    FROM JULY j
    ) t
GROUP BY t.FLAVOR
ORDER BY sum(t.TOTAL_ORDER) desc
limit 3
;
