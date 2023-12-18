package com.string;

public class Substring {
    /*this algorithm fails when same characters comes two or more times subsequently*/
    public boolean checkSubString(String main_str,String sub_str){
        int main_str_len = main_str.length();
        int sub_str_len = sub_str.length();
        int i=0,j=0,f=0;
        while(i<main_str_len){
            if(main_str.charAt(i++)==sub_str.charAt(j++)){
                f=1;
            } else {
                j=0;
                f=0;
            }
            if(j==sub_str_len) break;
        }
        if(f==1)
            return true;
        return false;
    }
    public static void main(String[] arg){
        Substring a = new Substring();
        System.out.println(a.checkSubString("aasdfgh","asd"));
        /*Expected Output: True
        * Output: False
        * This is an error
        * So, Try to use naive or KMP algorithm */
    }
}

