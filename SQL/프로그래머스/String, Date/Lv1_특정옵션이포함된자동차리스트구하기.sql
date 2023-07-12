-- Mysql 특정 옵션이 포함된 자동차 리스트 구하기
-- CAR_RENTAL_COMPANY_CAR 테이블에서 '네비게이션' 옵션이 포함된 자동차 리스트를 출력하는 SQL문을 작성해주세요. 
-- 결과는 자동차 ID를 기준으로 내림차순 정렬해주세요.

SELECT
    *
FROM CAR_RENTAL_COMPANY_CAR t
WHERE 1=1
    AND t.OPTIONS LIKE '%네비게이션%'
ORDER BY CAR_ID desc
;