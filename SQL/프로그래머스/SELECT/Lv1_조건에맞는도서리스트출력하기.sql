-- Mysql Lv1 조건에 맞는 도서 리스트 출력하기
-- BOOK 테이블에서 2021년에 출판된 '인문' 카테고리에 속하는 도서 리스트를 찾아서 도서 ID(BOOK_ID), 출판일 (PUBLISHED_DATE)을 출력하는 SQL문을 작성해주세요.
-- 결과는 출판일을 기준으로 오름차순 정렬해주세요.

SELECT
    b.BOOK_ID
    , date_format(b.PUBLISHED_DATE, '%Y-%m-%d') PUBLISHED_DATE
FROM BOOK b
WHERE 1=1
    AND year(b.PUBLISHED_DATE) = 2021
    AND b.CATEGORY = '인문'
ORDER BY b.PUBLISHED_DATE
;