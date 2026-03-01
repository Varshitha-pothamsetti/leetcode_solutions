-- Last updated: 01/03/2026, 20:19:00
# Write your MySQL query statement below
SELECT
  lb.book_id,
  lb.title,
  lb.author,
  lb.genre,
  lb.publication_year,
  COUNT(br.borrower_name) AS current_borrowers
FROM library_books AS lb
JOIN borrowing_records AS br
  ON lb.book_id = br.book_id
WHERE
  br.return_date IS NULL
GROUP BY
  lb.book_id,
  lb.title,
  lb.author,
  lb.genre,
  lb.publication_year,
  lb.total_copies
HAVING
  lb.total_copies = COUNT(br.borrower_name)
ORDER BY
  current_borrowers DESC,
  title ASC;