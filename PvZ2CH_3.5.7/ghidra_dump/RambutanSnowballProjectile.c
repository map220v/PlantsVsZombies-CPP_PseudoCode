// Class: RambutanSnowballProjectile


/* RambutanSnowballProjectile::OnCollideEntity(BoardEntity*) */

undefined8 __thiscall
RambutanSnowballProjectile::OnCollideEntity(RambutanSnowballProjectile *this,BoardEntity *param_1)

{
  undefined8 uVar1;
  
  if (this[0x1a5] != (RambutanSnowballProjectile)0x0) {
    return 0;
  }
  uVar1 = Projectile::OnCollideEntity((Projectile *)this,param_1);
  return uVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RambutanSnowballProjectile::StaticClassInit() */

void RambutanSnowballProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"RambutanSnowballProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_038a36c4,0x1b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RambutanSnowballProjectile::StaticGetClass() */

long * RambutanSnowballProjectile::StaticGetClass(void)

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
  uVar2 = Projectile::StaticGetClass();
  (*pcVar3)(plVar1,"RambutanSnowballProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RambutanSnowballProjectile::GetClass() const */

long * RambutanSnowballProjectile::GetClass(void)

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
  uVar2 = Projectile::StaticGetClass();
  (*pcVar3)(plVar1,"RambutanSnowballProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RambutanSnowballProjectile::onProjectileInitialized() */

void __thiscall
RambutanSnowballProjectile::onProjectileInitialized(RambutanSnowballProjectile *this)

{
  char cVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  SexyVector3 *pSVar2;
  
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x68));
  if (cVar1 == '\0') {
    return;
  }
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x68));
  pSVar2 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(this_00);
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x1a8),pSVar2);
  return;
}


/* RambutanSnowballProjectile::OnRambutanDestroy(BoardEntity*) */

void __thiscall
RambutanSnowballProjectile::OnRambutanDestroy(RambutanSnowballProjectile *this,BoardEntity *param_1)

{
  bool bVar1;
  ResourceInfo *pRVar2;
  
  if (param_1 != (BoardEntity *)0x0) {
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x68));
    if (((bVar1) && (bVar1 = Sexy::RtObject::IsA<Plant>((RtObject *)param_1), bVar1)) &&
       (pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x68)),
       param_1 == (BoardEntity *)pRVar2)) {
      (**(code **)(*(long *)this + 0x48))(this);
    }
  }
  return;
}


/* RambutanSnowballProjectile::RambutanSnowballProjectile() */

void __thiscall
RambutanSnowballProjectile::RambutanSnowballProjectile(RambutanSnowballProjectile *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Projectile::Projectile((Projectile *)this);
  this[0x1a5] = (RambutanSnowballProjectile)0x0;
  *(undefined ***)this = &PTR_GetClass_066b1f80;
  *(undefined ***)(this + 0x10) = &PTR__RambutanSnowballProjectile_066b2170;
  DVec3::DVec3((DVec3 *)(this + 0x1a8));
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnRambutanDestroy);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<BoardEntity*,Sexy::CBMemberTranslatorX<RambutanSnowballProjectile,void(RambutanSnowballProjectile::*)(BoardEntity*)>>
            ((MessageRouter *)puVar1,Message::RambutanDestroy,&local_40);
  return;
}


/* RambutanSnowballProjectile::StaticNew() */

RambutanSnowballProjectile * RambutanSnowballProjectile::StaticNew(void)

{
  RambutanSnowballProjectile *this;
  
  this = ::operator_new(0x1b8);
  RambutanSnowballProjectile(this);
  return this;
}


/* RambutanSnowballProjectile::~RambutanSnowballProjectile() */

void __thiscall
RambutanSnowballProjectile::~RambutanSnowballProjectile(RambutanSnowballProjectile *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  *(undefined ***)this = &PTR_GetClass_066b1f80;
  *(undefined ***)(this + 0x10) = &PTR__RambutanSnowballProjectile_066b2170;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnRambutanDestroy);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Unsubscribe<BoardEntity*,Sexy::CBMemberTranslatorX<RambutanSnowballProjectile,void(RambutanSnowballProjectile::*)(BoardEntity*)>>
            ((MessageRouter *)puVar1,Message::RambutanDestroy,&local_40);
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to RambutanSnowballProjectile::~RambutanSnowballProjectile() */

void __thiscall
RambutanSnowballProjectile::~RambutanSnowballProjectile(RambutanSnowballProjectile *this)

{
  ~RambutanSnowballProjectile(this + -0x10);
  return;
}


/* RambutanSnowballProjectile::~RambutanSnowballProjectile() */

void __thiscall
RambutanSnowballProjectile::~RambutanSnowballProjectile(RambutanSnowballProjectile *this)

{
  ~RambutanSnowballProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to RambutanSnowballProjectile::~RambutanSnowballProjectile() */

void __thiscall
RambutanSnowballProjectile::~RambutanSnowballProjectile(RambutanSnowballProjectile *this)

{
  ~RambutanSnowballProjectile(this + -0x10);
  return;
}


/* RambutanSnowballProjectile::onUpdate(float) */

void RambutanSnowballProjectile::onUpdate(float param_1)

{
  undefined *this;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *in_x0;
  float *pfVar1;
  BoardEntity *pBVar2;
  
  pfVar1 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(in_x0);
  if (*pfVar1 <= 900.0) {
    return;
  }
  (**(code **)(*(long *)in_x0 + 0x48))();
  this = gMessageRouter;
  pBVar2 = (BoardEntity *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x68))
  ;
  MessageRouter::Post<BoardEntity*,bool,BoardEntity*,bool>
            ((MessageRouter *)this,Message::RambutanReturn,pBVar2,true);
  return;
}


/* RambutanSnowballProjectile::OnCollideGround() */

ulong __thiscall RambutanSnowballProjectile::OnCollideGround(RambutanSnowballProjectile *this)

{
  RambutanSnowballProjectile RVar1;
  undefined *this_00;
  ulong uVar2;
  BoardEntity *pBVar3;
  
  RVar1 = this[0x1a5];
  if ((byte)RVar1 == 0) {
    uVar2 = Projectile::OnCollideGround((Projectile *)this);
    return uVar2;
  }
  (**(code **)(*(long *)this + 0x48))();
  this_00 = gMessageRouter;
  pBVar3 = (BoardEntity *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x68));
  MessageRouter::Post<BoardEntity*,bool,BoardEntity*,bool>
            ((MessageRouter *)this_00,Message::RambutanReturn,pBVar3,false);
  return (ulong)(uint)(byte)RVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RambutanSnowballProjectile::SetAvatarIndex(int) */

void __thiscall
RambutanSnowballProjectile::SetAvatarIndex(RambutanSnowballProjectile *this,int param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  PopAnimRig *pPVar4;
  long lVar5;
  string *psVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  
  lVar1 = ___stack_chk_guard;
  uVar8 = DAT_06ab6bf0 & 1;
  if (((DAT_06ab6bf0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06ab6bf0), iVar3 != 0)) {
    std::string::string((string *)&DAT_06ab6b30,"");
    nop();
    __cxa_guard_release(&DAT_06ab6bf0);
    __cxa_atexit(FUN_038a1f34,uVar8,&DAT_06a88000);
  }
  if (((DAT_06ab6be8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06ab6be8), iVar3 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ab6aa0,(string *)&DAT_06ab6b30,
               (allocator *)&PlantAnimRig_WinterRambutan::sClass);
    __cxa_guard_release(&DAT_06ab6be8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ab6aa0,
                 &DAT_06a88000);
  }
  uVar8 = 0;
  pPVar4 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
  PopAnimRig::SetLayerVisibility(pPVar4,(vector *)WinterRambutan::i_layerNames_avatar_0,false);
  uVar9 = DAT_06ab6aa0;
  lVar5 = FUN_038a2254(DAT_06ab6aa0,DAT_06ab6aa8);
  if (lVar5 != 0) {
    do {
      psVar6 = (string *)FUN_038a2260(uVar9,uVar8);
      bVar2 = std::operator!=(psVar6,"");
      if (bVar2) {
        pPVar4 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
        psVar6 = (string *)FUN_038a2260(DAT_06ab6aa0,uVar8);
        PopAnimRig::SetLayerVisibility(pPVar4,psVar6,false);
        if ((long)param_1 == uVar8) {
          pPVar4 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
          psVar6 = (string *)FUN_038a2260(DAT_06ab6aa0,(long)param_1);
          PopAnimRig::SetLayerVisibility(pPVar4,psVar6,true);
        }
      }
      uVar9 = DAT_06ab6aa0;
      uVar8 = uVar8 + 1;
      uVar7 = FUN_038a2254(DAT_06ab6aa0,DAT_06ab6aa8);
    } while (uVar8 < uVar7);
  }
  if (param_1 == 0) {
    pPVar4 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
    PopAnimRig::SetLayerVisibility(pPVar4,(vector *)WinterRambutan::i_layerNames_avatar_0,true);
  }
  if (lVar1 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RambutanSnowballProjectile::handleImpact(BoardEntity*) */

void RambutanSnowballProjectile::handleImpact(BoardEntity *param_1)

{
  char cVar1;
  int iVar2;
  Zombie *this;
  ResourceInfo *pRVar3;
  PopAnimRig *pPVar4;
  float *pfVar5;
  ZombieTosserSubSystem *pZVar6;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  SexyVector3 *pSVar7;
  RtObject *in_x1;
  float fVar8;
  undefined4 in_s1;
  float in_s2;
  undefined8 local_60;
  float local_58;
  DummyInit aDStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (in_x1 != (RtObject *)0x0) {
    this = Sexy::RtObject::Cast<Zombie>(in_x1);
    if (this != (Zombie *)0x0) {
      cVar1 = Zombie::HasCondition(this,0x99);
      if (cVar1 == '\0') {
        cVar1 = WinterRambutan::CanZombieLaunch(this);
        if (cVar1 != '\0') {
          if (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) != '\0') {
            pfVar5 = (float *)std::
                              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                             *)this);
            if (*pfVar5 < 800.0) {
              local_60 = *(undefined8 *)pfVar5;
              local_58 = pfVar5[2];
              iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
              local_60 = CONCAT44(local_60._4_4_,(float)iVar2 + (float)local_60);
              pZVar6 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0))
              ;
              RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate
                        ((RtReflectionDelegate<Sexy::Delegate1<Zombie*>> *)aDStack_50);
              ZombieTosserSubSystem::LaunchZombie
                        ((ZombieTosserSubSystem *)0x42480000,0x3f800000,pZVar6,this,&local_60,
                         (RtReflectionDelegate<Sexy::Delegate1<Zombie*>> *)aDStack_50,1);
              RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              ::~RtReflectionDelegate
                        ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                          *)aDStack_50);
            }
            goto LAB_038a7bf4;
          }
          iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
          fVar8 = (float)ZombieTosserSubSystem::CaculateTargetButNotOffScreen(this,(float)iVar2);
          local_60 = CONCAT44(in_s1,fVar8);
          local_58 = in_s2;
          pfVar5 = (float *)std::
                            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                           *)this);
          if (*pfVar5 < fVar8) {
            pZVar6 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
            RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate
                      ((RtReflectionDelegate<Sexy::Delegate1<Zombie*>> *)aDStack_50);
            ZombieTosserSubSystem::LaunchZombie
                      ((ZombieTosserSubSystem *)0x42480000,0x3f800000,pZVar6,this,&local_60,
                       (RtReflectionDelegate<Sexy::Delegate1<Zombie*>> *)aDStack_50,1);
            RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
            ::~RtReflectionDelegate
                      ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                        *)aDStack_50);
          }
        }
      }
      else {
        Zombie::EndCondition(this,0x99);
        pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(param_1 + 0x68));
        Zombie::TakeFatalDamage(this,(BoardEntity *)pRVar3);
      }
    }
    Projectile::handleImpact((Projectile *)param_1,(BoardEntity *)in_x1);
    pPVar4 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)param_1);
    std::string::string((string *)&local_60,"attack_ret");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_50);
    PopAnimRig::PlayAndContinue(pPVar4,(string *)&local_60,0,aDStack_50);
    std::string::~string((string *)&local_60);
    nop();
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(param_1 + 0x68));
    if (cVar1 != '\0') {
      this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x68));
      pSVar7 = (SexyVector3 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost(this_00);
      Sexy::SexyVector3::operator=((SexyVector3 *)(param_1 + 0x1a8),pSVar7);
    }
    Projectile::LaunchAt((Projectile *)param_1,(SexyVector3 *)(param_1 + 0x1a8),400.0,1.15);
    param_1[0x1a5] = (BoardEntity)0x1;
  }
LAB_038a7bf4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(0);
}

