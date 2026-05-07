// Class: Sexy::PIValue2D


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PIValue2D::GetVelocityAt(float) */

void Sexy::PIValue2D::GetVelocityAt(float param_1)

{
  char cVar1;
  undefined8 *in_x0;
  ulong uVar2;
  float *pfVar3;
  float *pfVar4;
  FPoint *in_x8;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  TPoint aTStack_18 [8];
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(float *)((long)in_x0 + 0x54) != param_1) {
    uVar6 = *in_x0;
    *(float *)((long)in_x0 + 0x54) = param_1;
    uVar2 = FUN_053b9b80(uVar6,in_x0[1]);
    if (uVar2 < 2) {
      DVec2::DVec2((DVec2 *)in_x8,0.0,0.0);
      goto LAB_053bd6dc;
    }
    cVar1 = FUN_053b9ab0(*(undefined4 *)((long)in_x0 + 0x2c));
    if (cVar1 == '\0') {
      iVar7 = (int)uVar2;
      lVar5 = 1;
      if (1 < iVar7) {
        do {
          pfVar3 = (float *)FUN_053b9b94(uVar6,lVar5 + -1);
          pfVar4 = (float *)FUN_053b9b94(uVar6,lVar5);
          if (((*pfVar3 <= param_1) && (param_1 <= *pfVar4)) || (iVar7 + -1 == (int)lVar5)) {
            TPoint<float>::operator-((TPoint<float> *)(pfVar4 + 1),(TPoint *)(pfVar3 + 1));
            FPoint::FPoint((FPoint *)&local_10,aTStack_18);
            goto LAB_053bd6c8;
          }
          lVar5 = lVar5 + 1;
        } while ((int)lVar5 < iVar7);
      }
      DVec2::DVec2((DVec2 *)&local_10,0.0,0.0);
    }
    else {
      Bezier::Velocity(param_1,(bool)((char)in_x0 + '\x18'));
    }
LAB_053bd6c8:
    in_x0[0xb] = local_10;
  }
  FPoint::FPoint(in_x8,(TPoint *)(in_x0 + 0xb));
LAB_053bd6dc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PIValue2D::GetValueAt(float) */

void Sexy::PIValue2D::GetValueAt(float param_1)

{
  char cVar1;
  undefined8 *in_x0;
  long lVar2;
  float *pfVar3;
  float *pfVar4;
  FPoint *in_x8;
  undefined8 uVar5;
  int iVar6;
  float local_30;
  float local_2c;
  TPoint<float> aTStack_28 [8];
  UDim aUStack_20 [8];
  TPoint aTStack_18 [8];
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(float *)(in_x0 + 9) != param_1) {
    uVar5 = *in_x0;
    *(float *)(in_x0 + 9) = param_1;
    lVar2 = FUN_053b9b80(uVar5,in_x0[1]);
    if (lVar2 == 1) {
      lVar2 = FUN_053b9b94(uVar5,0);
      *(undefined8 *)((long)in_x0 + 0x4c) = *(undefined8 *)(lVar2 + 4);
      FPoint::FPoint(in_x8,(TPoint *)((long)in_x0 + 0x4c));
      goto LAB_053bdde4;
    }
    cVar1 = FUN_053b9ab0(*(undefined4 *)((long)in_x0 + 0x2c));
    if (cVar1 == '\0') {
      iVar6 = (int)lVar2;
      lVar2 = 1;
      if (1 < iVar6) {
        do {
          pfVar3 = (float *)FUN_053b9b94(uVar5,lVar2 + -1);
          pfVar4 = (float *)FUN_053b9b94(uVar5,lVar2);
          if (((*pfVar3 <= param_1) && (param_1 <= *pfVar4)) || (iVar6 + -1 == (int)lVar2)) {
            TPoint<float>::operator-((TPoint<float> *)(pfVar4 + 1),(TPoint *)(pfVar3 + 1));
            local_30 = 1.0;
            local_2c = (param_1 - *pfVar3) / (*pfVar4 - *pfVar3);
            pfVar4 = eastl::min_alt<float>(&local_30,&local_2c);
            TPoint<float>::operator*(aTStack_28,*pfVar4);
            UI::UDim::operator+((UDim *)(pfVar3 + 1),aUStack_20);
            FPoint::FPoint((FPoint *)&local_10,aTStack_18);
            goto LAB_053bddd0;
          }
          lVar2 = lVar2 + 1;
        } while ((int)lVar2 < iVar6);
      }
      DVec2::DVec2((DVec2 *)&local_10,0.0,0.0);
    }
    else {
      Bezier::Evaluate(param_1);
    }
LAB_053bddd0:
    *(undefined8 *)((long)in_x0 + 0x4c) = local_10;
  }
  FPoint::FPoint(in_x8,(TPoint *)((long)in_x0 + 0x4c));
LAB_053bdde4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::PIValue2D::PIValue2D() */

void __thiscall Sexy::PIValue2D::PIValue2D(PIValue2D *this)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)this);
  Bezier::Bezier((Bezier *)(this + 0x18));
  PieceConfig::PieceConfig((PieceConfig *)(this + 0x4c));
  PieceConfig::PieceConfig((PieceConfig *)(this + 0x58));
  *(undefined4 *)(this + 0x48) = 0xbf800000;
  return;
}


/* Sexy::PIValue2D::~PIValue2D() */

void __thiscall Sexy::PIValue2D::~PIValue2D(PIValue2D *this)

{
  Bezier::~Bezier((Bezier *)(this + 0x18));
  std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>::~vector
            ((vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>> *)this);
  return;
}


/* Sexy::PIValue2D::PIValue2D(Sexy::PIValue2D const&) */

void __thiscall Sexy::PIValue2D::PIValue2D(PIValue2D *this,PIValue2D *param_1)

{
  std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>::vector
            ((vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>> *)this,
             (vector *)param_1);
  Bezier::Bezier((Bezier *)(this + 0x18),(Bezier *)(param_1 + 0x18));
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  FPoint::FPoint((FPoint *)(this + 0x4c),(TPoint *)(param_1 + 0x4c));
  *(undefined4 *)(this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  FPoint::FPoint((FPoint *)(this + 0x58),(TPoint *)(param_1 + 0x58));
  return;
}

