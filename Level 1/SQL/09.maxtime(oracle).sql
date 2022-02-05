-- Programmers Level 1. 최댓값 구하기(Oracle)
-- https://programmers.co.kr/learn/courses/30/lessons/59039

SELECT DATETIME AS 시간
FROM (SELECT DATETIME FROM ANIMAL_INS ORDER BY DATETIME DESC)
WHERE ROWNUM <= 1;