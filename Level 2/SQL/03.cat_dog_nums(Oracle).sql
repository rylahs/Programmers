-- Programmers Level 2. 고양이와 개는 몇 마리 있을까 (Oracle)
-- https://programmers.co.kr/learn/courses/30/lessons/59040

SELECT ANIMAL_TYPE, COUNT(ANIMAL_TYPE) AS COUNT
FROM ANIMAL_INS
GROUP BY ANIMAL_TYPE
ORDER BY ANIMAL_TYPE;