// Class: ModularBoardEntity


/* ModularBoardEntity::ModularBoardEntity() */

void __thiscall ModularBoardEntity::ModularBoardEntity(ModularBoardEntity *this)

{
  BoardEntity::BoardEntity((BoardEntity *)this);
  *(undefined ***)this = &PTR_GetClass_06850f10;
  *(undefined ***)(this + 0x10) = &PTR__ModularBoardEntity_06851108;
  AttachedEffectManager::AttachedEffectManager((AttachedEffectManager *)(this + 0xa8));
  return;
}


/* ModularBoardEntity::onUpdate() */

void __thiscall ModularBoardEntity::onUpdate(ModularBoardEntity *this)

{
  (**(code **)(*(long *)this + 0x1e0))();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ModularBoardEntity::StaticClassInit() */

void ModularBoardEntity::StaticClassInit(void)

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
    std::string::string(asStack_10,"ModularBoardEntity");
    (*pcVar2)(plVar1,asStack_10,FUN_04493c78,200,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ModularBoardEntity::StaticGetClass() */

long * ModularBoardEntity::StaticGetClass(void)

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
  uVar2 = BoardEntity::StaticGetClass();
  (*pcVar3)(plVar1,"ModularBoardEntity",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ModularBoardEntity::GetClass() const */

long * ModularBoardEntity::GetClass(void)

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
  uVar2 = BoardEntity::StaticGetClass();
  (*pcVar3)(plVar1,"ModularBoardEntity",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ModularBoardEntity::clearAttachedEffects() */

void __thiscall ModularBoardEntity::clearAttachedEffects(ModularBoardEntity *this)

{
  AttachedEffectManager::Clear((AttachedEffectManager *)(this + 0xa8));
  return;
}


/* ModularBoardEntity::onDestroy() */

void ModularBoardEntity::onDestroy(void)

{
  long in_x0;
  
  AttachedEffectManager::Clear((AttachedEffectManager *)(in_x0 + 0xa8));
  return;
}


/* ModularBoardEntity::GetAttachedEffect(std::string const&) */

undefined8 __thiscall
ModularBoardEntity::GetAttachedEffect(ModularBoardEntity *this,string *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = GameObjectDictionary::Contains((string *)(this + 0xa8));
  if (cVar1 != '\0') {
    uVar2 = GameObjectDictionary::FindOrCreate((GameObjectDictionary *)(this + 0xa8),param_1);
    return uVar2;
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ModularBoardEntity::DetachAttachedEffect(char const*) */

void __thiscall ModularBoardEntity::DetachAttachedEffect(ModularBoardEntity *this,char *param_1)

{
  char cVar1;
  CthulhuSubSystem *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,param_1);
  this_00 = (CthulhuSubSystem *)GetAttachedEffect(this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  cVar1 = CthulhuSubSystem::Update(this_00);
  if (cVar1 != '\0') {
    AttachedEffect::Detach((AttachedEffect *)this_00);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ModularBoardEntity::RemoveAttachedEffect(char const*) */

void __thiscall ModularBoardEntity::RemoveAttachedEffect(ModularBoardEntity *this,char *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,param_1);
  GameObjectDictionary::Remove((string *)(this + 0xa8));
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ModularBoardEntity::AddAttachedEffect(char const*, char const*, char const*, Sexy::SexyVector3
   const&, int, bool, bool) */

void __thiscall
ModularBoardEntity::AddAttachedEffect
          (ModularBoardEntity *this,char *param_1,char *param_2,char *param_3,SexyVector3 *param_4,
          int param_5,bool param_6,bool param_7)

{
  AttachedEffect *this_00;
  PopAnim *pPVar1;
  long lVar2;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,param_1);
  this_00 = (AttachedEffect *)
            GameObjectDictionary::FindOrCreate((GameObjectDictionary *)(this + 0xa8),asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_18,param_2);
  GetPAMByName(asStack_18);
  pPVar1 = (PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  AttachedEffect::InitializeWithAnimation(this_00,pPVar1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  std::string::~string(asStack_18);
  nop();
  if (param_6) {
    std::string::string(asStack_10,param_3);
    AttachedEffect::PlayAnimAndDestroy(this_00,asStack_10,2);
    std::string::~string(asStack_10);
    nop();
  }
  else {
    std::string::string(asStack_10,param_3);
    AttachedEffect::PlayAnimLooped(this_00,asStack_10,2);
    std::string::~string(asStack_10);
    nop();
  }
  (**(code **)(*(long *)this_00 + 0x18))(this_00,this,param_4,param_5);
  lVar2 = *(long *)this;
  this_00[0x3c] = (AttachedEffect)param_7;
  (**(code **)(lVar2 + 0x1d8))(this,this_00,param_7);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* ModularBoardEntity::updateOverlayEffects() */

void __thiscall ModularBoardEntity::updateOverlayEffects(ModularBoardEntity *this)

{
  PVZ_Dt();
  _JNIEnv::ExceptionOccurred((_JNIEnv *)(this + 0xa8));
  return;
}


/* ModularBoardEntity::StaticNew() */

ModularBoardEntity * ModularBoardEntity::StaticNew(void)

{
  ModularBoardEntity *this;
  
  this = ::operator_new(200);
  ModularBoardEntity(this);
  return this;
}


/* ModularBoardEntity::~ModularBoardEntity() */

void __thiscall ModularBoardEntity::~ModularBoardEntity(ModularBoardEntity *this)

{
  *(undefined ***)this = &PTR_GetClass_06850f10;
  *(undefined ***)(this + 0x10) = &PTR__ModularBoardEntity_06851108;
  clearAttachedEffects(this);
  AttachedEffectManager::~AttachedEffectManager((AttachedEffectManager *)(this + 0xa8));
  BoardEntity::~BoardEntity((BoardEntity *)this);
  return;
}


/* non-virtual thunk to ModularBoardEntity::~ModularBoardEntity() */

void __thiscall ModularBoardEntity::~ModularBoardEntity(ModularBoardEntity *this)

{
  ~ModularBoardEntity(this + -0x10);
  return;
}


/* ModularBoardEntity::~ModularBoardEntity() */

void __thiscall ModularBoardEntity::~ModularBoardEntity(ModularBoardEntity *this)

{
  ~ModularBoardEntity(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ModularBoardEntity::~ModularBoardEntity() */

void __thiscall ModularBoardEntity::~ModularBoardEntity(ModularBoardEntity *this)

{
  ~ModularBoardEntity(this + -0x10);
  return;
}

