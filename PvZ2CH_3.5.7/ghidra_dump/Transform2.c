// Class: Transform2


/* Transform2::Transform2() */

void __thiscall Transform2::Transform2(Transform2 *this)

{
  DVec3::DVec3((DVec3 *)this);
  *(undefined4 *)(this + 0xc) = 0;
  return;
}


/* Transform2::Transform2(Sexy::SexyVector3 const&, float) */

void __thiscall Transform2::Transform2(Transform2 *this,SexyVector3 *param_1,float param_2)

{
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(float *)(this + 0xc) = param_2;
  return;
}

