Cho dãy A gồm 5 phần tử được sắp xếp ngẫu nhiên như sau: 12, 4, 8 , 9, 2.

i=0 ( lấy phần tử a1= 12),

j= i+1; ( lấy phần tử a2= 4),

so sánh: a1 và a2. Do 12 > 4 nên đổi chỗ giữa 12 và 4 ta có được dãy

4, 12, 8, 9, 2.

Tăng j lên: j +1= 2.( lấy phần tử a3 so sánh với a1).

Do 4<8 nên không đổi chỗ a1 và a3.

Tiếp tục tăng j lên 1 đơn vị ta được j=3( lấy phần tử a4 so sánh  với a1).

Do 4<9 nên không đổi chỗ a1 và  a4.

Tiếp tục tăng j lên 1 đơn vị ta được j=4(lấy phần tử a5 so sánh với a1).

Do 4>2 nên đổi chỗ a1 và a5 ta được dãy mới:

2, 4, 12, 8, 9.

Tiếp tục tăng j lên 1 đơn vị ta được j=5 > N( số phần tử trong mảng) nên dừng lại. Sau đó tăng i lên i lên 1 đơn vị ta được i=2.

j= i +1=3;

So sánh a2 và a3 ta xét thấy: 4<12 nên không cần đổi chỗ.

Tăng j lên 1 đơn vị ta được j=4;

So sánh a2  và a4. Xét thấy 4<8 nên không cần đổi chỗ.

Tăng j lên 1 đơn vị ta được j=5. Tương tự do 4<9 nên không cần đổi chỗ.

Tăng j lên 1 đơn vị: j=6 > N nên dừng lại và tăng i lên 1 ta được i=3.

j=i+1=4;

So sánh a3 và a4.. Xét thấy 12>8 nên đổi chỗ a3 và a4 ta được dãy mới:

2, 4, 8, 12, 9.

Tăng j lên 1 đơn vị ta được j=5. So sánh a3 và a5. Do 8< 9 nên không cần đổi chỗ.

Tăng j lên 1 đơn vị ta được j=6 >N nên dừng và tăng i lên 1 ta được i=4;

j=i+1=5.

So sánh a4 và a5. Xét thấy 12>9 nên đổi chỗ ta được dãy mới:

2, 4, 8, 9, 12.

Tăng j lên 1 đơn vị ta được j=6> N nên dừng lại là tăng i lên 1 ta được i=5. Do i=5=N nên ta dừng thuật toán ở đây và xét thấy dãy cũng đã được sắp xếp hoàn chỉnh.
