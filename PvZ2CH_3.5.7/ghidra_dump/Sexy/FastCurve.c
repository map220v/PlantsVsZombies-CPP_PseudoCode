// Class: Sexy::FastCurve


/* Sexy::FastCurve::SetOutRange(float, float) */

void __thiscall Sexy::FastCurve::SetOutRange(FastCurve *this,float param_1,float param_2)

{
  *(float *)this = param_1;
  *(float *)(this + 4) = param_2;
  return;
}


/* Sexy::FastCurve::ClearTrigger() */

void __thiscall Sexy::FastCurve::ClearTrigger(FastCurve *this)

{
  this[0x18] = (FastCurve)0x0;
  return;
}


/* Sexy::FastCurve::HasBeenTriggered() */

FastCurve __thiscall Sexy::FastCurve::HasBeenTriggered(FastCurve *this)

{
  return this[0x18];
}


/* Sexy::FastCurve::FastCurve() */

void __thiscall Sexy::FastCurve::FastCurve(FastCurve *this)

{
  this[0x18] = (FastCurve)0x0;
  this[0x19] = (FastCurve)0x0;
  this[0x1a] = (FastCurve)0x0;
  *(undefined4 *)(this + 4) = 0x3f800000;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0x3f800000;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  return;
}


/* Sexy::FastCurve::InitFromCurveData() */

void __thiscall Sexy::FastCurve::InitFromCurveData(FastCurve *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  FastCurve FVar6;
  double dVar7;
  
  this[0x18] = (FastCurve)0x0;
  dVar7 = DAT_06bad010;
  FVar6 = DAT_06bad003;
  dVar5 = DAT_06bacff8;
  dVar4 = DAT_06bacff0;
  dVar3 = DAT_06bacfa0;
  dVar1 = DAT_06bacf90;
  this[0x1a] = DAT_06bad004;
  dVar2 = DAT_06bacf98;
  this[0x19] = FVar6;
  *(float *)this = (float)dVar2;
  *(float *)(this + 4) = (float)dVar3;
  *(float *)(this + 0x14) = (float)dVar7;
  *(float *)(this + 8) = (float)dVar4;
  *(float *)(this + 0xc) = (float)dVar5;
  *(float *)(this + 0x10) = (float)dVar1;
  return;
}


/* Sexy::FastCurve::SetConstant(float) */

void __thiscall Sexy::FastCurve::SetConstant(FastCurve *this,float param_1)

{
  this[0x18] = (FastCurve)0x0;
  *(float *)(this + 4) = param_1;
  *(float *)this = param_1;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 8) = 0;
  return;
}


/* Sexy::FastCurve::GetOutVal(float) */

undefined4 Sexy::FastCurve::GetOutVal(float param_1)

{
  long in_x0;
  
  return *(undefined4 *)(in_x0 + 4);
}


/* Sexy::FastCurve::SetInRange(float, float) */

void __thiscall Sexy::FastCurve::SetInRange(FastCurve *this,float param_1,float param_2)

{
  *(float *)(this + 8) = param_1;
  *(float *)(this + 0xc) = param_2;
  return;
}


/* Sexy::FastCurve::SetInVal(float, bool) */

undefined8 Sexy::FastCurve::SetInVal(float param_1,bool param_2)

{
  *(float *)((ulong)param_2 + 0x14) = param_1;
  return 0;
}


/* Sexy::FastCurve::IncInVal(float) */

FastCurve __thiscall Sexy::FastCurve::IncInVal(FastCurve *this,float param_1)

{
  FastCurve FVar1;
  float fVar2;
  
  fVar2 = param_1 + *(float *)(this + 0x14);
  *(float *)(this + 0x14) = fVar2;
  if (fVar2 <= *(float *)(this + 0xc)) {
    if (*(float *)(this + 8) <= fVar2) {
      return (FastCurve)0x1;
    }
    FVar1 = this[0x18];
    *(float *)(this + 0x14) = *(float *)(this + 8);
  }
  else {
    FVar1 = this[0x18];
    *(float *)(this + 0x14) = *(float *)(this + 0xc);
  }
  if (FVar1 != (FastCurve)0x0) {
    return this[0x19];
  }
  this[0x18] = (FastCurve)0x1;
  return (FastCurve)0x0;
}


/* Sexy::FastCurve::SetCurve(std::string const&, Sexy::CurvedVal*) */

void Sexy::FastCurve::SetCurve(string *param_1,CurvedVal *param_2)

{
  CurvedVal::SetCurve((CurvedVal *)&DAT_06bacf90,(string *)param_2,(CurvedVal *)0x0);
  InitFromCurveData((FastCurve *)param_1);
  return;
}


/* Sexy::FastCurve::SetCurve(char const**, Sexy::CurvedVal*) */

void Sexy::FastCurve::SetCurve(char **param_1,CurvedVal *param_2)

{
  CurvedVal::SetCurve((CurvedVal *)&DAT_06bacf90,(char **)param_2,(CurvedVal *)0x0);
  InitFromCurveData((FastCurve *)param_1);
  return;
}

