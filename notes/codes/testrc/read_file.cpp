#include <iostream>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>


int main(){
    //打开文件
    int fd = open("example.txt",O_RDONLY);
    if(fd<0) {
        std::cout<<"open error!";
    }

    char buf[1024];
    //int n = read(fd, buf, sizeof(buf));
    bool flag =true;
    long total_bytes = 0;
    ssize_t n;

    while (flag)
    {
       n = read(fd,buf,sizeof(buf));
       if (n<=0) {
            flag = false;
            break;
       }
       total_bytes += n;
    }
    
    //关闭文件
    close(fd);
    std::cout<<"finish!"<<std::endl;
    return 0;
}
