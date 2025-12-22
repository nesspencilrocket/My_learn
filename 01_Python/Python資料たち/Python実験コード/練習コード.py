import random

print("---学習を開始します---")

print("\n【1.変数とデータ型】")

text_data = "こんにちは"
int_data = 10
float_data = 3.5
bool_data = True
print(text_data)

print(int_data + float_data)

print("\n【2.文字列の操作】")

name = "パイソン"
level = 1

message = f"プレイヤー: {name}, レベル: {level}"

print(message)

print("\n【3.入力と計算】")

input_str = input("数字を入力してください(例: 5) > ")
number = int(input_str)
result = number * 10
print(f"{number}の 10倍は{result}です")

print("\n【4.リスト(配列)】")

items = ["剣", "盾", "薬"]
print(items[0])
items.append("地図")
print("地図")

print("\n 【5. 繰り返し(for)】")

for item in items:
    print(f"{item}を待っています")

for i in range(3):
    print(f"{i + 1} 回目の攻撃")


print("\n【6. 条件分岐】")

hp = random.randint(1, 100)
print(f"現在のHP: {hp}")

if hp >= 80:
    print("元気いっぱいです！")
elif hp >= 30:
    print("まだ戦えます。")
else:
    print("回復が必要です...")


print("\n【7.条件ループ】")
count = 3
while count > 0:
    print(f"カウントダウン:{count}")
    count = count - 1

print("スタート！")


print("\n【8.自作関数】")


def calc_price(price, count):
    total = price * count
    return total


apple_price = calc_price(100, 5)
orange_price = calc_price(50, 3)

print(f"リンゴの合計: {apple_price}円")
print(f"ミカンの合計: {orange_price}円")

print("\n---すべての学習工程が完了しました---")
