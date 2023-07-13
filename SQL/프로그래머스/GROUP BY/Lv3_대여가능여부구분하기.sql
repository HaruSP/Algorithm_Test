-- Mysql 자동차 대여 기록에서 대여중 / 대여 가능 여부 구분하기
-- CAR_RENTAL_COMPANY_RENTAL_HISTORY 테이블에서 2022년 10월 16일에 대여 중인 자동차인 경우 '대여중' 이라고 표시하고, 대여 중이지 않은 자동차인 경우 '대여 가능'을 표시하는 컬럼(컬럼명: AVAILABILITY)을 추가하여 자동차 ID와 AVAILABILITY 리스트를 출력하는 SQL문을 작성해주세요. 
-- 이때 반납 날짜가 2022년 10월 16일인 경우에도 '대여중'으로 표시해주시고 결과는 자동차 ID를 기준으로 내림차순 정렬해주세요.

SELECT
    t.CAR_ID
    ,case
        when t.CAR_ID IN (
            select 
                t.CAR_ID
            from CAR_RENTAL_COMPANY_RENTAL_HISTORY t
            where '2022-10-16' between t.START_DATE AND t.END_DATE
            ) then '대여중'
        else '대여 가능'
    end AVAILABILITY
FROM CAR_RENTAL_COMPANY_RENTAL_HISTORY t
GROUP BY t.CAR_ID
ORDER BY t.CAR_ID desc
;