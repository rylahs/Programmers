-- Programmers Level 2. 최소값 구하기(Oracle)
-- https://programmers.co.kr/learn/courses/30/lessons/59038

SELECT Min(DATETIME) AS 시간
FROM ANIMAL_INS
ORDER BY DATETIME

#
SELECT 시간 
FROM(SELECT DATETIME 시간 
    FROM ANIMAL_INS
    ORDER BY 1)
WHERE ROWNUM <= 1
