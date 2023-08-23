# Graph-Coloring-Algorithm

## Thuật toán tô màu đồ thị

Đây là một chương trình C++ để tô màu các đỉnh của một đồ thị vô hướng

**Hàm DoThi**:
Hàm này đảm nhiệm việc đọc ma trận đồ thị từ một tệp tin và lưu nó vào mảng a.

`f=fopen("MATRAN.inp","r");`: Mở tệp "MATRAN.inp" trong chế độ đọc.

`if(!f) {printf("\nLoi mo file"); getch(); return 0;}`: Nếu không thể mở tệp, in thông báo lỗi, dừng chương trình và trả về 0.

`fscanf(f,"%d",&n);`: Đọc số đỉnh của đồ thị từ tệp.

Sử dụng hai vòng lặp lồng nhau để đọc các giá trị trong ma trận đồ thị và lưu vào mảng a.

**Hàm Bac**: Hàm tính bậc của các đỉnh trong đồ thị, cấp phát một mảng d chứa bậc của từng đỉnh. Sử dụng hai vòng lặp để tính tổng các phần tử trên mỗi dòng của ma trận a và lưu vào mảng d.

**Hàm swap**: Hàm này đơn giản là hoán đổi giá trị của hai biến nguyên.

**Hàm Arr**: Hàm này sắp xếp các đỉnh theo thứ tự giảm dần của bậc. Sử dụng mảng id để ghi nhớ vị trí ban đầu của các đỉnh.
Sử dụng thuật toán sắp xếp nổi bọt để sắp xếp mảng d (bậc) cùng với việc đổi chỗ các phần tử trong mảng id.

**Hàm tomau**: Hàm này thực hiện thuật toán tô màu đồ thị, cấp phát mảng m để lưu kết quả tô màu cho từng đỉnh. Gọi hàm Bac để tính bậc của các đỉnh và hàm Arr để sắp xếp các đỉnh theo bậc giảm dần.
Sử dụng mảng m để gán các màu cho từng đỉnh sao cho hai đỉnh kề nhau không có cùng màu, in kết quả số màu cần sử dụng và phân loại đỉnh theo màu.

**Hàm main**: Hàm chính của chương trình.
Khai báo biến số đỉnh n và ma trận đồ thị a.
Gọi hàm DoThi để đọc dữ liệu từ tệp vào n và a.
Gọi hàm tomau để tô màu đồ thị.

*Tóm lại, chương trình này đọc ma trận đồ thị từ tệp, tính toán bậc của các đỉnh, sắp xếp đỉnh theo bậc giảm dần và thực hiện thuật toán tô màu để đảm bảo các đỉnh kề nhau không cùng màu. Kết quả là in ra số màu cần sử dụng và phân loại các đỉnh theo màu.*
