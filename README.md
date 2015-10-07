## Xcode(すでに入ってる人は飛ばす)
- App StoreでXcode Install
- Xcode 起動
- Command Line Tools Install
  - http://qiita.com/3yatsu/items/47470091277d46f3fde2

## Homebrew(すでに入ってる人は飛ばす)
- http://brew.sh/index_ja.html
- ライブラリをインストールしたり管理するツール。MacPortsとかと同じ
- ターミナルを開く
- `ruby -e "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/master/install)"` をペーストして実行(Enter)

## OpenCV
- OpenCVをインストールする
- OpenCVなどの学術系ライブラリはHomebrewにデフォルトで入っていない
  - 一部の人しか使わないものは別途持ってこようという思想
  - https://github.com/Homebrew/homebrew-science を手元のHomebrewに登録して学術系ライブラリも使えるようにする
  - `brew tap homebrew/science`
  - これで準備完了、インストールする
- `brew install opencv3 --with-ffmpeg --with-jasper`

## Projectを作る
- 基本的には虎の巻のままやる。
- 注意点。
  - (4-6) `/opt/local/include` => `/usr/local/opt/opencv3/include`
  - (4-7) `/opt/local/lib` => `/usr/local/opt/opencv3/lib`
  - (4-10) oFとかやってる人はlibopencvが大量に出てくる可能性があるので、「Add Other...」をクリックした後に⌘ + Shift + Gを押して出てきたボックスに`/usr/local/opt/opencv3/lib`を入力。その中から16個の.dylibを取ってくることをおすすめする。
  - (4-12) 多分一旦Buildしないと`ローカルフォルダとなる場所`が生成されないので、(4-12)の前に⌘ + Bをして一旦Buildしておいた方が良いような気がする。

