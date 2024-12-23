#!/bin/bash

if [ $# -ne 1 ]; then
  # (1>&2):1->2にリダイレクトすることで、標準エラー出力として表示する。
  echo "usage: ancp <contest_id>"
  echo "実行するには1個の引数が必要です。" 1>&2
else
  # 指定のディレクトリに第一引数で指定したabcXXXのディレクトリを作成
  cd "$HOME"/workspace/atcoder/atcoder_cpp && acc n "$1" --template cpp && cd "$1"/ || exit
fi
