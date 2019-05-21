import requests

url = 'https://api.weather.gov/stations/kash/observations/latest'
response = requests.get(url)
