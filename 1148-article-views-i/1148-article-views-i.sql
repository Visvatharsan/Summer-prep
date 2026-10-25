# Write your MySQL query statement below
select distinct(va.author_id) as id from views va join views vb on va.article_id=vb.article_id where va.author_id = vb.viewer_id order by id asc;
