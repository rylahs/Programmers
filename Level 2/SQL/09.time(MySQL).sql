-- Programmers Level 2. 입양 시각 구하기(1)(MySQL)
-- https://programmers.co.kr/learn/courses/30/lessons/59412

SELECT HOUR(DATETIME) as HOUR, COUNT(ANIMAL_ID) as COUNT 
FROM ANIMAL_OUTS 
GROUP BY HOUR 
    HAVING HOUR BETWEEN 9 AND 19 
ORDER BY HOUR