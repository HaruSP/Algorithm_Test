-- Mysql 자동차 대여 기록 별 대여 금액 구하기
-- CAR_RENTAL_COMPANY_CAR 테이블과 CAR_RENTAL_COMPANY_RENTAL_HISTORY 테이블과 CAR_RENTAL_COMPANY_DISCOUNT_PLAN 테이블에서 자동차 종류가 '트럭'인 자동차의 대여 기록에 대해서 대여 기록 별로 대여 금액(컬럼명: FEE)을 구하여 대여 기록 ID와 대여 금액 리스트를 출력하는 SQL문을 작성해주세요. 
-- 결과는 대여 금액을 기준으로 내림차순 정렬하고, 대여 금액이 같은 경우 대여 기록 ID를 기준으로 내림차순 정렬해주세요.

SELECT 
    t.HISTORY_ID
    , ROUND(IF(PLAN_ID IS NULL, t.DAILY_FEE * t.datediff, t.DAILY_FEE * t.datediff * (1 - (0.01 * p.DISCOUNT_RATE))),0) AS FEE
FROM (
    SELECT 
        HISTORY_ID
        , DATEDIFF(END_DATE,START_DATE)+1 AS datediff
        , DAILY_FEE
        , CAR_TYPE
    FROM CAR_RENTAL_COMPANY_RENTAL_HISTORY h
    INNER JOIN CAR_RENTAL_COMPANY_CAR c
        ON H.CAR_ID=C.CAR_ID
    WHERE C.CAR_TYPE = '트럭'
    ) t
LEFT JOIN CAR_RENTAL_COMPANY_DISCOUNT_PLAN p 
ON t.CAR_TYPE = p.CAR_TYPE AND
   CASE WHEN t.datediff BETWEEN 7 AND 29 THEN p.DURATION_TYPE LIKE '7%' 
        WHEN t.datediff BETWEEN 30 AND 89 THEN p.DURATION_TYPE LIKE '30%' 
        WHEN t.datediff >= 90 THEN p.DURATION_TYPE LIKE '90%' END
ORDER BY FEE DESC, t.HISTORY_ID DESC
;