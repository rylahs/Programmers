-- Programmers Level 2. NULL 처리하기(MySQL)
-- https://programmers.co.kr/learn/courses/30/lessons/59410
SELECT ANIMAL_TYPE, 
CASE
 WHEN NAME is NULL THEN 'No name'
 ELSE Name
 END AS NAME
, SEX_UPON_INTAKE
FROM ANIMAL_INS
ORDER BY ANIMAL_ID;