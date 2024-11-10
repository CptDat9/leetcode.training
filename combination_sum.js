/**
 * @param {number[]} candidates
 * @param {number} target
 * @return {number[][]}
 */
var combinationSum = function(candidates, target) {
    const result = [];

    // Hàm đệ quy tìm tổ hợp
    const backtrack = (currentCombo, sum, start) => {
        if (sum === target) {
            result.push([...currentCombo]);
            return;
        }
        if (sum > target) {
            return;
        }

        // Đặt vòng lặp bên trong hàm `backtrack`
        for (let i = start; i < candidates.length; i++) {
            // thêm phần tử vào tổ hợp hiện tại
            currentCombo.push(candidates[i]);

            // dệ quy với tổng mới và tổ hợp mới
            backtrack(currentCombo, sum + candidates[i], i);

            // loại bỏ phần tử cuối cùng để thử tổ hợp khác
            currentCombo.pop();
        }
    };

    // bắt đầu đệ quy từ tổ hợp rỗng
    backtrack([], 0, 0);
    return result;
};

// Ví dụ sử dụng
// Kết quả: [[2, 2, 3], [7]]
