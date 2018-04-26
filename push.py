# -*-coding:utf-8 -*-
import os
print "开始提交代码到本地仓库"
#print "当前目录是：" + os.path
print "     "

os.system('git add - A .')
declation = input("输入变更：")
declationRe ='"'+declation+'"'
os.system('git commit - m declationRe')
os.system('git push origin master')

print "批处理执行完毕！"
