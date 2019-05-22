import requests as req

class health:

    def check():
        if response.status_code in [200, 201]:
            message = 'success'
        elif response.status_code is 204:
            if response.headers is not None:
                options = response.headers['Access-Control-Allow-Methods']
                message = f'{options}'
            else:
                message = 'error: no options'
        elif response.status_code is 404:
            message = 'not found'
        else:
            message = 'error: invalid status code'
        return f'{response.status_code}: {message}'
    
    urls = ['https://jsonplaceholder.typicode.com/posts/1',
            'https://jsonplaceholder.typicode.com/posts']
        
    dummy_data = {'id': 1,
                'title': 'eggs',
                'body': 'spam',
                'userId': 1}

response = req.get(health.urls[0])
print(health.check())

response = req.post(health.urls[1], health.dummy_data)
print(health.check())

response = req.put(health.urls[0], health.dummy_data)
print(health.check())

response = req.delete(health.urls[0])
print(health.check())

response = req.options(health.urls[0])
print(health.check())