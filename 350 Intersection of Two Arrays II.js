/*!
 * Given two arrays, write a function to compute their intersection.
 * 
 * Example:
 * Given nums1 = [1, 2, 2, 1], nums2 = [2, 2], return [2, 2].
 * 
 * Note:
 * Each element in the result should appear as many times as it shows in both arrays.
 * The result can be in any order.
 * Follow up:
 * What if the given array is already sorted? How would you optimize your algorithm?
 * What if nums1's size is small compared to nums2's size? Which algorithm is better?
 * What if elements of nums2 are stored on disk, and the memory is limited such that you cannot load all elements into the memory at once?
 */

/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number[]}
 */
var intersect = function(nums1, nums2) {
    var res = [];
	
	//sort the two arrays as orderred.
    mergeSort(nums1, 0, nums1.length-1);   
    mergeSort(nums2, 0, nums2.length-1);
    
    var left = nums1.shift();
    var right= nums2.shift();
    
	//from start to end, compare two array.
    while(left!==undefined && right!==undefined) {        
        if(left === right){
            res.push(left);
            left = nums1.shift();
            right = nums2.shift();
        } else if(left < right){            
            left = nums1.shift();                        
        } else {            
            right = nums2.shift();
        }
    }
    
    function mergeSort(arr,low,height){        
        var mid=(low+height) >>> 1;        
        if(low<height){
            mergeSort(arr,low,mid);
            mergeSort(arr,mid+1,height);
            merge(arr,low,mid,height);
        }
    }
    
    function merge(arr,low,mid,height){
        var i=0,j=low,k=0,l=[],r=[];
        while(i<mid-low+1){
            l[i++]=arr[j++];
        }
        l[i]=Number.MAX_VALUE;
        i=0;
		j=mid+1
        while(i<height-mid){
           r[i++]=arr[j++];
        }
        r[i]=Number.MAX_VALUE;
        i=j=0;
        for(k=low;k<=height;k++) {
            if(l[i]<r[j]){
                arr[k]=l[i++];
            }else{
                arr[k]=r[j++];
            }
        }  
    }
    return res;
};
