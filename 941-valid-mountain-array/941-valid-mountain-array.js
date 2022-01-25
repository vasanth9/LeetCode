/**
 * @param {number[]} arr
 * @return {boolean}
 */
var validMountainArray = function(a) {
    const n = a.length;
    if(n<3) return false;
    let i=0,c=0,d=0;
    while(i<n-1&&a[i]<a[i+1]){
        i++;c=1;
    }
    console.log(i);
    while(i<n-1&&a[i]>a[i+1]){
        i++;d=1;
    }
    console.log(i);
    if(c&&d&&i==n-1) return true;
    return false;

};