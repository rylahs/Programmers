-- Programmers Level 3. 없어진 기록 찾기 (MySQL)
-- https://programmers.co.kr/learn/courses/30/lessons/59042

SELECT ANIMAL_OUTS.ANIMAL_ID, ANIMAL_OUTS.NAME
FROM ANIMAL_OUTS LEFT OUTER JOIN ANIMAL_INS
ON ANIMAL_OUTS.ANIMAL_ID = ANIMAL_INS.ANIMAL_ID
WHERE ANIMAL_INS.ANIMAL_ID is NULL
ORDER BY ANIMAL_OUTS.ANIMAL_ID;