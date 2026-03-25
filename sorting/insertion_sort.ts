function insertion_sort(arr: number[]): void {
    for (let i = 1; i < arr.length; i++) {
        let key: number = arr[i];
        let j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

let arr: number[] = new Array(1000);
let counter = 1000;

for (let i = 0; i < arr.length; i++) {
    arr[i] = counter;
    counter--;
}

insertion_sort(arr)
for (let i = 0; i < arr.length; i++) {
    console.log(arr[i]);
}
