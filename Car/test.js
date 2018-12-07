function setSpeed(motor, speed) {
  console.log({ motor, speed })
}

function getCadran(directionAngle) {
  const cadranAngle = 90;
  let nrCadran = Math.floor(directionAngle / cadranAngle);
  const mod = directionAngle % cadranAngle;

  if (mod > 0) {
    nrCadran++;
  }
  if (nrCadran == 0) {
    nrCadran++;
  }

  return nrCadran;

}

function move(speed, directionAngle) {
  console.log(`move speed: ${speed}, angle: ${directionAngle}`);

  const kVal = speed / 45;
  const calculatedSpeed = speed - (kVal * directionAngle);
  const cadran = getCadran(directionAngle);

  if (cadran == 4) {
    setSpeed('left', calculatedSpeed);
    setSpeed('right', speed);
  } else if (cadran == 1) {
    setSpeed('left', speed);
    setSpeed('right', calculatedSpeed);
  }
  return calculatedSpeed;
}

// move(200, 2);
move(200, 10);

