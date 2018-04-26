> 关于语句，我觉得其实也没啥好说的，基本上每个语言都有，而且只要编程基本上就会用到，而且看起来也是件很无聊的事情，所以仍然还是主要记一下区别于别的语言又稍微有点难理解的东西吧         

# 5.1 简单语句
别漏写分号，也别多写分号。
当循环在条件部分就完成了工作的时候，通常会使用空语句，这时要注意加上注释。
# 5.2 语句作用域
# 5.3 条件语句
尽量使用花括号控制执行路径，避免悬垂else。
记住case语句为什么需要break，过程的处理方式。同时尽量在switch中写上default。
case标签：一个标签只能对应一个值，且标签的内容只能是整型常量表达式。
# 5.4 迭代语句
循环
范围for循环中，预存了end()的值，一旦在序列中添加（删除）元素，end函数的值就变得无效了。
do while循环：会首先执行一次do循环体。
# 5.5 跳转语句
break：负责终止离它最近的while、do while、for、或switch语句，并从这些语句之后的第一条语句开始继续执行。
continue：终止最近的循环体中的当前迭代并立即开始下一次迭代。
goto：不要用！
# 5.6 try语句块和异常处理
```
//一般通用语法
try{
    program-statements
}
catch(exception-declaration){
    handler-statements
}
catch(exception-declaration){
    handler-statements
}
```
