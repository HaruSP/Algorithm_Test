-- Mysql 특정 기간동안 대여 가능한 자동차들의 대여비용 구하기
-- CAR_RENTAL_COMPANY_CAR 테이블과 CAR_RENTAL_COMPANY_RENTAL_HISTORY 테이블과 CAR_RENTAL_COMPANY_DISCOUNT_PLAN 테이블에서 자동차 종류가 '세단' 또는 'SUV' 인 자동차 중 2022년 11월 1일부터 2022년 11월 30일까지 대여 가능하고 30일간의 대여 금액이 50만원 이상 200만원 미만인 자동차에 대해서 자동차 ID, 자동차 종류, 대여 금액(컬럼명: FEE) 리스트를 출력하는 SQL문을 작성해주세요. 
-- 결과는 대여 금액을 기준으로 내림차순 정렬하고, 대여 금액이 같은 경우 자동차 종류를 기준으로 오름차순 정렬, 자동차 종류까지 같은 경우 자동차 ID를 기준으로 내림차순 정렬해주세요.

SELECT 
    t.CAR_ID
    ,t.CAR_TYPE
    ,round(t.DAILY_FEE * 30 * (100 - p.DISCOUNT_RATE)/100) AS FEE
FROM CAR_RENTAL_COMPANY_CAR t
    JOIN CAR_RENTAL_COMPANY_DISCOUNT_PLAN p
        ON t.CAR_TYPE = p.CAR_TYPE AND p.DURATION_TYPE = '30일 이상'
WHERE t.CAR_TYPE IN ('세단', 'SUV')
    AND t.CAR_ID NOT IN (
        SELECT h.CAR_ID
        FROM CAR_RENTAL_COMPANY_RENTAL_HISTORY h
        WHERE h.END_DATE >= '2022-11-01' AND START_DATE <= '2022-11-30'
    )
HAVING FEE >= 500000 AND FEE < 2000000
ORDER BY FEE DESC, t.CAR_TYPE, t.CAR_ID DESC;