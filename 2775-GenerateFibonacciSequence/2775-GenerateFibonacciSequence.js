// Last updated: 13/05/2026, 21:15:18
/**
 * @return {Generator<number>}
 */
var fibGenerator = function*() {
    let a=0, b=1;

    while(true){
        yield a;
        let next  = a+b;
        a=b;
        b=next;
    }
};

/**
 * const gen = fibGenerator();
 * gen.next().value; // 0
 * gen.next().value; // 1
 */