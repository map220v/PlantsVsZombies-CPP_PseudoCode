// Class: TestDragonInfo


/* TestDragonInfo::TestDragonInfo() */

void __thiscall TestDragonInfo::TestDragonInfo(TestDragonInfo *this)

{
  *(undefined4 *)this = 0;
  DVec3::DVec3((DVec3 *)(this + 4));
  DVec3::DVec3((DVec3 *)(this + 0x10));
  *(undefined4 *)(this + 0x1c) = 0;
  return;
}


/* TestDragonInfo::TestDragonInfo(float, Sexy::SexyVector3 const&, Sexy::SexyVector3 const&, float)
    */

void __thiscall
TestDragonInfo::TestDragonInfo
          (TestDragonInfo *this,float param_1,SexyVector3 *param_2,SexyVector3 *param_3,
          float param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_2;
  *(float *)this = param_1;
  *(undefined8 *)(this + 4) = uVar1;
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_2 + 8);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)param_3;
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_3 + 8);
  *(float *)(this + 0x1c) = param_4;
  return;
}


/* TestDragonInfo::TEMPNAMEPLACEHOLDERVALUE(TestDragonInfo&&) */

TestDragonInfo * __thiscall TestDragonInfo::operator=(TestDragonInfo *this,TestDragonInfo *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 4),(SexyVector3 *)(param_1 + 4));
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x10),(SexyVector3 *)(param_1 + 0x10));
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  return this;
}

