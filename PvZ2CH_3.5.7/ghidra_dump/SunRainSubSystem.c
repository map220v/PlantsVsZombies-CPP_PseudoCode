// Class: SunRainSubSystem


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SunRainSubSystem::StaticClassInit() */

void SunRainSubSystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"SunRainSubSystem");
    (*pcVar2)(plVar1,asStack_10,FUN_037c1b60,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SunRainSubSystem::StaticGetClass() */

long * SunRainSubSystem::StaticGetClass(void)

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
  uVar2 = GameSubSystem::StaticGetClass();
  (*pcVar3)(plVar1,"SunRainSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SunRainSubSystem::GetClass() const */

long * SunRainSubSystem::GetClass(void)

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
  uVar2 = GameSubSystem::StaticGetClass();
  (*pcVar3)(plVar1,"SunRainSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SunRainSubSystem::Start() */

void __thiscall SunRainSubSystem::Start(SunRainSubSystem *this)

{
  *(undefined4 *)(this + 0x38) = 0;
  this[0x34] = (SunRainSubSystem)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SunRainSubSystem::SunRainSubSystem() */

void __thiscall SunRainSubSystem::SunRainSubSystem(SunRainSubSystem *this)

{
  long lVar1;
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_066997b0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  DVec3::DVec3((DVec3 *)(this + 0x28));
  EATextSquish::Vec3::Vec3(aVStack_18,67.0,0.0,-167.0);
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x28),(SexyVector3 *)aVStack_18);
  this[0x34] = (SunRainSubSystem)0x0;
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 2;
  *(undefined4 *)(this + 0x40) = 0x40600000;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SunRainSubSystem::StaticNew() */

SunRainSubSystem * SunRainSubSystem::StaticNew(void)

{
  SunRainSubSystem *this;
  
  this = ::operator_new(0x48);
  SunRainSubSystem(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SunRainSubSystem::Update() */

void __thiscall SunRainSubSystem::Update(SunRainSubSystem *this)

{
  int iVar1;
  ulong uVar2;
  Collectable *this_00;
  undefined8 uVar3;
  string *psVar4;
  int iVar5;
  uint uVar6;
  float fVar7;
  float local_28;
  float local_24;
  float local_20;
  DVec3 aDStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DAT_06ab1228 = DAT_06ab1228 + 1;
  uVar6 = DAT_06ab1228 & 1;
  psVar4 = *(string **)(gLawnApp + 0x9f0);
  if (((DAT_06ab1228 & 1) == 0) && (this[0x34] != (SunRainSubSystem)0x0)) {
    uVar3 = *(undefined8 *)(this + 0x10);
    iVar5 = *(int *)(this + 0x38);
    uVar2 = FUN_037c0ed8(uVar3,*(undefined8 *)(this + 0x18));
    if ((ulong)(long)iVar5 < uVar2) {
      iVar1 = *(int *)(this + 0x3c);
      if (0 < iVar1) {
        while ((ulong)(long)(int)(iVar5 + uVar6) < uVar2) {
          uVar6 = uVar6 + 1;
          FUN_037c0ed0(uVar3);
          Board::AddCollectable(psVar4);
          nop();
          fVar7 = (float)PVZ_T();
          FUN_037c0e68(fVar7 + *(float *)(this + 0x40),this_00 + 0x1e8);
          FUN_037c1328(this_00 + 0x1f8);
          iVar1 = Sexy::Rand(0x280);
          iVar5 = *(int *)(psVar4 + 0x4c);
          DVec3::DVec3((DVec3 *)&local_28);
          local_28 = (float)(0x280 - iVar1);
          iVar1 = Sexy::Rand(0x118);
          local_24 = (float)(iVar1 + 200);
          local_20 = local_24 - (-15.0 - (float)iVar5);
          (**(code **)(*(long *)this_00 + 0x78))(this_00,(DVec3 *)&local_28);
          DVec3::DVec3(aDStack_18);
          Collectable::SetMotionNewtonian
                    (this_00,(SexyVector3 *)(this + 0x28),(SexyVector3 *)aDStack_18,true);
          Collectable::StartExpirationTimerAfterMotion(this_00);
          Collectable::ForceUpdateEffect(this_00);
          MessageRouter::Post<CollectableSun*,CollectableSun*>
                    ((MessageRouter *)gMessageRouter,Message::SunSpawnedFromSky,
                     (CollectableSun *)this_00);
          iVar1 = *(int *)(this + 0x3c);
          if (iVar1 <= (int)uVar6) {
            iVar5 = *(int *)(this + 0x38);
            break;
          }
          uVar3 = *(undefined8 *)(this + 0x10);
          iVar5 = *(int *)(this + 0x38);
          uVar2 = FUN_037c0ed8(uVar3,*(undefined8 *)(this + 0x18));
        }
      }
      *(int *)(this + 0x38) = iVar5 + iVar1;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SunRainSubSystem::~SunRainSubSystem() */

void __thiscall SunRainSubSystem::~SunRainSubSystem(SunRainSubSystem *this)

{
  *(undefined ***)this = &PTR_GetClass_066997b0;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x10));
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* SunRainSubSystem::~SunRainSubSystem() */

void __thiscall SunRainSubSystem::~SunRainSubSystem(SunRainSubSystem *this)

{
  ~SunRainSubSystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SunRainSubSystem::SetSunCurrency(int, int, int) */

void __thiscall
SunRainSubSystem::SetSunCurrency(SunRainSubSystem *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  string *psVar4;
  string *__n;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  string asStack_10 [8];
  long local_8;
  
  iVar8 = 0;
  local_8 = ___stack_chk_guard;
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x10));
  iVar1 = param_1 + param_2 + param_3;
  std::string::string(asStack_10,"");
  __n = asStack_10;
  std::vector<std::string,std::allocator<std::string>>::assign
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x10),(long)iVar1,asStack_10
            );
  std::string::~string(asStack_10);
  nop();
  if (0 < param_1) {
    do {
      iVar3 = Sexy::Rand(iVar1);
      uVar6 = (ulong)iVar3;
      psVar4 = (string *)FUN_037c0ed0(*(undefined8 *)(this + 0x10),uVar6);
      bVar2 = std::operator!=(psVar4,"");
      if ((bVar2) && (0 < iVar1)) {
        lVar7 = 0;
        do {
          psVar4 = (string *)FUN_037c0ed0(*(undefined8 *)(this + 0x10),lVar7);
          bVar2 = std::operator==(psVar4,"");
          uVar5 = (uint)uVar6;
          if (bVar2) {
            uVar5 = (uint)lVar7;
          }
          uVar6 = (ulong)uVar5;
          lVar7 = lVar7 + 1;
        } while ((int)lVar7 < iVar1);
        uVar6 = (ulong)(int)uVar5;
      }
      iVar8 = iVar8 + 1;
      psVar4 = (string *)FUN_037c0ed0(*(undefined8 *)(this + 0x10),uVar6);
      std::string::append(psVar4,"sun_large",(size_t)__n);
    } while (iVar8 != param_1);
  }
  iVar8 = 0;
  if (0 < param_2) {
    do {
      iVar3 = Sexy::Rand(iVar1);
      uVar6 = (ulong)iVar3;
      psVar4 = (string *)FUN_037c0ed0(*(undefined8 *)(this + 0x10),uVar6);
      bVar2 = std::operator!=(psVar4,"");
      if ((bVar2) && (0 < iVar1)) {
        lVar7 = 0;
        do {
          psVar4 = (string *)FUN_037c0ed0(*(undefined8 *)(this + 0x10),lVar7);
          bVar2 = std::operator==(psVar4,"");
          uVar5 = (uint)uVar6;
          if (bVar2) {
            uVar5 = (uint)lVar7;
          }
          uVar6 = (ulong)uVar5;
          lVar7 = lVar7 + 1;
        } while ((int)lVar7 < iVar1);
        uVar6 = (ulong)(int)uVar5;
      }
      iVar8 = iVar8 + 1;
      psVar4 = (string *)FUN_037c0ed0(*(undefined8 *)(this + 0x10),uVar6);
      std::string::append(psVar4,"sun_medium",(size_t)__n);
    } while (iVar8 != param_2);
  }
  iVar8 = 0;
  if (0 < param_3) {
    do {
      iVar3 = Sexy::Rand(iVar1);
      uVar6 = (ulong)iVar3;
      psVar4 = (string *)FUN_037c0ed0(*(undefined8 *)(this + 0x10),uVar6);
      bVar2 = std::operator!=(psVar4,"");
      if ((bVar2) && (0 < iVar1)) {
        lVar7 = 0;
        do {
          psVar4 = (string *)FUN_037c0ed0(*(undefined8 *)(this + 0x10),lVar7);
          bVar2 = std::operator==(psVar4,"");
          uVar5 = (uint)uVar6;
          if (bVar2) {
            uVar5 = (uint)lVar7;
          }
          uVar6 = (ulong)uVar5;
          lVar7 = lVar7 + 1;
        } while ((int)lVar7 < iVar1);
        uVar6 = (ulong)(int)uVar5;
      }
      iVar8 = iVar8 + 1;
      psVar4 = (string *)FUN_037c0ed0(*(undefined8 *)(this + 0x10),uVar6);
      std::string::append(psVar4,"sun_small",(size_t)__n);
    } while (iVar8 != param_3);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

