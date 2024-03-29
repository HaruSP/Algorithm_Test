-- Mysql Lv2 조건에 맞는 도서와 저자 리스트 출력하기
-- '경제' 카테고리에 속하는 도서들의 도서 ID(BOOK_ID), 저자명(AUTHOR_NAME), 출판일(PUBLISHED_DATE) 리스트를 출력하는 SQL문을 작성해주세요.
-- 결과는 출판일을 기준으로 오름차순 정렬해주세요.

SELECT
    b.BOOK_ID
    , a.AUTHOR_NAME
    , date_format(b.PUBLISHED_DATE, '%Y-%m-%d') as PUBLISHED_DATE
FROM BOOK b
INNER JOIN AUTHOR a
    ON b.AUTHOR_ID = a.AUTHOR_ID
WHERE 1=1
    AND b.CATEGORY = '경제'
ORDER BY PUBLISHED_DATE