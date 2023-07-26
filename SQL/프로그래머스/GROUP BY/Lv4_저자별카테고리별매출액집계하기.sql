-- Mysql 저자 별 카테고리 별 매출액 집계하기
-- 2022년 1월의 도서 판매 데이터를 기준으로 저자 별, 카테고리 별 매출액(TOTAL_SALES = 판매량 * 판매가) 을 구하여, 저자 ID(AUTHOR_ID), 저자명(AUTHOR_NAME), 카테고리(CATEGORY), 매출액(SALES) 리스트를 출력하는 SQL문을 작성해주세요.
-- 결과는 저자 ID를 오름차순으로, 저자 ID가 같다면 카테고리를 내림차순 정렬해주세요.

SELECT
    t.AUTHOR_ID
    , t.AUTHOR_NAME
    , t.CATEGORY
    # , s.SALES
    # , t.PRICE
    , sum(s.SALES * t.PRICE) as TOTAL_SALES
    # , s.SALES_DATE
FROM (
    SELECT 
        b.*
        , a.AUTHOR_NAME
    FROM BOOK b
    INNER JOIN AUTHOR a
        ON b.AUTHOR_ID = a.AUTHOR_ID
    ) t
INNER join BOOK_SALES s
    ON t.BOOK_ID = s.BOOK_ID
WHERE 1=1
    AND date_format(s.sales_date,'%Y-%m') = '2022-01'
GROUP BY t.AUTHOR_ID,t.CATEGORY
ORDER BY t.AUTHOR_ID, t.CATEGORY desc
;