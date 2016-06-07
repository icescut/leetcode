/*!
 * Write a function that takes a string as input and reverse only the vowels of a string.
 * 
 * Example 1:
 * Given s = "hello", return "holle".
 * 
 * Example 2:
 * Given s = "leetcode", return "leotcede".
 * 
 * Subscribe to see which companies asked this question
 */
/**
 * @param {string} s
 * @return {string}
 */
var reverseVowels = function(s) {
    var arr=s.split('');
    var left=[],right=[],l=0,h=arr.length-1,lf=false,rf=false;

	//if length<1, no need to compare
    if(h<1)return s;
	
    lf=search(arr[l]);
    rf=search(arr[h]);
    
	//two array:left and right, if both side found vowels, put to each other side.
    while(l<h){
        if(rf&&lf){
            left.push(arr[h--]);
            right.unshift(arr[l++]);
            rf=search(arr[h]);
            lf=search(arr[l]);
        }else if(lf){
            right.unshift(arr[h--]);
            rf=search(arr[h]);
        }else if(rf){
            left.push(arr[l++]);
            lf=search(arr[l]);
        }else{
            right.unshift(arr[h--]);
            rf=search(arr[h]);
            left.push(arr[l++]);
            lf=search(arr[l]);
        }
    }

    if(l==h){
        left.push(arr[l]);
    }
    
    function search(c){
        var v=['a','e','i','o','u','A','E','I','O','U'],len=v.length;
        for(var i=0;i<len;i++){
            if(c==v[i]){
                return true;
            }
        }
		return false;
    }
    
    return left.join('')+right.join('');
};
