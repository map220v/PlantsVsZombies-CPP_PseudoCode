// Class: CannonMinigameModule::LaneData


/* CannonMinigameModule::LaneData::LaneData() */

void __thiscall CannonMinigameModule::LaneData::LaneData(LaneData *this)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)this);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  *(undefined4 *)(this + 0x48) = 0;
  return;
}


/* CannonMinigameModule::LaneData::~LaneData() */

void __thiscall CannonMinigameModule::LaneData::~LaneData(LaneData *this)

{
  std::
  vector<CannonMinigameModule::TargetListEntry,std::allocator<CannonMinigameModule::TargetListEntry>>
  ::~vector((vector<CannonMinigameModule::TargetListEntry,std::allocator<CannonMinigameModule::TargetListEntry>>
             *)(this + 0x30));
  std::vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>>::~vector
            ((vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>> *)(this + 0x18));
  std::vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>>::~vector
            ((vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>> *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CannonMinigameModule::LaneData::RebuildSpline() */

void __thiscall CannonMinigameModule::LaneData::RebuildSpline(LaneData *this)

{
  char cVar1;
  float *pfVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float unaff_s10;
  float local_a4;
  float local_a0;
  float local_9c;
  FastCurve aFStack_98 [8];
  FastCurve aFStack_90 [8];
  undefined4 local_88 [2];
  BSpline aBStack_80 [120];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::BSpline::BSpline(aBStack_80);
  uVar4 = 0;
  while( true ) {
    uVar6 = *(undefined8 *)this;
    uVar3 = FUN_03bb5784(uVar6,*(undefined8 *)(this + 8));
    if (uVar3 <= uVar4) break;
    pfVar2 = (float *)FUN_03bb57ac(uVar6,uVar4);
    Sexy::BSpline::AddPoint(aBStack_80,*pfVar2,pfVar2[1]);
    uVar4 = uVar4 + 1;
  }
  Sexy::BSpline::CalculateSpline(aBStack_80,false);
  std::vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>>::clear
            ((vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>> *)(this + 0x18));
  uVar4 = FUN_03bb5784(*(undefined8 *)this,*(undefined8 *)(this + 8));
  if (1 < uVar4) {
    local_a4 = 0.0;
    fVar7 = (float)Sexy::BSpline::GetXPoint(aBStack_80,0.0);
    fVar8 = (float)Sexy::BSpline::GetYPoint(aBStack_80,local_a4);
    while( true ) {
      Sexy::FastCurve::SetOutRange((FastCurve *)local_88,fVar7,fVar8);
      std::vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>>::push_back
                ((vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>> *)(this + 0x18),
                 (SexyVector2 *)local_88);
      cVar1 = Sexy::BSpline::GetNextPoint(aBStack_80,&local_a0,&local_9c,&local_a4,10.0,1);
      if (cVar1 == '\0') break;
      Sexy::FastCurve::SetOutRange(aFStack_98,fVar7,fVar8);
      Sexy::FastCurve::SetOutRange(aFStack_90,local_a0,local_9c);
      local_88[0] = Sexy::SexyVector2::operator-
                              ((SexyVector2 *)aFStack_90,(SexyVector2 *)aFStack_98);
      unaff_s10 = (float)DVec2::getLength((DVec2 *)local_88);
      fVar7 = local_a0;
      fVar8 = local_9c;
    }
    lVar5 = FUN_03bb5784(*(undefined8 *)(this + 0x18),*(undefined8 *)(this + 0x20));
    *(float *)(this + 0x48) = unaff_s10 + (float)(lVar5 - 2) * 10.0;
  }
  Sexy::BSpline::~BSpline(aBStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CannonMinigameModule::LaneData::LaneData(CannonMinigameModule::LaneData&&) */

void __thiscall CannonMinigameModule::LaneData::LaneData(LaneData *this,LaneData *param_1)

{
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)this,
             (vector *)param_1);
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x18),(vector *)(param_1 + 0x18));
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x30),(vector *)(param_1 + 0x30));
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  return;
}

