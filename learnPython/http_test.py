import requests as req

def check():
	if r.status_code in [200, 201]:
		m = 'success'
	elif r.status_code is 204:
		if r.headers is not None:
			opts = r.headers['Access-Control-Allow-Methods']
			m = opts
		else:
			m = 'error: no options'
	elif r.status_code is 404:
		m = 'not found'
	else:
		m = 'error: invalid status code'
	return f'{r.status_code}: {m}'


urls = [
	'https://jsonplaceholder.typicode.com/posts/1',
	'https://jsonplaceholder.typicode.com/posts'
]

data = {'id': 1, 'title': 'eggs', 'body': 'spam', 'userId': 1}

# HTTP GET
for i in range(2):
	r = req.get(urls[i])
	print(f'GET TEST: {check()}\n')

# HTTP POST
r = req.post(urls[1], data)
print(f'POST TEST: {check()}\n')

# HTTP PUT
r = req.put(urls[0], data)
print(f'PUT TEST: {check()}\n')

# HTTP DELETE
r = req.delete(urls[0])
print(f'DELETE TEST: {check()}\n')

# HTTP OPTIONS
for i in range(2):
	r = req.options(urls[i])
	print(f'OPTIONS TEST: {check()}\n')

print('yaaaas')
