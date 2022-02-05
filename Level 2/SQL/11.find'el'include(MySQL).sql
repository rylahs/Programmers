-- Programmers Level 2. 이름에 el이 들어가는 동물 찾기
-- https://programmers.co.kr/learn/courses/30/lessons/59047

-- 코드를 입력하세요
SELECT ANIMAL_ID, NAME
FROM ANIMAL_INS
WHERE NAME LIKE '%el%' and ANIMAL_TYPE = 'Dog'
ORDER BY NAME;