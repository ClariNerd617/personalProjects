import requests
from json import dumps

# def get_loc():
# TODO: Implement this, should return [lat, lon]
# using Google's geocode REST API
# https://developers.google.com/maps/documentation/geocoding/start
# lat = loc['geometry']['location']['lat']
# lon = loc['geometry']['location']['lon']
# response = requests.get(f'https://api.weather.gov/points/{get_loc[0]},{get_loc[1]}').json()

# forecast_url = response['properties']['forecast']
# response = requests.get(forecast_url).json()
response = requests.get('https://api.weather.gov/gridpoints/GYX/41,12').json()


def get_value(var):
    val = round(response['properties'][f'{var}']['values'][0]['value'], 2)
    return val


keys = [
    'temperature', 'dewpoint', 'maxTemperature', 'minTemperature',
    'relativeHumidity', 'apparentTemperature', 'heatIndex', 'windChill',
    'windDirection', 'windSpeed', 'windGust', 'probabilityOfPrecipitation'
]

initial_values = []
for key in keys:
    initial_values.append(get_value(key))

initial_conditions = dumps(dict(zip(keys, initial_values)), indent=1)

print(initial_conditions)
