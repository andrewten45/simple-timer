# Basic Timer by Andrew Tennant

import time

t = int(input("Input in seconds: \n"))

while t:
    mins = t // 60
    secs = t % 60
    timer = '{:02d}:{:02d}'.format(mins, secs)
    print(timer, end="\r")
    time.sleep(1)
    t -= 1
print("Done!")