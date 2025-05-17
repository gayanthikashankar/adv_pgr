'''
MULTITHREADING V MULTIPROCESSING

- single threaded: one math problem at a time form start to finish
- multithreaded:switch between multiple math problems when you get stuck or bored, working on a little bit of each one at a time
- multiprpcessing: friends and you work on different math problems at the same time, each with their own pencil and paper

MULTITHREADING
- different tasks that share the same memory space
- tasks that involve waiting
- threads can't truly run calculations at the same time (due to something called the Global Interpreter Lock or GIL)
- eg: downloading multiple files at the same time, or waiting for user input

MULTIPROCESSING
- processes that have their own memory space (diff people each with their own brain)
- taaks that involve heavy calculations
- can truly run calculations at the same time on different CPU cores











'''