function ctg(x) { return 1 / Math.tan(x); }
// function arcctg(x) { return Math.PI / 2 - Math.atan(x); }

function toRadians(angle) {
  return angle * (Math.PI / 180);
}

function move(s, a) {
  const angle = a + 45;
  const rm = parseInt(Math.cos(toRadians(angle)) * s);
  const lm = parseInt(Math.sin(toRadians(angle)) * s);


  // const rMotorSpeed = parseInt(ctg(toRadians(angle)) * speed);
  // const lMotorSpeed = parseInt(arcctg(toRadians(angle)) * speed);

  console.log({ a, s, lm, rm });
}


move(200, 0);
move(200, 45);
move(200, 90);
move(200, 135);
move(200, 180);
move(200, 255);
move(200, 270);
move(200, 315);
move(200, 360);