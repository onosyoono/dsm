def minion_game(string):
    vowels_sample = 'AEIOU'
    kevin_score = 0
    stuart_score = 0
    for i in range(len(string)):
        if string[i] in vowels_sample:
            kevin_score += (len(string)-i)
        else:
            stuart_score += (len(string)-i)

    if stuart_score > kevin_score:
        print("Stuart", stuart_score)      
    elif kevin_score == stuart_score:
        print("Draw")
    else:
        print("Kevin", kevin_score)


if __name__ == '__main__':
    s = input()
    minion_game(s)