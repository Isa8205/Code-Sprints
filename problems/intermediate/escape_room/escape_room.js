function is_Disarium (num) {
    const numStr = num.toString();
    let sum = 0;
    for (let i = 0; i < numStr.length; i++) {
        sum += Math.pow(parseInt(numStr[i]), i + 1);
    }
    return sum === num
}

MediaSourceHandle.export = is_Disarium;
