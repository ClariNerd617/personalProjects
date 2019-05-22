for url in health.urls:
    response = req.get(health.urls(url))
    print(health.check())