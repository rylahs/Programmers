-- Programmers Level 2. 이름에 el이 들어가는 동물 찾기 (Oracle)
-- https://programmers.co.kr/learn/courses/30/lessons/59047

SELECT ANIMAL_ID, NAME
FROM ANIMAL_INS
WHERE upper(NAME) LIKE upper('%El%') and 
      ANIMAL_TYPE = 'Dog'
ORDER BY NAME;