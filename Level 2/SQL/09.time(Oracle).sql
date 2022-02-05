-- Programmers Level 2. 입양 시각 구하기(1)(Oracle)
-- https://programmers.co.kr/learn/courses/30/lessons/59412

SELECT HOUR, COUNT(*) AS COUNT
FROM
    (SELECT TO_CHAR(DATETIME, 'HH24') AS HOUR
     FROM ANIMAL_OUTS)
WHERE HOUR BETWEEN 09 AND 19
GROUP BY HOUR
ORDER BY HOUR;
