/* このファイルでクイックソートの関数を造ります*/

/* What is quick sort?:
	１．ある適当な値を決めて(最初の値でもいい）、それより大きいものは後ろへ、小さいものは前へ移動する
	２．二つに分けたそれぞれのグループの中でまた適当な値を決めて、それより大きい
	ものは後ろへ、小さいものは前へ移動する。
	３．それ以上グループ分け出来なくなるまで１と２を繰り返す。

	これは一般的に最も多く使われているソート
	この動画がめっちゃいい：
		https://www.youtube.com/watch?v=7h1s2SojIRw&t=419s
*/

// いつ始まる、または、いつ終わるというパラメターが必要
int partition(int* array, int low, int high){
	int i, j, temp;
	int pivot = array[low];
	while (i < j){
		do{	/* while loop でも良い？ */
			i++; /* pivot より大きいのを見つけたらやめて、ｊが動き始める*/
		}while(array[i] <= pivot); /* ここはなぜ　＞＝　の方が良いのだろう */
		do{
			j--; /* pivot より小さいのがあったら、そのindex がわかる*/
		}while(array[i] > pivot);

		if (i < j){ /* この条件は必要、j とiがwhile のなかでかわるかもしれないから*/
		// pivot より大きい値と大きい値の位置を入れ替える
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
		}
	}
	// pivot のあるべき位置が分かった（ｊ）。だから入れ替える
	temp = array[j];
	array[low] = array[j];
	array[j] = array[low];
	return j; /* その位置をリターンする*/
}

void quickSort(int* array, int low, int high){
	if (low < high){ /*少なくとも、二つの値がある場合…*/
		 int j = partition(array, low, high);
		 quickSort(array, low, j);
		 quickSort(array, j+1, high);
	}
}


