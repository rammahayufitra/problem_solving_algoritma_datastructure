fn main(){
    let mut numbers = vec![1,2,2,4,5,6];

    for num in numbers.iter_mut(){
        *num *= 2; 
    }

    for num in numbers {
        println!("data {}", num);
    }
}

// fn main() {
//     // Loop `for` dengan rentang
//     println!("Using `for` with a range:");
//     for i in 1..=5 {
//         println!("Number: {}", i);
//     }

//     // Loop `while`
//     println!("\nUsing `while`:");
//     let mut count = 0;
//     while count < 5 {
//         count += 1;
//         println!("Count: {}", count);
//     }

//     // Loop `loop` tak terbatas
//     println!("\nUsing `loop`:");
//     let mut count = 0;
//     loop {
//         count += 1;
//         if count > 5 {
//             break;
//         }
//         println!("Count: {}", count);
//     }

//     // Iterasi melalui koleksi
//     println!("\nIterating through a collection:");
//     let numbers = vec![10, 20, 30, 40, 50];
//     for num in numbers {
//         println!("Number: {}", num);
//     }
// }
