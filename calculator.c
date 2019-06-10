#include<stdio.h>
int main()
{
    float input_1,input_2,output;
    int Operator;
    
    
    printf("Enter the two numbers you want to operate on.\n");
    scanf("%f %f",&input_1,&input_2);
    printf("Now enter '1' for addition '2' for subtraction '3' for multiplication '4' for division\n");
    scanf("%d",&Operator);
    
    
    switch(Operator)
    {
        case 1:
            output = input_1 + input_2;
            printf("Result is:%f\n",output);
            break;
    
        case 2:
            output = input_1 + input_2;
            printf("Result is :%f\n",output);
            break;
            
        case 3:
            output = input_1 * input_2;
            printf("Result is :%f\n",output);
            break;
            
        case 4:
            output = input_1 / input_2;
            printf("Result is :%f\n",output);
            break;
            
        default: printf("please provide a valid operator.\n");
    }
    return 0;
}
