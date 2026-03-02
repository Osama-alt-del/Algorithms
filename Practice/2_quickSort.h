/* このファイルでクイックソートの関数を造ります*/
#include <stdio.h>
// In practice, I want to see if I can code it using just while loops instead of do{}while();
/* What is quick sort?:
	１．ある適当な値を決めて(最初の値でもいい）、それより大きいものは後ろへ、小さいものは前へ移動する
	２．二つに分けたそれぞれのグループの中でまた適当な値を決めて、それより大きい
	ものは後ろへ、小さいものは前へ移動する。
	３．それ以上グループ分け出来なくなるまで１と２を繰り返す。

	これは一般的に最も多く使われているソート
	この動画がめっちゃいい：
		https://www.youtube.com/watch?v=7h1s2SojIRw&t=419s
                (Learn the analysis as well

        Complexity:
            Time:  これの求め方を学んで
                最速と平均計算量: O(nlog(n))
                最悪計算量：O(n^2)
            Space:
                O(log(n)) (再起の深さ）
*/

// いつ始まる、または、いつ終わるというパラメターが必要
int partition(int* array, int low, int high){
	int i, j, temp;
        i = low;
        j = high; 
	int pivot = array[low];
	do{
		do{i++;}while(array[i] <= pivot);
		do{j--;}while(array[j] > pivot);
		if (i < j){
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
		}
	}while(i < j);
        // 次からはswapに気をつけろ
	temp = array[j];
	array[j] = array[low];
	array[low] = temp;
	return j;
}

void quickSort(int* array, int low, int high){
	if (low < high){ /*少なくとも、二つの値がある場合…*/
		 int j = partition(array, low, high);
		 quickSort(array, low, j);
		 quickSort(array, j+1, high);
	}
}

