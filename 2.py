import pyautogui
import time
time.sleep(4)
count=0
while count<=1000:
    pyautogui.typewrite(count)
    pyautogui.press("enter")
    count=count+1
