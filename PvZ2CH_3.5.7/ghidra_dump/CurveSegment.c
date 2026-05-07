// Class: CurveSegment<float>


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x0362aa98 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* CurveSegment<float>::GetValueAt(float) const */

void __thiscall CurveSegment<float>::GetValueAt(CurveSegment<float> *this,float param_1)

{
  undefined1 auVar1 [16];
  undefined1 in_register_00005004 [12];
  
  auVar1._4_12_ = in_register_00005004;
  auVar1._0_4_ = param_1;
  CurveEvaluate<float>
            (auVar1,*(float *)(this + 0xc) - *(float *)(this + 8),this,this + 4,
             *(undefined4 *)(this + 0x10));
  return;
}


/* CurveSegment<Sexy::SexyVector3>::CurveSegment() */

void __thiscall CurveSegment<Sexy::SexyVector3>::CurveSegment(CurveSegment<Sexy::SexyVector3> *this)

{
  DVec3::DVec3((DVec3 *)this);
  DVec3::DVec3((DVec3 *)(this + 0xc));
  return;
}


/* CurveSegment<Sexy::SexyVector3>::Set(Sexy::SexyVector3 const&, Sexy::SexyVector3 const&, float,
   float, CurveType) */

void __thiscall
CurveSegment<Sexy::SexyVector3>::Set
          (undefined4 param_3,undefined4 param_4,CurveSegment<Sexy::SexyVector3> *this,
          SexyVector3 *param_1,SexyVector3 *param_2,undefined4 param_6)

{
  Sexy::SexyVector3::operator=((SexyVector3 *)this,param_1);
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0xc),param_2);
  *(undefined4 *)(this + 0x20) = param_6;
  *(undefined4 *)(this + 0x18) = param_3;
  *(undefined4 *)(this + 0x1c) = param_4;
  return;
}


/* CurveSegment<Sexy::SexyVector3>::TEMPNAMEPLACEHOLDERVALUE(CurveSegment<Sexy::SexyVector3> const&)
    */

CurveSegment<Sexy::SexyVector3> * __thiscall
CurveSegment<Sexy::SexyVector3>::operator=
          (CurveSegment<Sexy::SexyVector3> *this,CurveSegment *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  Sexy::SexyVector3::operator=((SexyVector3 *)this,(SexyVector3 *)param_1);
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0xc),(SexyVector3 *)(param_1 + 0xc));
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x18) = uVar1;
  *(undefined4 *)(this + 0x1c) = uVar2;
  return this;
}


/* CurveSegment<Sexy::SexyVector3>::GetValueAt(float) const */

void __thiscall
CurveSegment<Sexy::SexyVector3>::GetValueAt(CurveSegment<Sexy::SexyVector3> *this,float param_1)

{
  CurveEvaluate<Sexy::SexyVector3>
            ((param_1 - *(float *)(this + 0x18)) /
             (*(float *)(this + 0x1c) - *(float *)(this + 0x18)),this,this + 0xc,
             *(undefined4 *)(this + 0x20));
  return;
}


/* CurveSegment<Sexy::SexyVector2>::Set(Sexy::SexyVector2 const&, Sexy::SexyVector2 const&, float,
   float, CurveType) */

void __thiscall
CurveSegment<Sexy::SexyVector2>::Set
          (undefined4 param_3,undefined4 param_4,CurveSegment<Sexy::SexyVector2> *this,
          undefined8 *param_1,undefined8 *param_2,undefined4 param_6)

{
  *(undefined8 *)this = *param_1;
  *(undefined8 *)(this + 8) = *param_2;
  *(undefined4 *)(this + 0x18) = param_6;
  *(undefined4 *)(this + 0x10) = param_3;
  *(undefined4 *)(this + 0x14) = param_4;
  return;
}


/* CurveSegment<Sexy::SexyVector2>::GetValueAt(float) const */

undefined4 __thiscall
CurveSegment<Sexy::SexyVector2>::GetValueAt(CurveSegment<Sexy::SexyVector2> *this,float param_1)

{
  undefined4 uVar1;
  
  uVar1 = CurveEvaluate<Sexy::SexyVector2>
                    ((param_1 - *(float *)(this + 0x10)) /
                     (*(float *)(this + 0x14) - *(float *)(this + 0x10)),this,this + 8,
                     *(undefined4 *)(this + 0x18));
  return uVar1;
}


/* CurveSegment<Sexy::Color>::CurveSegment() */

void __thiscall CurveSegment<Sexy::Color>::CurveSegment(CurveSegment<Sexy::Color> *this)

{
  Sexy::Color::Color((Color *)this);
  Sexy::Color::Color((Color *)(this + 0x10));
  return;
}


/* CurveSegment<Sexy::Color>::CurveSegment(CurveSegment<Sexy::Color> const&) */

void __thiscall
CurveSegment<Sexy::Color>::CurveSegment(CurveSegment<Sexy::Color> *this,CurveSegment *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  Sexy::Insets::Insets((Insets *)this,(Insets *)param_1);
  Sexy::Insets::Insets((Insets *)(this + 0x10),(Insets *)(param_1 + 0x10));
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  uVar2 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x20) = uVar1;
  *(undefined4 *)(this + 0x24) = uVar2;
  return;
}


/* CurveSegment<Sexy::Color>::Set(Sexy::Color const&, Sexy::Color const&, float, float, CurveType)
    */

void __thiscall
CurveSegment<Sexy::Color>::Set
          (undefined4 param_3,undefined4 param_4,CurveSegment<Sexy::Color> *this,undefined8 *param_1
          ,undefined8 *param_2,undefined4 param_6)

{
  undefined8 uVar1;
  
  uVar1 = param_1[1];
  *(undefined8 *)this = *param_1;
  *(undefined8 *)(this + 8) = uVar1;
  uVar1 = param_2[1];
  *(undefined8 *)(this + 0x10) = *param_2;
  *(undefined8 *)(this + 0x18) = uVar1;
  *(undefined4 *)(this + 0x28) = param_6;
  *(undefined4 *)(this + 0x20) = param_3;
  *(undefined4 *)(this + 0x24) = param_4;
  return;
}


/* CurveSegment<Sexy::Color>::GetValueAt(float) const */

void CurveSegment<Sexy::Color>::GetValueAt(float param_1)

{
  long in_x0;
  
  CurveEvaluate<Sexy::Color>
            ((param_1 - *(float *)(in_x0 + 0x20)) /
             (*(float *)(in_x0 + 0x24) - *(float *)(in_x0 + 0x20)),in_x0,in_x0 + 0x10,
             *(undefined4 *)(in_x0 + 0x28));
  return;
}

