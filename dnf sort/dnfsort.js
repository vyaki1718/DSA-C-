var sortColors = function (nums) {
  var n = nums.length;
  var low = 0;

  var mid = 0;
  var high = n - 1;
  while (mid <= high) {
    if (nums[mid] === 0) {
      function swap(nums, low, mid) {
        var temp = mums[low];
        nums[low] = nums[mid];
        nums[mid] = temp;
      }
      low++, mid++;
    } else if (nums[mid] === 1) {
      mid++;
    } else {
      function swap(nums, mid, high) {
        var temp = nums[mid];
        nums[mid] = nums[high];
        nums[high] = temp;
      }
      high--;
    }
  }
};
var nums = [2, 0, 2, 1, 1, 0];

console.log(sortColors(nums));
