-- Programmers Level 1. 여러 기준으로 정렬하기 (MYSQL , Oracle 공통 코드)
-- https://programmers.co.kr/learn/courses/30/lessons/59404

SELECT ANIMAL_ID, NAME, DATETIME 
FROM ANIMAL_INS
ORDER BY NAME, DATETIME DESC;