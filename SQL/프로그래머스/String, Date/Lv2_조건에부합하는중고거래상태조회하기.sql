-- Mysql 조건에 부합하는 중고거래 상태 조회하기
-- USED_GOODS_BOARD 테이블에서 2022년 10월 5일에 등록된 중고거래 게시물의 게시글 ID, 작성자 ID, 게시글 제목, 가격, 거래상태를 조회하는 SQL문을 작성해주세요.
-- 거래상태가 SALE 이면 판매중, RESERVED이면 예약중, DONE이면 거래완료 분류하여 출력해주시고, 결과는 게시글 ID를 기준으로 내림차순 정렬해주세요.

select
 t.BOARD_ID
 , t.WRITER_ID
 , t.TITLE
 , t.PRICE
 , case
    when t.STATUS = 'SALE' then '판매중'
    when t.STATUS = 'RESERVED' then '예약중'
    when t.STATUS = 'DONE' then '거래완료'
 end as STATUS
from USED_GOODS_BOARD t
where 1=1
    and date_format(t.CREATED_DATE, '%Y-%m-%d') = '2022-10-05'
order by t.BOARD_ID desc
;