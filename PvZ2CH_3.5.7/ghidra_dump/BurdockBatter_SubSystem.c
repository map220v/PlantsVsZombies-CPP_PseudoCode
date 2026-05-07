// Class: BurdockBatter_SubSystem


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BurdockBatter_SubSystem::StaticClassInit() */

void BurdockBatter_SubSystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"BurdockBatter_SubSystem");
    (*pcVar2)(plVar1,asStack_10,FUN_03636e28,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BurdockBatter_SubSystem::StaticGetClass() */

long * BurdockBatter_SubSystem::StaticGetClass(void)

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
  uVar2 = GameObject::StaticGetClass();
  (*pcVar3)(plVar1,"BurdockBatter_SubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BurdockBatter_SubSystem::GetClass() const */

long * BurdockBatter_SubSystem::GetClass(void)

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
  uVar2 = GameObject::StaticGetClass();
  (*pcVar3)(plVar1,"BurdockBatter_SubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BurdockBatter_SubSystem::findEnhancedProjectile(Projectile*, BurdockBatter_SubSystem::Type) */

long __thiscall
BurdockBatter_SubSystem::findEnhancedProjectile
          (BurdockBatter_SubSystem *this,ResourceInfo *param_1,int param_3)

{
  long lVar1;
  RtWeakPtr *this_00;
  ResourceInfo *pRVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  if (param_1 != (ResourceInfo *)0x0) {
    uVar4 = *(undefined8 *)(this + 0x10);
    uVar5 = 0;
    lVar1 = FUN_03635c0c(uVar4,*(undefined8 *)(this + 0x18));
    if (lVar1 != 0) {
      do {
        this_00 = (RtWeakPtr *)FUN_03635c20(uVar4,uVar5);
        pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
        uVar4 = *(undefined8 *)(this + 0x10);
        if ((param_1 == pRVar2) &&
           (lVar1 = FUN_03635c20(uVar4,uVar5), *(int *)(lVar1 + 0x10) == param_3)) {
          return lVar1;
        }
        uVar5 = uVar5 + 1;
        uVar3 = FUN_03635c0c(uVar4,*(undefined8 *)(this + 0x18));
      } while (uVar5 < uVar3);
    }
  }
  return 0;
}


/* BurdockBatter_SubSystem::isProjectileAlreadyIn(Projectile*, BurdockBatter_SubSystem::Type) */

bool BurdockBatter_SubSystem::isProjectileAlreadyIn(void)

{
  long lVar1;
  
  lVar1 = findEnhancedProjectile();
  return lVar1 != 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BurdockBatter_SubSystem::onProjectileCollideEntity(Projectile*, BoardEntity*) */

void __thiscall
BurdockBatter_SubSystem::onProjectileCollideEntity
          (BurdockBatter_SubSystem *this,Projectile *param_1,BoardEntity *param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  Zombie *pZVar4;
  undefined8 *puVar5;
  ZombieTosserSubSystem *pZVar6;
  float local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = findEnhancedProjectile(this,param_1,0);
  if ((lVar3 == 0) || (*(float *)(lVar3 + 0x18) <= 0.0)) {
    lVar3 = findEnhancedProjectile(this,param_1,1);
    if ((((lVar3 != 0) && (param_2 != (BoardEntity *)0x0)) && (0.0 < *(float *)(lVar3 + 0x14))) &&
       (pZVar4 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_2), pZVar4 != (Zombie *)0x0)) {
      Zombie::EndCondition(pZVar4,2);
      iVar2 = Zombie::GetSizeType(pZVar4);
      if (iVar2 == 2) {
        Zombie::ApplyCondition
                  ((Zombie *)(*(float *)(this + 0x28) * *(float *)(lVar3 + 0x14)),0,pZVar4,2,1);
      }
      else {
                    /* WARNING: Load size is inaccurate */
        Zombie::ApplyCondition(*(Zombie **)(lVar3 + 0x14),0,pZVar4,2,1);
      }
    }
  }
  else if ((param_2 != (BoardEntity *)0x0) &&
          (pZVar4 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_2), pZVar4 != (Zombie *)0x0)) {
    puVar5 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)pZVar4);
    local_60 = (float)*puVar5;
    local_58 = *(undefined4 *)(puVar5 + 1);
    _local_60 = CONCAT44((int)((ulong)*puVar5 >> 0x20),*(float *)(lVar3 + 0x18) + local_60);
    cVar1 = Zombie::CanBeLaunchedByPlants(pZVar4);
    if (cVar1 != '\0') {
      pZVar6 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
      RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_50);
      ZombieTosserSubSystem::LaunchZombie
                ((ZombieTosserSubSystem *)0x41f00000,0x3f000000,pZVar6,pZVar4,&local_60,aRStack_50,0
                );
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  *)aRStack_50);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BurdockBatter_SubSystem::BurdockBatter_SubSystem() */

void __thiscall BurdockBatter_SubSystem::BurdockBatter_SubSystem(BurdockBatter_SubSystem *this)

{
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_0666e350;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  *(undefined4 *)(this + 0x28) = 0x3f800000;
  return;
}


/* BurdockBatter_SubSystem::StaticNew() */

BurdockBatter_SubSystem * BurdockBatter_SubSystem::StaticNew(void)

{
  BurdockBatter_SubSystem *this;
  
  this = ::operator_new(0x30);
  BurdockBatter_SubSystem(this);
  return this;
}


/* BurdockBatter_SubSystem::registerForEvents() */

void __thiscall BurdockBatter_SubSystem::registerForEvents(BurdockBatter_SubSystem *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onProjectileCollideEntity);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Projectile*,BoardEntity*,Sexy::CBMemberTranslatorX<BurdockBatter_SubSystem,void(BurdockBatter_SubSystem::*)(Projectile*,BoardEntity*)>>
            ((MessageRouter *)puVar1,Message::NotifyProjectileCollideEntity,&local_40);
  return;
}


/* BurdockBatter_SubSystem::~BurdockBatter_SubSystem() */

void __thiscall BurdockBatter_SubSystem::~BurdockBatter_SubSystem(BurdockBatter_SubSystem *this)

{
  *(undefined ***)this = &PTR_GetClass_0666e350;
  std::
  vector<BurdockBatter_SubSystem::EnhancedProjectile,std::allocator<BurdockBatter_SubSystem::EnhancedProjectile>>
  ::~vector((vector<BurdockBatter_SubSystem::EnhancedProjectile,std::allocator<BurdockBatter_SubSystem::EnhancedProjectile>>
             *)(this + 0x10));
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* BurdockBatter_SubSystem::~BurdockBatter_SubSystem() */

void __thiscall BurdockBatter_SubSystem::~BurdockBatter_SubSystem(BurdockBatter_SubSystem *this)

{
  ~BurdockBatter_SubSystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BurdockBatter_SubSystem::addStraightProjectile(Projectile*, float, float, float) */

void __thiscall
BurdockBatter_SubSystem::addStraightProjectile
          (BurdockBatter_SubSystem *this,Projectile *param_1,float param_2,float param_3,
          float param_4)

{
  RtWeakPtr<SpartanBambooMatrixSystem> *this_00;
  long lVar1;
  long lVar2;
  Projectile *pPVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  float fVar6;
  undefined8 local_28;
  undefined4 local_20;
  float local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtWeakPtr<SpartanBambooMatrixSystem> *)findEnhancedProjectile(this,param_1,0);
  if (this_00 == (RtWeakPtr<SpartanBambooMatrixSystem> *)0x0) {
    std::
    vector<BurdockBatter_SubSystem::EnhancedProjectile,std::allocator<BurdockBatter_SubSystem::EnhancedProjectile>>
    ::emplace_back<>((vector<BurdockBatter_SubSystem::EnhancedProjectile,std::allocator<BurdockBatter_SubSystem::EnhancedProjectile>>
                      *)(this + 0x10));
    uVar5 = *(undefined8 *)(this + 0x10);
    lVar1 = FUN_03635c0c(uVar5,*(undefined8 *)(this + 0x18));
    this_00 = (RtWeakPtr<SpartanBambooMatrixSystem> *)FUN_03635c20(uVar5,lVar1 + -1);
  }
  else if (*(int *)(this_00 + 0x10) != 0) goto LAB_0363a1b4;
  *(undefined4 *)(this_00 + 0x10) = 0;
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_00,(RtWeakPtrBase *)&local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  *(float *)(this_00 + 0x18) = param_4;
  *(float *)(this_00 + 0x20) = *(float *)(this_00 + 0x20) + param_2;
  *(float *)(this_00 + 0x1c) = *(float *)(this_00 + 0x1c) + param_3;
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  fVar6 = (float)FUN_03635bac(*(undefined4 *)(lVar2 + 0xd8));
  FUN_03635bb0(fVar6 * (*(float *)(this_00 + 0x20) + 1.0),lVar1 + 0xd8);
  pPVar3 = (Projectile *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  puVar4 = (undefined8 *)Projectile::GetVelocityScale(pPVar3);
  local_28 = *puVar4;
  local_20 = *(undefined4 *)(puVar4 + 1);
  pPVar3 = (Projectile *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  puVar4 = (undefined8 *)Projectile::GetVelocity(pPVar3);
  local_10 = *(undefined4 *)(puVar4 + 1);
  local_18 = (float)*puVar4;
  _local_18 = CONCAT44((int)((ulong)*puVar4 >> 0x20),ABS(local_18));
  local_28 = CONCAT44(local_28._4_4_,(*(float *)(this_00 + 0x1c) + 1.0) * ABS((float)local_28));
  pPVar3 = (Projectile *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  Projectile::SetVelocity(pPVar3,(SexyVector3 *)&local_18);
  pPVar3 = (Projectile *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  Projectile::SetVelocityScale(pPVar3,(SexyVector3 *)&local_28);
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  FUN_036361d0(lVar1 + 0x191);
LAB_0363a1b4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BurdockBatter_SubSystem::addParabolicProjectile(Projectile*, float, Sexy::SexyVector3, float,
   float) */

void BurdockBatter_SubSystem::addParabolicProjectile
               (float param_2,undefined4 param_2_00,undefined4 param_3,undefined4 param_4,
               float param_5,float param_6,BurdockBatter_SubSystem *param_1,undefined8 param_8)

{
  long lVar1;
  RtWeakPtr<SpartanBambooMatrixSystem> *this;
  Projectile *pPVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined8 local_28;
  float local_20;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_40 = param_2_00;
  local_3c = param_3;
  local_38 = param_4;
  lVar1 = findEnhancedProjectile(param_1,param_8,1);
  if (lVar1 == 0) {
    std::
    vector<BurdockBatter_SubSystem::EnhancedProjectile,std::allocator<BurdockBatter_SubSystem::EnhancedProjectile>>
    ::emplace_back<>((vector<BurdockBatter_SubSystem::EnhancedProjectile,std::allocator<BurdockBatter_SubSystem::EnhancedProjectile>>
                      *)(param_1 + 0x10));
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    lVar1 = FUN_03635c0c(uVar4,*(undefined8 *)(param_1 + 0x18));
    this = (RtWeakPtr<SpartanBambooMatrixSystem> *)FUN_03635c20(uVar4,lVar1 + -1);
    *(undefined4 *)(this + 0x10) = 1;
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this,(RtWeakPtrBase *)aRStack_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    *(float *)(this + 0x14) = *(float *)(this + 0x14) + param_2;
    pPVar2 = (Projectile *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    puVar3 = (undefined8 *)Projectile::GetVelocityScale(pPVar2);
    uVar4 = *puVar3;
    local_20 = *(float *)(puVar3 + 1);
    local_28._4_4_ = (float)((ulong)uVar4 >> 0x20);
    local_28._0_4_ = (float)uVar4;
    fVar6 = ABS(local_28._4_4_);
    fVar5 = ABS((float)local_28);
    local_28 = uVar4;
    EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,fVar5,fVar6,ABS(local_20));
    Sexy::SexyVector3::operator=((SexyVector3 *)&local_28,(SexyVector3 *)aRStack_18);
    pPVar2 = (Projectile *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    Projectile::SetVelocityScale(pPVar2,(SexyVector3 *)&local_28);
    lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    FUN_03635bb8(0,lVar1 + 0xdc);
    pPVar2 = (Projectile *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    Projectile::LaunchAt(pPVar2,(SexyVector3 *)&local_40,param_5,param_6);
    lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    FUN_036361d0(lVar1 + 0x191);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BurdockBatter_SubSystem::addHomerProjectile(Projectile*, Projectile*) */

void BurdockBatter_SubSystem::addHomerProjectile(Projectile *param_1,Projectile *param_2)

{
  long lVar1;
  RtWeakPtr<SpartanBambooMatrixSystem> *this;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var2;
  float *pfVar3;
  Projectile *this_00;
  undefined8 uVar4;
  float local_18;
  undefined4 local_14;
  float local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = findEnhancedProjectile((BurdockBatter_SubSystem *)param_1,param_2,3);
  if (lVar1 == 0) {
    std::
    vector<BurdockBatter_SubSystem::EnhancedProjectile,std::allocator<BurdockBatter_SubSystem::EnhancedProjectile>>
    ::emplace_back<>((vector<BurdockBatter_SubSystem::EnhancedProjectile,std::allocator<BurdockBatter_SubSystem::EnhancedProjectile>>
                      *)(param_1 + 0x10));
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    lVar1 = FUN_03635c0c(uVar4,*(undefined8 *)(param_1 + 0x18));
    this = (RtWeakPtr<SpartanBambooMatrixSystem> *)FUN_03635c20(uVar4,lVar1 + -1);
    *(undefined4 *)(this + 0x10) = 3;
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this,(RtWeakPtrBase *)&local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this + 8,(RtWeakPtrBase *)&local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    DVec3::DVec3((DVec3 *)&local_18);
    p_Var2 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    pfVar3 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(p_Var2);
    local_18 = *pfVar3 + 5000.0;
    p_Var2 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    lVar1 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost(p_Var2);
    local_14 = *(undefined4 *)(lVar1 + 4);
    p_Var2 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    lVar1 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost(p_Var2);
    local_10 = *(float *)(lVar1 + 4) + 5000.0;
    this_00 = (Projectile *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    Projectile::LaunchAt(this_00,(SexyVector3 *)&local_18,local_10,5.0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BurdockBatter_SubSystem::addCriticalProjectile(Projectile*) */

void __thiscall
BurdockBatter_SubSystem::addCriticalProjectile(BurdockBatter_SubSystem *this,Projectile *param_1)

{
  long lVar1;
  RtWeakPtr<SpartanBambooMatrixSystem> *this_00;
  undefined8 uVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = findEnhancedProjectile(this,param_1,4);
  if (lVar1 == 0) {
    std::
    vector<BurdockBatter_SubSystem::EnhancedProjectile,std::allocator<BurdockBatter_SubSystem::EnhancedProjectile>>
    ::emplace_back<>((vector<BurdockBatter_SubSystem::EnhancedProjectile,std::allocator<BurdockBatter_SubSystem::EnhancedProjectile>>
                      *)(this + 0x10));
    uVar2 = *(undefined8 *)(this + 0x10);
    lVar1 = FUN_03635c0c(uVar2,*(undefined8 *)(this + 0x18));
    this_00 = (RtWeakPtr<SpartanBambooMatrixSystem> *)FUN_03635c20(uVar2,lVar1 + -1);
    *(undefined4 *)(this_00 + 0x10) = 4;
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_00,(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BurdockBatter_SubSystem::Update() */

void __thiscall BurdockBatter_SubSystem::Update(BurdockBatter_SubSystem *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  char cVar2;
  EnhancedProjectile *pEVar3;
  RtObject *pRVar4;
  BurdockBatterFallProjectile *pBVar5;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  long *plVar6;
  Projectile *this_02;
  float *pfVar7;
  long lVar8;
  float fVar9;
  undefined8 local_48;
  RtWeakPtr<Sexy::SoundResource> aRStack_40 [8];
  undefined8 local_38;
  undefined8 local_30;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  int local_20;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x10);
  local_8 = ___stack_chk_guard;
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
LAB_0363c3b0:
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_48,(__normal_iterator *)&local_30);
  do {
    if (!bVar1) {
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    pEVar3 = (EnhancedProjectile *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
    EnhancedProjectile::EnhancedProjectile((EnhancedProjectile *)&local_30,pEVar3);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,(RtWeakPtrBase *)&local_30);
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_40);
    if (cVar2 != '\0') {
      if (local_20 == 3) {
        this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
        lVar8 = std::
                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::_M_leftmost(this_01);
        if (2000.0 < *(float *)(lVar8 + 8)) {
          pRVar4 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
          pBVar5 = Sexy::RtObject::Cast<BurdockBatterFallProjectile>(pRVar4);
          BurdockBatterFallProjectile::fall(pBVar5);
          plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
          (**(code **)(*plVar6 + 0x48))();
        }
      }
      else if (local_20 == 1) {
        bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_40);
        if (bVar1) {
          pRVar4 = (RtObject *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
          bVar1 = Sexy::RtObject::IsA<PrimalPeashooterSplitTargetProjectile>(pRVar4);
          if (bVar1) goto LAB_0363c414;
        }
        this_02 = (Projectile *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
        pfVar7 = (float *)Projectile::GetVelocity(this_02);
        fVar9 = atan2f(pfVar7[2],*pfVar7);
        lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
        FUN_03635ba4(fVar9,lVar8 + 0xc4);
      }
    }
LAB_0363c414:
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_40);
    if (cVar2 != '\0') break;
    if (local_20 == 3) {
      pRVar4 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
      pBVar5 = Sexy::RtObject::Cast<BurdockBatterFallProjectile>(pRVar4);
      BurdockBatterFallProjectile::fall(pBVar5);
    }
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_38,(__normal_iterator *)&local_48);
    local_48 = std::
               vector<BurdockBatter_SubSystem::EnhancedProjectile,std::allocator<BurdockBatter_SubSystem::EnhancedProjectile>>
               ::erase((vector<BurdockBatter_SubSystem::EnhancedProjectile,std::allocator<BurdockBatter_SubSystem::EnhancedProjectile>>
                        *)this_00,local_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
    DragonBruitLauncherSubSystem::DragonBruitLauncherEntry::~DragonBruitLauncherEntry
              ((DragonBruitLauncherEntry *)&local_30);
    local_30 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_48,(__normal_iterator *)&local_30);
  } while( true );
  __gnu_cxx::
  __normal_iterator<Sexy::CharData_const*,std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>>
  ::operator++((__normal_iterator<Sexy::CharData_const*,std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>>
                *)&local_48);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
  DragonBruitLauncherSubSystem::DragonBruitLauncherEntry::~DragonBruitLauncherEntry
            ((DragonBruitLauncherEntry *)&local_30);
  goto LAB_0363c3b0;
}

