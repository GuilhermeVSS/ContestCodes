

function solve(lamps, points){
    const checkBegining = new Array(100010).fill(0);
    const checkingEnd = new Array(100010).fill(0);
    const countingOpenIntervals = new Array(100010).fill(0);

    for(const [begin, end] of lamps){
        checkBegining[begin]++;
        checkingEnd[end]++;
    }

    let openIntervals = 0;
    for(let i = 0; i < 100010; i++){
        if(checkBegining[i]){
            openIntervals += checkBegining[i];
        }
        countingOpenIntervals[i] = openIntervals;
        if(checkingEnd[i]){
            openIntervals -=  checkingEnd[i];
        }
    }
    
    const answer =[];
    console.log(countingOpenIntervals.slice(1, 12));
    for(const point of points){
        answer.push(countingOpenIntervals[point]);
    }
    return answer;
}

console.log(solve([[1,7],[5,11], [7,9]], [7,2,4,6,8]));
