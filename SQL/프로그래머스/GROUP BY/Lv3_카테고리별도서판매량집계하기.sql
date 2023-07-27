-- Mysql 카테고리 별 도서 판매량 집계하기
-- 2022년 1월의 카테고리 별 도서 판매량을 합산하고, 카테고리(CATEGORY), 총 판매량(TOTAL_SALES) 리스트를 출력하는 SQL문을 작성해주세요.
-- 결과는 카테고리명을 기준으로 오름차순 정렬해주세요.

SELECT
    t.CATEGORY
    , sum(t.SALES) TOTAL_SALES
FROM (
    SELECT 
        b.*
        , s.SALES
    FROM BOOK b
    INNER JOIN BOOK_SALES s
        ON b.BOOK_ID = s.BOOK_ID
    WHERE 1=1
        AND date_format(s.SALES_DATE,'%Y-%m') = '2022-01'
    ) t
GROUP BY t.CATEGORY
ORDER BY CATEGORY
;

