def generate_sublists(nums):
    n = len(nums)
    all_sublists = []
    
    # Iterasi melalui semua kemungkinan kombinasi biner dari 0 hingga 2^n
    for i in range(2**n):
        sublist = []
        # Konversi angka i menjadi representasi biner dan gunakan sebagai penanda kehadiran elemen
        for j in range(n):
            if (i >> j) & 1:
                sublist.append(nums[j])
        all_sublists.append(sublist)
    
    return all_sublists

nums = [10, 20, 30, 40]
sublists = generate_sublists(nums)
print(sublists)
           
 
    
   


