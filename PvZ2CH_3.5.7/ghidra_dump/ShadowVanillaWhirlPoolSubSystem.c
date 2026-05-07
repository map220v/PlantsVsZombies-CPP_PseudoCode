// Class: ShadowVanillaWhirlPoolSubSystem


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ShadowVanillaWhirlPoolSubSystem::StaticClassInit() */

void ShadowVanillaWhirlPoolSubSystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"ShadowVanillaWhirlPoolSubSystem");
    (*pcVar2)(plVar1,asStack_10,FUN_04ce5448,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ShadowVanillaWhirlPoolSubSystem::StaticGetClass() */

long * ShadowVanillaWhirlPoolSubSystem::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ShadowVanillaWhirlPoolSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ShadowVanillaWhirlPoolSubSystem::GetClass() const */

long * ShadowVanillaWhirlPoolSubSystem::GetClass(void)

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
  (*pcVar3)(plVar1,"ShadowVanillaWhirlPoolSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ShadowVanillaWhirlPoolSubSystem::CheckCreateWhirlPool(float) */

void ShadowVanillaWhirlPoolSubSystem::CheckCreateWhirlPool(float param_1)

{
  FUN_04cde4ac();
  return;
}


/* ShadowVanillaWhirlPoolSubSystem::ShadowVanillaWhirlPoolSubSystem() */

void __thiscall
ShadowVanillaWhirlPoolSubSystem::ShadowVanillaWhirlPoolSubSystem
          (ShadowVanillaWhirlPoolSubSystem *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_069a1f70;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  *(undefined4 *)(this + 0x28) = 1;
  std::vector<float,std::allocator<float>>::clear
            ((vector<float,std::allocator<float>> *)(this + 0x30));
  std::vector<GridItemShadowVanillaWhirlpool*,std::allocator<GridItemShadowVanillaWhirlpool*>>::
  clear((vector<GridItemShadowVanillaWhirlpool*,std::allocator<GridItemShadowVanillaWhirlpool*>> *)
        (this + 0x10));
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,ZombieDied);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Zombie*,DamageInfo_const*,Sexy::CBMemberTranslatorX<ShadowVanillaWhirlPoolSubSystem,void(ShadowVanillaWhirlPoolSubSystem::*)(Zombie*,DamageInfo_const*)>>
            ((MessageRouter *)puVar1,Message::ZombieDied,&local_40);
  return;
}


/* ShadowVanillaWhirlPoolSubSystem::StaticNew() */

ShadowVanillaWhirlPoolSubSystem * ShadowVanillaWhirlPoolSubSystem::StaticNew(void)

{
  ShadowVanillaWhirlPoolSubSystem *this;
  
  this = ::operator_new(0x48);
  ShadowVanillaWhirlPoolSubSystem(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ShadowVanillaWhirlPoolSubSystem::CreateWhirlPool(int, int) */

void __thiscall
ShadowVanillaWhirlPoolSubSystem::CreateWhirlPool
          (ShadowVanillaWhirlPoolSubSystem *this,int param_1,int param_2)

{
  long lVar1;
  RtObject *this_00;
  GridItemShadowVanillaWhirlpool *this_01;
  Board *this_02;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = FUN_04ce3304(param_1,param_2);
  if (lVar1 == 0) {
    this_02 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string(asStack_10,"shadowvanilla_whirlpool");
    this_00 = (RtObject *)Board::AddGridItem(this_02,asStack_10,param_1,param_2,1);
    this_01 = Sexy::RtObject::Cast<GridItemShadowVanillaWhirlpool>(this_00);
    std::string::~string(asStack_10);
    nop();
    if (this_01 != (GridItemShadowVanillaWhirlpool *)0x0) {
      GridItemShadowVanillaWhirlpool::InitParams(this_01,*(int *)(this + 0x28));
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ShadowVanillaWhirlPoolSubSystem::ZombieDied(Zombie*, DamageInfo const*) */

void ShadowVanillaWhirlPoolSubSystem::ZombieDied(Zombie *param_1,DamageInfo *param_2)

{
  long lVar1;
  char cVar2;
  float *pfVar3;
  int local_10;
  int local_c;
  
  lVar1 = ___stack_chk_guard;
  cVar2 = Zombie::HasCondition(param_2,0x51);
  if (cVar2 != '\0') {
    pfVar3 = (float *)FUN_04cde374(*(undefined8 *)(param_1 + 0x30),
                                   (long)(*(int *)(param_1 + 0x28) + -1));
    cVar2 = CheckCreateWhirlPool(*pfVar3);
    if (cVar2 != '\0') {
      BoardEntity::CalcGridPosition();
      CreateWhirlPool((ShadowVanillaWhirlPoolSubSystem *)param_1,local_10,local_c);
    }
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ShadowVanillaWhirlPoolSubSystem::~ShadowVanillaWhirlPoolSubSystem() */

void __thiscall
ShadowVanillaWhirlPoolSubSystem::~ShadowVanillaWhirlPoolSubSystem
          (ShadowVanillaWhirlPoolSubSystem *this)

{
  *(undefined ***)this = &PTR_GetClass_069a1f70;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x30));
  std::vector<GridItemShadowVanillaWhirlpool*,std::allocator<GridItemShadowVanillaWhirlpool*>>::
  ~vector((vector<GridItemShadowVanillaWhirlpool*,std::allocator<GridItemShadowVanillaWhirlpool*>> *
          )(this + 0x10));
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* ShadowVanillaWhirlPoolSubSystem::~ShadowVanillaWhirlPoolSubSystem() */

void __thiscall
ShadowVanillaWhirlPoolSubSystem::~ShadowVanillaWhirlPoolSubSystem
          (ShadowVanillaWhirlPoolSubSystem *this)

{
  ~ShadowVanillaWhirlPoolSubSystem(this);
  AK::FreeHook(this);
  return;
}


/* ShadowVanillaWhirlPoolSubSystem::InitWhirlPoolRatio(std::vector<float, std::allocator<float> >)
    */

void __thiscall
ShadowVanillaWhirlPoolSubSystem::InitWhirlPoolRatio
          (ShadowVanillaWhirlPoolSubSystem *this,
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  std::vector<float,std::allocator<float>>::clear
            ((vector<float,std::allocator<float>> *)(this + 0x30));
  uVar1 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(param_2);
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(param_2);
  FUN_04ce56b4(uVar1,uVar2,this);
  return;
}

