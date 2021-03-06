import requests
from json import dumps


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
