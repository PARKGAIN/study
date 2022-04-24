import re
string = "(사람)11"
re.sub('[^A-Za-z0-9가-힣]', '', string)


'사람11'