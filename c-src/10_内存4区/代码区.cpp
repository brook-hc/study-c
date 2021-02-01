/*c++程序在执行时，将内存大致分为4个区：

        代码区：存放函数体的二进制代码，由操作系统管理。
        {
               存放机器指令，代码区是共享的，以便于重复调用；代码区是只读的，防止误修改。
        }

        全局区：存放全局变量，静态变量和常量。
      栈区：由编译器自动分配释放，存放函数的参数值和局部变量等。
      堆区：由程序员分配和释放，若程序员不释放，程序结束时由操作系统回收。
  */
  