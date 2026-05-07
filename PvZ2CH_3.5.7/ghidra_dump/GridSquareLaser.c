// Class: GridSquareLaser


/* GridSquareLaser::getPamName() */

char * GridSquareLaser::getPamName(void)

{
  return "POPANIM_EFFECTS_ZOMBOSS_DINO_LASERSQUARE";
}


/* GridSquareLaser::GridSquareLaser() */

void __thiscall GridSquareLaser::GridSquareLaser(GridSquareLaser *this)

{
  GridSquareCoveringFlame::GridSquareCoveringFlame((GridSquareCoveringFlame *)this);
  *(undefined ***)this = &PTR_GetClass_0678e8b0;
  *(undefined ***)(this + 0x10) = &PTR__GridSquareLaser_0678eaf0;
  return;
}


/* GridSquareLaser::StaticNew() */

GridSquareLaser * GridSquareLaser::StaticNew(void)

{
  GridSquareLaser *this;
  
  this = ::operator_new(0xd8);
  GridSquareLaser(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridSquareLaser::StaticClassInit() */

void GridSquareLaser::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"GridSquareLaser");
    (*pcVar2)(plVar1,asStack_10,FUN_03e83984,0xd8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridSquareLaser::StaticGetClass() */

long * GridSquareLaser::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = GridSquareCoveringFlame::StaticGetClass();
  (*pcVar3)(plVar1,"GridSquareLaser",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridSquareLaser::GetClass() const */

long * GridSquareLaser::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = GridSquareCoveringFlame::StaticGetClass();
  (*pcVar3)(plVar1,"GridSquareLaser",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridSquareLaser::StartLaserEffect(Sexy::Point, float, BoardEntity*) */

void __thiscall
GridSquareLaser::StartLaserEffect
          (GridSquareCoveringFlame *param_1,GridSquareLaser *this,TPoint *param_3,undefined8 param_4
          )

{
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point(aPStack_10,param_3);
  GridSquareCoveringFlame::StartFlameImpactEffect(param_1,this,aPStack_10,param_4);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridSquareLaser::~GridSquareLaser() */

void __thiscall GridSquareLaser::~GridSquareLaser(GridSquareLaser *this)

{
  *(undefined ***)this = &PTR_GetClass_0678e8b0;
  *(undefined ***)(this + 0x10) = &PTR__GridSquareLaser_0678eaf0;
  GridSquareCoveringFlame::~GridSquareCoveringFlame((GridSquareCoveringFlame *)this);
  return;
}


/* non-virtual thunk to GridSquareLaser::~GridSquareLaser() */

void __thiscall GridSquareLaser::~GridSquareLaser(GridSquareLaser *this)

{
  ~GridSquareLaser(this + -0x10);
  return;
}


/* GridSquareLaser::~GridSquareLaser() */

void __thiscall GridSquareLaser::~GridSquareLaser(GridSquareLaser *this)

{
  ~GridSquareLaser(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridSquareLaser::~GridSquareLaser() */

void __thiscall GridSquareLaser::~GridSquareLaser(GridSquareLaser *this)

{
  ~GridSquareLaser(this + -0x10);
  return;
}


/* GridSquareLaser::onUpdate() */

void __thiscall GridSquareLaser::onUpdate(GridSquareLaser *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  if (*(float *)(this + 0xb0) < fVar1) {
    GridSquareCoveringFlame::tryPlayScorchedGridOutro((GridSquareCoveringFlame *)this);
    (**(code **)(*(long *)this + 0x1d8))(this);
  }
  GridSquareCoveringFlame::tryCreateGridScorchEffect((GridSquareCoveringFlame *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridSquareLaser::doDamage() */

void __thiscall GridSquareLaser::doDamage(GridSquareLaser *this)

{
  bool bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  Plant *extraout_x0;
  ulong uVar8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_88 [8];
  undefined8 local_80;
  undefined8 local_78;
  GridSquareLaser *local_68 [2];
  undefined8 local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar8 = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
  uVar3 = operator|(1,2);
  uVar2 = operator|(uVar3,4);
  puVar4 = (undefined4 *)GridSquareCoveringFlame::GetGridLocation((GridSquareCoveringFlame *)this);
  EntityFinder::GetEntitiesAtGridSquare
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80,uVar2,
             *puVar4,puVar4[1]);
  uVar3 = local_80;
  lVar5 = FUN_03e837d0(local_80,local_78);
  if (lVar5 != 0) {
    do {
      puVar6 = (undefined8 *)FUN_03e837dc(uVar3,uVar8);
      bVar1 = Sexy::RtObject::IsA<ZombieZombossMech>((RtObject *)*puVar6);
      if (!bVar1) {
        puVar6 = (undefined8 *)FUN_03e837dc(local_80,uVar8);
        bVar1 = Sexy::RtObject::IsA<Plant>((RtObject *)*puVar6);
        if (bVar1) {
          FUN_03e837dc(local_80,uVar8);
          nop();
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)local_68,(RtWeakPtrBase *)aRStack_88);
          Plant::TakeSmashAttack(extraout_x0,(RtWeakPtr<Sexy::SoundResource> *)local_68);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_68)
          ;
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_88);
        }
        else {
          DamageInfo::DamageInfo((DamageInfo *)local_68);
          local_58 = 0x400000;
          local_68[0] = this;
          puVar6 = (undefined8 *)FUN_03e837dc(local_80,uVar8);
          (**(code **)(*(long *)*puVar6 + 0x120))
                    ((long *)*puVar6,(RtWeakPtr<Sexy::SoundResource> *)local_68);
          DamageInfo::~DamageInfo((DamageInfo *)local_68);
        }
      }
      uVar3 = local_80;
      uVar8 = uVar8 + 1;
      uVar7 = FUN_03e837d0(local_80,local_78);
    } while (uVar8 < uVar7);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

