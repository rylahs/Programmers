-- Programmers Level 2. 동명 동물 수 찾기(Oracle)
-- https://programmers.co.kr/learn/courses/30/lessons/59041

SELECT NAME, COUNT(NAME) AS COUNT
FROM ANIMAL_INS
GROUP BY NAME 
HAVING COUNT(NAME) >= 2
ORDER BY NAME;