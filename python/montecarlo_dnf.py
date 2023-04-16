import random


def imitate(n: int) -> int:
    count = 0
    tmp = 0
    p = [1, 1, 1, 1, 0.8, 0.7, 0.6, 0.7, 0.6, 0.5]
    for i in range(n):
        match tmp:
            case 0 | 1 | 2 | 3:
                tmp += 1
            case 4 | 5 | 6:
                if random.random() > p[tmp]:
                    tmp -= 1
                else:
                    tmp += 1
            case 7 | 8:
                if random.random() > p[tmp]:
                    tmp -= 3
                else:
                    tmp += 1
            case 9:
                if random.random() > p[tmp]:
                    tmp -= 3
                else:
                    tmp = 0
                    count += 1

    return count


if __name__ == '__main__':
    list = []
    for i in range(100):
        list.append(imitate(1000000))
    print(list)
    sum = 0
    for li in list:
        sum += li
    print(sum / 100)
    exception = (100 * 1000000) / sum
    print('the 10 exception is %f' % exception)
