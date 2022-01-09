-- Programmers Level 1. 상위 n개 레코드 (Oracle ver)
-- https://programmers.co.kr/learn/courses/30/lessons/59405

SELECT NAME 
FROM (SELECT NAME FROM ANIMAL_INS ORDER BY DATETIME) 
WHERE ROWNUM <= 1;