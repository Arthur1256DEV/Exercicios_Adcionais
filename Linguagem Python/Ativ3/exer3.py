from datetime import datetime

import requests
from bs4 import BeautifulSoup as bs
import pandas as pd

texto_string = requests.get('https://globoesporte.globo.com/').text
hora_extracao = datetime.now().strftime("%d-%m-%Y  %H:%M:%S")

bsp_texto = bs(texto_string, 'html.parser')
lista_noticias = bsp_texto.find_all('div', attrs={'class':'feed-post-body'})
print("Quantidade de manchetes = ", len(lista_noticias))

lista_noticias[0].contents
lista_noticias[1].contents[1].text.replace('"', "")

lista_noticias[0].find('a').get('href')

descricao = lista_noticias[0].contents[2].text

if not descricao:
    descricao = noticia.find('div', attrs={'class': 'bstn-related'})
    descricao = descricao.text if descricao else None

metadados = lista_noticias[0].find('div', attrs={'class':'feed-post-metadata'})

time_delta = metadados.find('span', attrs={'class': 'feed-post-datetime'})
secao = metadados.find('span', attrs={'class': 'feed-post-metadata-section'})

print('time_delta = ', time_delta)
print('secao = ', secao)

dados = []

for noticia in lista_noticias:
    manchete = noticia.contents[1].text.replace('"', "")
    link = noticia.find('a').get('href')

    descricao = noticia.contens[2].text
    if not descricao:
        descricao = noticia.find('div', attrs={'class': 'bstn-related'})
        descricao = descricao.text if descricao else None

    metadados = noticia.find('div', attrs={'class': 'feed-post-metadata'})
    time_delta = metadados.find('span', attrs={'class': 'feed-post-datetime'})
    secao = metadados.find('span', attrs={'class':'feed-metadata-section'})

    time_delta = time_delta.text if time_delta else None
    secao = secao.text if secao else None

    dados.append((manchete, descricao, link, secao, hora_extracao, time_delta))
    df = pd.DataFrame(dados, columns=['manchete', 'descricao', 'link', 'secao', 'hora_extracao', 'time_delta'])
    df.head()


