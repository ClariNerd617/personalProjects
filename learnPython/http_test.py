import requests

url = 'https://jsonplaceholder.typicode.com/todos/1'
response = requests.get(url)


def check_request():
	if response.status_code is 200:
		message = 'success'
	elif response.status_code is 404:
		message = 'not found'
	else:
		message = 'error'
	return message


print(check_request())

