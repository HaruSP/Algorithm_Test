-- Mysql 대여 기록이 존재하는 자동차 리스트 구하기
-- CAR_RENTAL_COMPANY_CAR 테이블과 CAR_RENTAL_COMPANY_RENTAL_HISTORY 테이블에서 자동차 종류가 '세단'인 자동차들 중 10월에 대여를 시작한 기록이 있는 자동차 ID 리스트를 출력하는 SQL문을 작성해주세요. 
-- 자동차 ID 리스트는 중복이 없어야 하며, 자동차 ID를 기준으로 내림차순 정렬해주세요.

SELECT 
    distinct t.CAR_ID
FROM CAR_RENTAL_COMPANY_CAR t
INNER JOIN CAR_RENTAL_COMPANY_RENTAL_HISTORY s
    ON t.CAR_ID = s.CAR_ID
WHERE 1=1
    AND MONTH(s.START_DATE) = 10
    AND t.CAR_TYPE = '세단'
ORDER BY t.CAR_ID desc
;