import pandas as pd
import requests
from bs4 import BeautifulSoup as bs

req = requests.get('https://www.basketball-reference.com/leagues/NBA_2018_totals.html')

content = req.content

soup = bs(content, 'html.parser')
#table = soup.find(name='table') caso somente uma tabela
table = soup.find(name='table', attrs={'id':'confs_standings_W'})

table_str = str(table)
df = pd.read_html(table_str)[0]