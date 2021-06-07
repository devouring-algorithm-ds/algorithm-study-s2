const { checkStrfry } = require('./11328')

test("테스트테스트 :: checkStrfry", () => {
    expect(checkStrfry('a a')).toBe('Possible');
    expect(checkStrfry('ab ba')).toBe('Possible');
    expect(checkStrfry('ring gnir')).toBe('Possible');
    expect(checkStrfry('ring ngir')).toBe('Possible');
    expect(checkStrfry('arinng angir')).toBe('Impossible');
    expect(checkStrfry('newt twan')).toBe('Impossible');
});
