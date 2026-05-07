// Class: PathInfo


/* PathInfo::PathInfo(Sexy::SexyVector3 const&, float, float) */

void __thiscall PathInfo::PathInfo(PathInfo *this,SexyVector3 *param_1,float param_2,float param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_1;
  *(float *)this = param_2;
  *(undefined8 *)(this + 4) = uVar1;
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 8);
  *(float *)(this + 0x10) = param_3;
  return;
}


/* PathInfo::PathInfo() */

void __thiscall PathInfo::PathInfo(PathInfo *this)

{
  undefined4 uVar1;
  
  *(undefined4 *)this = 0;
  DVec3::DVec3((DVec3 *)(this + 4));
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x10) = uVar1;
  return;
}


/* PathInfo::TEMPNAMEPLACEHOLDERVALUE(PathInfo&&) */

PathInfo * __thiscall PathInfo::operator=(PathInfo *this,PathInfo *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 4),(SexyVector3 *)(param_1 + 4));
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  return this;
}

