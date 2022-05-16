#ifndef WHATEVER_HPP
#define WHATEVER_HPP

// 宣言
// template <typename テンプレート仮引数名>
// 戻り値の型 関数テンプレート名(仮引数の並び);

// 定義
// template <typename テンプレート仮引数名>
// 戻り値の型 関数テンプレート名(仮引数の並び)
// {
//     本体のコード
// }

template <typename T>
void swap(T &x, T &y)
{
    T tmp = x;
    x = y;
    y = tmp;
}

template <typename T>
T min(T x, T y)
{
    if (x < y)
        return x;
    return y;
}

template <typename T>
T max(T x, T y)
{
    if (x > y)
        return x;
    return y;
}

#endif
