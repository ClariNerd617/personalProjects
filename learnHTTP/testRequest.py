import requests as req

urls = ['https://jsonplaceholder.typicode.com/posts/1',
        'https://jsonplaceholder.typicode.com/posts']

dummy_data = {'id':1,
            'title':'eggs',
            'body':'spam',
            'userId':1}

def health_check():
    if response.status_code is 200 or 201 or 204:
        message = f'{response.status_code}: success'
    elif response.status_code is 404:
        message = f'{response.status_code}: not found'
    else:
        message = 'error: invalid status code'
    return message

response = req.get(urls[0])
print(health_check())

response = req.post(urls[1],dummy_data)
print(health_check())

response =req.put(urls[0],dummy_data)
print(health_check())

response = req.delete(urls[0])
print(health_check())

response = req.options(urls[0])
print(health_check())