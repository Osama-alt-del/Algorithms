/* このファイルでクイックソートの関数を造ります*/

/* What is quick sort?:
	１．ある適当な値を決めて、それより大きいものは後ろへ、小さいものは前へ移動する
	２．二つに分けたそれぞれのグループの中でまた適当な値を決めて、それより大きい
	ものは後ろへ、小さいものは前へ移動する。
	３．それ以上グループ分け出来なくなるまで１と２を繰り返す。

	これは一般的に最も多く使われているソート
*/

// いつ始まる、または、いつ終わるというパラメターが必要
// I would have to make start 0 at first, which is ok I guess for now
void quickSort(int* array, int size, int start){
	// どうやって分ける？
	// 回帰的関数で行けると思う。
	// 終了条件は？

	// 終了条件：
	if (size <=1){
		return;
	}

	// srand(time(NULL));
	// 適当な値の為に (スタートとサイズの間の値）
	int randIndex = rand() % size + start;

	for (int i = start; i < size; i++){
		if (array[i] > array[randIndex]){
			array[i] = /* どうすればいい？ */;
		}
		if (array[i] < array[randIndex]){
			array[i] = /* どうすればいい？ */;
		}
	}
	// But start never changes, so it will always be 0?
	// Is that ok?
	quickSort(array, start, randIndex);
	quickSort(array, randIndex, size);

	
}

