class Solution {
public:
	void replaceSpace(char *str,int length) {
        if(str == NULL||length<0){
            return;
        }
        int ori_length = 0;
        int rep_length = 0;
        int blank_num = 0;
        for(int i=0;str[i] != '\0';i++){
            if(str[i] == ' '){
                blank_num++;
            }
            ori_length++;
        }
        rep_length = ori_length + 2*blank_num;
        if(rep_length+1 > length){
            return;
        }
        char *ptr1 = str + ori_length ;//+1
        char *ptr2 = str + rep_length ;
        while(ptr1 < ptr2){//*ptr1 != *ptr2
            if(*ptr1 == ' '){
                *ptr2--='0';
                *ptr2--='2';
                *ptr2--='%';
                *ptr1--;
            }else{
                *ptr2 = *ptr1;
                *ptr1--;
                *ptr2--;
            }
        }
	}
};
