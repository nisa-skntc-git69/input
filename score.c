#include <stdio.h>
void main(){
    //สร้างตัวแปรสำหรับเก็บ คะแนนงาน(30),คะแนนจิตพิสัย(20),คะแนนสอบ(50)
    //สร้างตัวแปรชื่อว่า sum เพื่อเก็บคะแนนรวมและแสดงผลออกทางหน้าจอ
    int hw, afd, test;
    hw=25;
    afd=20;
    test=25;
    printf("Home work : %d",hw);
    printf("\nAffective Domain Score : %d",afd);
    printf("\nFinal Test Score : %d",test);
    int sum = hw+afd+test;
    printf("\nTotal Score is %d Point !!",sum);
}