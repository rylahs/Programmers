-- Programmers Level 1. 아픈 동물 찾기 (MYSQL & Oracle)
-- https://programmers.co.kr/learn/courses/30/lessons/59036

SELECT ANIMAL_ID, NAME
FROM ANIMAL_INS
WHERE INTAKE_CONDITION = 'Sick'
ORDER BY ANIMAL_ID;