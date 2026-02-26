/*
This is mergeSort 
    1. Splitting the arrays into two halves
    2. Splitting subarrays further
    3. Merge unit length cells into sorted subarrays
    4. Merge the sorted subarrays into sorted array
*/

void mergeSort(int* array, int start, int end){
    int temp; 
    if(end-start == 0) return; /* ひとつの値しかない場合は*/
    else if (end-start == 1){ /* ２つの整理されていない値があれば、位置を入れ替えてreturnする*/
        if (array[start] > array[end-1]){
            temp = array[start];
            array[start] = array[end-1];
            array[end-1] = temp;
        }
        return;
    }
    else if(end-start >= 2){ /* みつの値があれば、さらに分離する*/
        // 次のように、リストを分離できます
        mergeSort(array, start, end/2);
        mergeSort(array, end/2, end);
    }
}

