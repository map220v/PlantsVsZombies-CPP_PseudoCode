// Class: BulletTarget


/* BulletTarget::BulletTarget() */

void __thiscall BulletTarget::BulletTarget(BulletTarget *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  return;
}


/* BulletTarget::BulletTarget(Sexy::Point&, float) */

void __thiscall BulletTarget::BulletTarget(BulletTarget *this,Point *param_1,float param_2)

{
  Sexy::Point::Point((Point *)this);
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(float *)(this + 8) = param_2;
  return;
}

