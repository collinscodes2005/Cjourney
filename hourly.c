#include<stdio.h>
//code to show weekly wages 
// R - hourly rate
//First 40 hours...They get paid 40R
/*
Next 16 hours they get paid ( 1.25R * 16)
Any further hours: 1.5R * FH (where Fh is value for the further hours)
*/
main(){
    float hr_work;
    float r;
    printf("Input the number of hour worked by staff: \n");
    scanf("%f", &hr_work);
    printf("Input the hourly rate of pay: \n");
    scanf("%f", &r);

    //pay for first 40 hours of work
    if (hr_work >= 40){
        float first_pay;
        first_pay = r*40;
        float extra_st;

        extra_st = hr_work - 40;
        if (extra_st <= 16){
            float first_extra_money;
            first_extra_money = extra_st * 1.25 * r;
            int sum;
            sum = first_extra_money + first_pay;
            printf("The amount to be paid to the staff is %d", sum);
            
                    }
        else{
            float extra_extra_st ;
            float second_pay ;
            float remainder_pay;
            float last_rate_pay;
            remainder_pay = extra_extra_st - second_pay;
            second_pay = 16 * 1.25 * r;
            last_rate_pay = remainder_pay * 1.5 * r;
            //Total sum considering theabove occurence //
            float total_pay;
            total_pay = first_pay + second_pay + last_rate_pay;
            printf("The amount to be paid is %f",  total_pay);

        }
    }

   


}