def f():
    try:
        1/0
    except:
        print('error')
    finally:
        return 42


print(f())
