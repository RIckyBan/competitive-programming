# デバッグ集

・for文でループする
```
for(int i = 0; i < p; ++p){
}
```

・コンパイルエラーになる
ヘッダファイル読み忘れ

```
<stdio.h>
<math.h>

```

・for分の範囲に=を忘れる
考察不足

・サンプル以外の例を考えない
サボらないで

・オーバーフロー
(特に掛け算する時は)まず計算量を考えて、解答の型を決める。

・ダミー変数に気をつける
全探索の際に計算量を減らすことができる

・計算を定式化し、個々の要素に書き直す
計算量を減らせる。

・必要十分条件から攻める
「少なくともn回以上」→「逆にn回で十分処理を行うことができる」

・添字ミスに気をつける

・解の取り得る範囲を考える

