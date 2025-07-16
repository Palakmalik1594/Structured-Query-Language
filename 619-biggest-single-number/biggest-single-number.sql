SELECT MAX(num) AS num
FROM (
    SELECT MyNumbers.num
    FROM MyNumbers
    GROUP BY MyNumbers.num
    HAVING COUNT(MyNumbers.num) = 1
) AS MyNumbers;
