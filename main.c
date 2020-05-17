//디즈니 설문조사 코드입니다.

#include <stdio.h>

//함수 정의
void male_choice();//남성질문지
void female_choice();//여성질문지
void male_question1();//남성질문지 보기1
void male_question2();//남성질문지 보기2
void female_question1();//여성질문지 보기1
void female_question2();//여성질문지 보기2

int main(void) {

    //변수 선언
    int start = 0;//시작 여부 변수
    int gender = 0;//캐릭터 성별 변수
    
    printf("간이 디즈니 설문조사입니다.\n");

    //반복문-while의 조건부에 1을 넣음으로서 무한으로 반복하는 반복문(무한루프)을 생성
    while(1){

        //시작 및 종료 입력
        printf("시작하시겠습니까? (1:yes,2:no)");
        scanf("%d",&start);

        //조건문-start가 1로 입력되었을 때
        if(start==1){

            //캐릭터 성별 입력
            printf("캐릭터의 성별을 고르시오.(남성: 1, 여성:2)");
            scanf("%d",&gender);
            
            //입력된 캐릭터 성별을 switch문의 케이스로 이용, 각 케이스별 함수로 이동하게 함.
            switch (gender){
                //gender가 1일때
                case 1:
                    male_choice();
                    break;
                //gender가 2일때
                case 2:
                    female_choice();            
                    break;
                //gender에 1,2외의 다른 값을 넣었을 때
                default:
                    printf("1 또는 2 중에서 고르시오.\n");
                    break;
            }
        }
        
        //조건문-start가 2로 입력되었을 때
        else if(start==2){
            printf("종료합니다.\n");
            //위의 무한루프 while(1)을 탈출시킴
            break;
        }
    }
    

    return 0;
}

//main함수의 switch문에서 1을 택하였을 경우의 함수
void male_choice(){
    //변수 선언
    int choice_1=0;//첫 번째 선택 변수
    int choice_2=0;//두 번째 선택 변수

    printf("다음 중 가장 좋아하는 캐릭터는?\n");
    //male_question1함수 호출
    male_question1();
    scanf("%d",&choice_1);
    
    printf("다음 중 가장 좋아하는 노래는?\n");
    //male_question2함수 호출
    male_question2();
    scanf("%d",&choice_2);
    
}

//main함수의 switch문에서 2를 택하였을 경우의 함수
void female_choice(){
    int choice_1=0;//첫 번째 선택 변수
    int choice_2=0;//두 번째 선택 변수
    
    printf("다음 중 가장 좋아하는 캐릭터는?\n");
    //female_question1함수 호출
    female_question1();
    scanf("%d",&choice_1);
    
    printf("다음 중 가장 좋아하는 노래는?\n");
    //female_question2함수 호출
    female_question2();
    scanf("%d",&choice_2);
}

//남성 질문지 보기1
void male_question1(){
    //'\t'란 글자와 글자 사이에 tab처리를 하여 공간을 띄어주는 이스케이프 시퀸스입니다.
    printf("1. 알라딘의 알라딘\t2.모아나의 마우이\t3.라푼젤의 플린라이더\t4.겨울왕국의 크리스토프\n");
}

//남성 질문지 보기2
void male_question2(){
    printf("1. a whole new world\t2. Lost in the woods\t3. I'll make a man out of you\t4. under the sea\n");
}

//여성 질문지 보기1
void female_question1(){
    printf("1. 알라딘의 자스민\t2.모아나의 모아나\t3.라푼젤의 라푼젤\t4.겨울왕국의 엘사\n");
}

//여성 질문지 보기2
void female_question2(){
    printf("1. speechless\t2. How far I'll go\t3. In to the unknown\t4. Let it go\n");
}
