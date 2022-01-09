-- Programmers Level 1. 이름이 없는 동물의 아이디 (MYSQL & Oracle)
-- https://programmers.co.kr/learn/courses/30/lessons/59039

SELECT ANIMAL_ID
FROM ANIMAL_INS
WHERE NAME IS NULL
ORDER BY ANIMAL_ID;