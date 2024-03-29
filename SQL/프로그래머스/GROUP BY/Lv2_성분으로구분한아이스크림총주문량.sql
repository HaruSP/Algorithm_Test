-- Mysql 성분으로 구분한 아이스크림 총 주문량
-- 상반기 동안 각 아이스크림 성분 타입과 성분 타입에 대한 아이스크림의 총주문량을 총주문량이 작은 순서대로 조회하는 SQL 문을 작성해주세요. 
-- 이때 총주문량을 나타내는 컬럼명은 TOTAL_ORDER로 지정해주세요.

SELECT
    i.INGREDIENT_TYPE
    , sum(t.TOTAL_ORDER) as TOTAL_ORDER
FROM FIRST_HALF t
LEFT JOIN ICECREAM_INFO i
    ON t.FLAVOR = i.FLAVOR
GROUP BY i.INGREDIENT_TYPE
ORDER BY t.TOTAL_ORDER
;