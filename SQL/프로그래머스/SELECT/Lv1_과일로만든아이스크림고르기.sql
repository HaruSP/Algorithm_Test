-- Mysql 과일로 만든 아이스크림 고르기
-- 상반기 아이스크림 총주문량이 3,000보다 높으면서 아이스크림의 주 성분이 과일인 아이스크림의 맛을 총주문량이 큰 순서대로 조회하는 SQL 문을 작성해주세요.

SELECT
    t.FLAVOR
FROM FIRST_HALF t
LEFT JOIN ICECREAM_INFO i
    ON t.FLAVOR = i.FLAVOR
WHERE 1=1
    AND t.TOTAL_ORDER > 3000
    AND i.INGREDIENT_TYPE = 'fruit_based'
ORDER BY t.TOTAL_ORDER desc
;