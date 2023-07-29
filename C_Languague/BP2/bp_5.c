#include<stdio.h>

int main()
{
    float cp_tv=3500;
    float pp=27;
    float vat=12.7;
    float Service_Charge_PC=3.87;
    float sp,pp_vat_sc,sc;

    sp = cp_tv+cp_tv/100;
    pp_vat_sc = (pp+vat+Service_Charge_PC)*cp_tv/100;
    sc = Service_Charge_PC*cp_tv/100;

    printf("Selling Price: %.2f",sp); 
    printf("\nProfit along with VAT and Service Charge: %.2f",pp_vat_sc); 
    printf("\nService Charge: %.2f",sc); 
    return 0;
}