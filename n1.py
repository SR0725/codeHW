import re

msg = "This  is   a  sentence with  too many  blanks."
msg_replace = re.sub(r"\s+", " ", msg)
print(msg_replace)
