// Class: JackOLanternGhost


/* JackOLanternGhost::SetPlant(Sexy::RtWeakPtr<Plant>) */

void __thiscall JackOLanternGhost::SetPlant(JackOLanternGhost *this,RtWeakPtr *param_2)

{
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x1c0),param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JackOLanternGhost::StaticClassInit() */

void JackOLanternGhost::StaticClassInit(void)

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
    std::string::string(asStack_10,"JackOLanternGhost");
    (*pcVar2)(plVar1,asStack_10,FUN_04cff544,0x1f8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* JackOLanternGhost::StaticGetClass() */

long * JackOLanternGhost::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"JackOLanternGhost",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* JackOLanternGhost::GetClass() const */

long * JackOLanternGhost::GetClass(void)

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
  (*pcVar3)(plVar1,"JackOLanternGhost",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JackOLanternGhost::DrawCollisionInfo(Sexy::Graphics*) */

void __thiscall JackOLanternGhost::DrawCollisionInfo(JackOLanternGhost *this,Graphics *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Projectile::CalcCollisionRectBoardSpace();
  Sexy::Color::Color(aCStack_18,0,0xff,0);
  Sexy::Graphics::SetColor(param_1,aCStack_18);
  fVar3 = *(float *)(param_1 + 0x20);
  iVar1 = FUN_04cfafd4(local_28);
  fVar4 = *(float *)(param_1 + 0x18);
  fVar5 = *(float *)(param_1 + 0x24);
  local_28 = (int)((float)(int)(((float)iVar1 - fVar3) * fVar4) + fVar3);
  iVar1 = FUN_04cfafd4(local_24);
  fVar3 = *(float *)(param_1 + 0x1c);
  local_24 = (int)((float)(int)(((float)iVar1 - fVar5) * fVar3) + fVar5);
  iVar1 = FUN_04cfafd4(local_20);
  local_20 = (int)((float)iVar1 * fVar4);
  iVar1 = FUN_04cfafd4(local_1c);
  local_1c = (int)((float)iVar1 * fVar3);
  Sexy::Graphics::DrawRect(param_1,(TRect *)&local_28);
  Sexy::Color::Color(aCStack_18,0xff,0,0xff);
  Sexy::Graphics::SetColor(param_1,aCStack_18);
  puVar2 = (undefined4 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  fVar3 = (float)FUN_04cfafe8(*puVar2);
  fVar4 = (float)FUN_04cfafe8((float)puVar2[1] - (float)puVar2[2]);
  Sexy::Graphics::FillRect(param_1,(int)(fVar3 - 4.0),(int)(fVar4 - 4.0),8,8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* JackOLanternGhost::SetFacing(int) */

void __thiscall JackOLanternGhost::SetFacing(JackOLanternGhost *this,int param_1)

{
  *(int *)(this + 0x1cc) = param_1;
  FUN_04cfac30(this + 0xd4,param_1 != 1);
  return;
}


/* JackOLanternGhost::CalcZombieApplyDuration(Zombie*) */

undefined4 __thiscall
JackOLanternGhost::CalcZombieApplyDuration(JackOLanternGhost *this,Zombie *param_1)

{
  int iVar1;
  
  iVar1 = Zombie::GetSizeType(param_1);
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      return *(undefined4 *)(this + 0x1ac);
    }
    if (iVar1 == 2) {
      return *(undefined4 *)(this + 0x1b0);
    }
  }
  return *(undefined4 *)(this + 0x1a8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JackOLanternGhost::moveThroughTimeIdle(float) */

void JackOLanternGhost::moveThroughTimeIdle(float param_1)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *in_x0;
  undefined8 *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 in_s1;
  undefined4 in_s2;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_28 [4];
  undefined4 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar1 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(in_x0);
  local_48 = *puVar1;
  local_40 = *(undefined4 *)(puVar1 + 1);
  if (*(int *)(in_x0 + 0x1cc) == 1) {
    local_38 = *(undefined8 *)(in_x0 + 0x1d0);
    local_30 = *(undefined4 *)(in_x0 + 0x1d8);
  }
  else {
    uVar3 = Sexy::SexyVector3::operator-((SexyVector3 *)(in_x0 + 0x1d0));
    local_38 = CONCAT44(in_s1,uVar3);
    local_30 = in_s2;
  }
  pcVar2 = *(code **)(*(long *)in_x0 + 0x78);
  local_28[0] = Sexy::SexyVector3::operator*((SexyVector3 *)&local_38,param_1);
  local_18 = Sexy::SexyVector3::operator+((SexyVector3 *)&local_48,(SexyVector3 *)local_28);
  (*pcVar2)();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* JackOLanternGhost::SetParam(JackOLanternGhostParam) */

void __thiscall JackOLanternGhost::SetParam(JackOLanternGhost *this,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar4 = param_2[4];
  *(undefined4 *)(this + 0x1a8) = *param_2;
  *(undefined4 *)(this + 0x1ac) = uVar1;
  *(undefined4 *)(this + 0x1b0) = uVar2;
  *(undefined4 *)(this + 0x1b4) = uVar3;
  *(undefined4 *)(this + 0x1b8) = uVar4;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JackOLanternGhost::OnPlantDestroyed(Plant*) */

void __thiscall JackOLanternGhost::OnPlantDestroyed(JackOLanternGhost *this,Plant *param_1)

{
  char cVar1;
  RtWeakPtrBase aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (Plant *)0x0) {
    ToolPacketData::GetProps();
    cVar1 = Sexy::RtWeakPtrBase::operator==(aRStack_10,(RtWeakPtrBase *)(this + 0x1c0));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    if (cVar1 != '\0') {
      (**(code **)(*(long *)this + 0x48))(this);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* JackOLanternGhost::~JackOLanternGhost() */

void __thiscall JackOLanternGhost::~JackOLanternGhost(JackOLanternGhost *this)

{
  *(undefined ***)this = &PTR_GetClass_069a5250;
  *(undefined ***)(this + 0x10) = &PTR__JackOLanternGhost_069a5440;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1e8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1c0));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to JackOLanternGhost::~JackOLanternGhost() */

void __thiscall JackOLanternGhost::~JackOLanternGhost(JackOLanternGhost *this)

{
  ~JackOLanternGhost(this + -0x10);
  return;
}


/* JackOLanternGhost::~JackOLanternGhost() */

void __thiscall JackOLanternGhost::~JackOLanternGhost(JackOLanternGhost *this)

{
  ~JackOLanternGhost(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to JackOLanternGhost::~JackOLanternGhost() */

void __thiscall JackOLanternGhost::~JackOLanternGhost(JackOLanternGhost *this)

{
  ~JackOLanternGhost(this + -0x10);
  return;
}


/* JackOLanternGhost::JackOLanternGhost() */

void __thiscall JackOLanternGhost::JackOLanternGhost(JackOLanternGhost *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_069a5250;
  *(undefined ***)(this + 0x10) = &PTR__JackOLanternGhost_069a5440;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1c0));
  DVec3::DVec3((DVec3 *)(this + 0x1d0));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1e8));
  return;
}


/* JackOLanternGhost::StaticNew() */

JackOLanternGhost * JackOLanternGhost::StaticNew(void)

{
  JackOLanternGhost *this;
  
  this = ::operator_new(0x1f8);
  JackOLanternGhost(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JackOLanternGhost::GetTargetPos(BoardEntity*) */

void __thiscall JackOLanternGhost::GetTargetPos(JackOLanternGhost *this,BoardEntity *param_1)

{
  bool bVar1;
  SexyVector3 *this_00;
  RtObject *this_01;
  long lVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  Vec3 aVStack_28 [16];
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DVec3::DVec3((DVec3 *)&local_38);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x1e8));
  if (bVar1) {
    this_01 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1e8));
    bVar1 = Sexy::RtObject::IsA<ZombieZombossMech_Eighties>(this_01);
    if (bVar1) {
      local_38 = FUN_04cfc150(param_1);
      lVar2 = std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)this);
      uStack_34 = *(undefined4 *)(lVar2 + 4);
      local_30 = 0;
      goto LAB_04cfc7a0;
    }
  }
  this_00 = (SexyVector3 *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)param_1);
  fVar3 = (float)FUN_04cfafe8(0xc1700000);
  uVar5 = 0;
  EATextSquish::Vec3::Vec3(aVStack_28,0.0,fVar3,0.0);
  uVar4 = Sexy::SexyVector3::operator+(this_00,(SexyVector3 *)aVStack_28);
  local_18 = CONCAT44(fVar3,uVar4);
  local_10 = uVar5;
  Sexy::SexyVector3::operator=((SexyVector3 *)&local_38,(SexyVector3 *)&local_18);
LAB_04cfc7a0:
  local_18 = CONCAT44(uStack_34,local_38);
  local_10 = local_30;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_38,uStack_34,local_30);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JackOLanternGhost::SetOverrideTarget(BoardEntity*) */

void JackOLanternGhost::SetOverrideTarget(BoardEntity *param_1)

{
  float *pfVar1;
  float *pfVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *in_x1;
  float fVar3;
  undefined8 local_48;
  float local_40;
  DVec3 aDStack_38 [16];
  DVec3 aDStack_28 [16];
  undefined4 local_18;
  float local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (in_x1 == (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)0x0) {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_18);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(param_1 + 0x1e8),(RtWeakPtr *)&local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  }
  else {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)(param_1 + 0x1e8),(RtWeakPtrBase *)&local_18)
    ;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    *(undefined4 *)(param_1 + 0x1c8) = 1;
    pfVar1 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)param_1);
    pfVar2 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(in_x1);
    fVar3 = *pfVar1;
    SetFacing((JackOLanternGhost *)param_1,(uint)(fVar3 < *pfVar2));
    local_48 = *(undefined8 *)pfVar1;
    local_40 = pfVar1[2];
    DVec3::DVec3(aDStack_38);
    DVec3::DVec3(aDStack_28);
    local_18 = GetTargetPos((JackOLanternGhost *)param_1,(BoardEntity *)in_x1);
    local_14 = fVar3;
    CalculateTossVelocity
              ((SexyVector3 *)&local_48,(SexyVector3 *)&local_18,1.0,1.0,(SexyVector3 *)aDStack_38,
               (SexyVector3 *)aDStack_28);
    Projectile::SetVelocity((Projectile *)param_1,(SexyVector3 *)aDStack_38);
    Projectile::SetAcceleration((Projectile *)param_1,(SexyVector3 *)aDStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* JackOLanternGhost::onDestroy() */

void __thiscall JackOLanternGhost::onDestroy(JackOLanternGhost *this)

{
  bool bVar1;
  PlantJackOLantern *this_00;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x1c0));
  if (bVar1) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1c0));
    nop();
    if (this_00 != (PlantJackOLantern *)0x0) {
      PlantJackOLantern::ResetGhostLantern(this_00);
      return;
    }
  }
  return;
}


/* JackOLanternGhost::ApplyGhostLantern(BoardEntity*) */

void __thiscall JackOLanternGhost::ApplyGhostLantern(JackOLanternGhost *this,BoardEntity *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  Zombie *this_00;
  ZombieZombossMech *pZVar4;
  undefined8 uVar5;
  Zombie *pZVar6;
  
  this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
  cVar1 = Zombie::IsTargetable(this_00);
  if (((((cVar1 != '\0') && (cVar1 = Zombie::IsControlled(this_00), cVar1 == '\0')) &&
       (cVar1 = (**(code **)(*(long *)this_00 + 0x328))(this_00), cVar1 == '\0')) &&
      (((cVar1 = Zombie::IsInvisible(this_00), cVar1 == '\0' &&
        (cVar1 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar1 == '\0')) &&
       ((cVar1 = Zombie::HasFogImmune(this_00), cVar1 == '\0' &&
        ((cVar1 = Zombie::IsBerserk(this_00), cVar1 == '\0' &&
         (cVar1 = Zombie::IsBoss(this_00), cVar1 == '\0')))))))) &&
     ((pZVar4 = Sexy::RtObject::Cast<ZombieZombossMech>((RtObject *)this_00),
      pZVar4 == (ZombieZombossMech *)0x0 &&
      (((((cVar1 = (**(code **)(*(long *)this_00 + 0x4d8))(this_00), cVar1 == '\0' &&
          (cVar1 = (**(code **)(*(long *)this_00 + 0x508))(this_00), cVar1 == '\0')) &&
         (bVar2 = Sexy::RtObject::IsA<ZombiePirateBarrel>((RtObject *)this_00), !bVar2)) &&
        ((bVar2 = Sexy::RtObject::IsA<ZombiePirateParrot>((RtObject *)this_00), !bVar2 &&
         (bVar2 = Sexy::RtObject::IsA<ZombieModernMiner>((RtObject *)this_00), !bVar2)))) &&
       (bVar2 = Sexy::RtObject::IsA<ZombieProspector>((RtObject *)this_00), !bVar2)))))) {
    pZVar6._0_4_ = (Zombie *)CalcZombieApplyDuration(this,this_00);
    Sexy::OutputDebugStrF((wchar_t *)"ApplyGhostLantern duration1=%f",(double)(float)pZVar6._0_4_);
    iVar3 = Zombie::GetFacing(this_00);
    Zombie::SetFacing(this_00,iVar3 != 1);
    cVar1 = Zombie::HasCondition(this_00,0x32);
    if (cVar1 == '\0') {
      Zombie::ApplyCondition(pZVar6._0_4_,0,this_00,0x32,1);
      Zombie::SetConditionTracker(*(undefined4 *)(this + 0x1b8),this_00,0x32);
    }
    Zombie::ApplyCondition(pZVar6._0_4_,0,this_00,0x77,1);
    uVar5 = Zombie::GetConditionTracker(this_00);
                    /* WARNING: Load size is inaccurate */
    ZombieConditionTracker::SetAdditionalValue
              (*(ZombieConditionTracker **)(this + 0x1b4),uVar5,0x77);
    uVar5 = Zombie::GetConditionTracker(this_00);
                    /* WARNING: Load size is inaccurate */
    ZombieConditionTracker::SetExtraAdditionalValue
              (*(ZombieConditionTracker **)(this + 0x1b8),uVar5,0x77);
    RealObject::JoinTeam((RealObject *)this_00,1);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JackOLanternGhost::CanBeTarget(BoardEntity*) */

void __thiscall JackOLanternGhost::CanBeTarget(JackOLanternGhost *this,BoardEntity *param_1)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  Zombie *this_00;
  ZombieZombossMech *pZVar4;
  code *pcVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (BoardEntity *)0x0) {
    bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_1);
    if (((((((bVar1) && (nop(), this_00 != (Zombie *)0x0)) &&
           (cVar2 = (**(code **)(*(long *)this_00 + 0x328))(), cVar2 == '\0')) &&
          ((cVar2 = Zombie::IsInvisible(this_00), cVar2 == '\0' &&
           (cVar2 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar2 == '\0')))) &&
         ((cVar2 = RealObject::IsOnTeam(this_00,2), cVar2 != '\0' &&
          ((cVar2 = Zombie::IsTargetable(this_00), cVar2 != '\0' &&
           (cVar2 = Zombie::IsIgnoringAllDamage(this_00), cVar2 == '\0')))))) &&
        (cVar2 = Zombie::IsControlled(this_00), cVar2 == '\0')) &&
       (((((cVar2 = Zombie::HasFogImmune(this_00), cVar2 == '\0' &&
           (cVar2 = Zombie::IsBerserk(this_00), cVar2 == '\0')) &&
          (cVar2 = Zombie::IsBoss(this_00), cVar2 == '\0')) &&
         (((pZVar4 = Sexy::RtObject::Cast<ZombieZombossMech>((RtObject *)this_00),
           pZVar4 == (ZombieZombossMech *)0x0 &&
           (cVar2 = (**(code **)(*(long *)this_00 + 0x4d8))(this_00), cVar2 == '\0')) &&
          ((cVar2 = (**(code **)(*(long *)this_00 + 0x508))(this_00), cVar2 == '\0' &&
           ((bVar1 = Sexy::RtObject::IsA<ZombiePirateBarrel>((RtObject *)this_00), !bVar1 &&
            (bVar1 = Sexy::RtObject::IsA<ZombiePirateParrot>((RtObject *)this_00), !bVar1)))))))) &&
        ((bVar1 = Sexy::RtObject::IsA<ZombieModernMiner>((RtObject *)this_00), !bVar1 &&
         (bVar1 = Sexy::RtObject::IsA<ZombieProspector>((RtObject *)this_00), !bVar1)))))) {
      pcVar5 = *(code **)(*(long *)this_00 + 0x3d0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1c0));
      Plant::GetType();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
      uVar3 = (*pcVar5)(this_00,aRStack_10,0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
      goto LAB_04cfce74;
    }
  }
  uVar3 = 0;
LAB_04cfce74:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JackOLanternGhost::onProjectileInitialized() */

void __thiscall JackOLanternGhost::onProjectileInitialized(JackOLanternGhost *this)

{
  undefined *puVar1;
  float fVar2;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  *(undefined4 *)(this + 0x1c8) = 0;
  *(undefined4 *)(this + 0x1a8) = 0x40a00000;
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x1ac) = 0x40a00000;
  *(undefined4 *)(this + 0x1b0) = 0x40a00000;
  *(undefined4 *)(this + 0x1b4) = 0x40a00000;
  *(undefined4 *)(this + 0x1b8) = 0x42700000;
  SetFacing(this,0);
  EATextSquish::Vec3::Vec3((Vec3 *)&local_20,20.0,0.0,0.0);
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x1d0),(SexyVector3 *)&local_20);
  *(undefined4 *)(this + 0x1e0) = 0x3f800000;
  fVar2 = (float)PVZ_T();
  this[0x1f0] = (JackOLanternGhost)0x0;
  *(undefined4 *)(this + 0x1e4) = 1;
  *(float *)(this + 0x1dc) = fVar2 + *(float *)(this + 0x1e0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnPlantDestroyed);
  local_40 = local_20;
  uStack_38 = uStack_18;
  local_30 = local_10;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<JackOLanternGhost,void(JackOLanternGhost::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantDestroyed,&local_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JackOLanternGhost::FindTarget() */

void __thiscall JackOLanternGhost::FindTarget(JackOLanternGhost *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  BoardEntity *pBVar6;
  BoardEntity *pBVar7;
  float fVar8;
  float fVar9;
  undefined8 local_40;
  undefined8 local_38;
  Insets aIStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  pBVar7 = (BoardEntity *)0x0;
  local_8 = ___stack_chk_guard;
  iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
  iVar4 = BoardConstants::NUMBER_OF_ROWS();
  Sexy::Insets::Insets(aIStack_30,0,0,iVar3,iVar4);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesInGridSquares(avStack_20,2,aIStack_30);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  fVar9 = 1e+06;
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar1) {
    puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    pBVar6 = (BoardEntity *)*puVar5;
    cVar2 = CanBeTarget(this,pBVar6);
    if ((cVar2 != '\0') &&
       (fVar8 = (float)FUN_04cfadb0(*(undefined4 *)(pBVar6 + 0x18),*(undefined4 *)(pBVar6 + 0x1c),
                                    *(undefined4 *)(pBVar6 + 0x20)), fVar8 < fVar9)) {
      pBVar7 = pBVar6;
      fVar9 = fVar8;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pBVar7);
}


/* JackOLanternGhost::FindNewTarget() */

void __thiscall JackOLanternGhost::FindNewTarget(JackOLanternGhost *this)

{
  FindTarget(this);
  SetOverrideTarget((BoardEntity *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JackOLanternGhost::moveThroughTime(float) */

void __thiscall JackOLanternGhost::moveThroughTime(JackOLanternGhost *this,float param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ResourceInfo *pRVar4;
  long lVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  undefined8 local_18;
  float local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x1c8) == 0) {
    FUN_04cfac30(this + 0xd4,*(int *)(this + 0x1cc) != 1);
    fVar7 = (float)PVZ_T();
    if (*(float *)(this + 0x1dc) < fVar7) {
      fVar7 = (float)PVZ_T();
      *(float *)(this + 0x1dc) = fVar7 + *(float *)(this + 0x1e0);
      iVar3 = FUN_04cfac64(*(undefined4 *)(this + 0x1cc));
      SetFacing(this,(uint)(iVar3 == 0));
    }
    pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x1e8));
    cVar1 = CanBeTarget(this,(BoardEntity *)pRVar4);
    if (cVar1 == '\0') {
      FindNewTarget(this);
      moveThroughTimeIdle(param_1);
    }
    else {
      moveThroughTimeIdle(param_1);
    }
  }
  else if (*(int *)(this + 0x1c8) == 1) {
    pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x1e8));
    cVar1 = CanBeTarget(this,(BoardEntity *)pRVar4);
    if (cVar1 == '\0') {
      FindNewTarget(this);
    }
    ProjectileHelpers::Integrate((Projectile *)this,param_1);
    lVar5 = Projectile::GetProps((Projectile *)this);
    if (*(char *)(lVar5 + 0x6e) == '\0') {
      fVar7 = (float)FUN_04cfac20(*(undefined4 *)(this + 0xc4));
      fVar8 = (float)FUN_04cfac24(*(undefined4 *)(this + 0xcc));
      FUN_04cfac28(fVar7 + param_1 * fVar8,this + 0xc4);
    }
    else {
      pfVar6 = (float *)Projectile::GetVelocity((Projectile *)this);
      fVar7 = atan2f(pfVar6[2],*pfVar6);
      FUN_04cfac28(fVar7 + *(float *)(this + 200),this + 0xc4);
    }
    bVar2 = TestFlag<VaseFlags>(*(undefined4 *)(this + 0x100),0x10);
    if (bVar2) {
      (**(code **)(*(long *)this + 0xa8))(this,0);
    }
    if ((this[0x189] != (JackOLanternGhost)0x0) &&
       (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) != '\0')) {
      pfVar6 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                       *)this);
      local_18 = *(undefined8 *)pfVar6;
      local_10 = pfVar6[2];
      local_10 = (float)Board::calculateRoofOffsetZ(*pfVar6);
      local_10 = local_10 + *(float *)(this + 0x18c);
      (**(code **)(*(long *)this + 0x78))(this,&local_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* JackOLanternGhost::OnCollideEntity(BoardEntity*) */

void __thiscall JackOLanternGhost::OnCollideEntity(JackOLanternGhost *this,BoardEntity *param_1)

{
  ApplyGhostLantern(this,param_1);
  Projectile::OnCollideEntity((Projectile *)this,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JackOLanternGhost::onDraw(Sexy::Graphics*) */

void __thiscall JackOLanternGhost::onDraw(JackOLanternGhost *this,Graphics *param_1)

{
  RtMixedPtrBase *this_00;
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  ResourceInfo *this_01;
  long lVar5;
  Image *pIVar6;
  undefined1 uVar7;
  undefined1 in_w4;
  Insets *pIVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  GraphicsAutoState aGStack_78 [8];
  Insets aIStack_70 [16];
  FastCurve aFStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  float fStack_3c;
  undefined8 uStack_38;
  SexyTransform2D aSStack_30 [40];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  cVar2 = FUN_0434b98c(*(undefined4 *)(this + 0x28));
  if (cVar2 == '\0') {
    this_01 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x38));
    (**(code **)(**(long **)(gLawnApp + 0x9f0) + 0xd0))(&uStack_80,*(long **)(gLawnApp + 0x9f0));
    iVar3 = FUN_0434af38(uStack_80);
    fVar11 = *(float *)(this + 0x1c);
    fVar14 = *(float *)(this + 0x20);
    fVar15 = (float)iVar3 + *(float *)(this + 0x18);
    iVar3 = FUN_0434af38(uStack_7c);
    fVar11 = (fVar11 - fVar14) + (float)iVar3;
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_78,param_1);
    (**(code **)(*(long *)this + 0xf8))(this,param_1);
    lVar5 = Projectile::getProps((Projectile *)this);
    Sexy::Color::Color((Color *)&uStack_40,1);
    cVar2 = Sexy::TRect<int>::operator!=((TRect<int> *)(lVar5 + 0x110),(TRect *)&uStack_40);
    if (cVar2 != '\0') {
      Sexy::Graphics::SetColorizeImages(param_1,true);
      if (this_01 != (ResourceInfo *)0x0) {
        lVar5 = Projectile::getProps((Projectile *)this);
        PopAnimRig::SetPAMColor((PopAnimRig *)this_01,(Color *)(lVar5 + 0x110));
      }
      lVar5 = Projectile::getProps((Projectile *)this);
      Sexy::Graphics::SetColor(param_1,(Color *)(lVar5 + 0x110));
    }
    this_00 = (RtMixedPtrBase *)(this + 0xb8);
    cVar2 = Sexy::RtMixedPtrBase::IsValid(this_00);
    if (cVar2 != '\0') {
      fVar14 = -1.0;
      pIVar6 = (Image *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      iVar3 = Sexy::Image::GetCelWidth(pIVar6);
      pIVar6 = (Image *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      iVar4 = Sexy::Image::GetCelHeight(pIVar6);
      Sexy::Insets::Insets((Insets *)&uStack_50,0,0,iVar3,iVar4);
      bVar1 = *(float *)(this + 0x9c) >= 0.0;
      if (this[0xd4] == (JackOLanternGhost)0x0) {
        bVar1 = *(float *)(this + 0x9c) < 0.0;
      }
      if (!bVar1) {
        fVar14 = 1.0;
      }
      if (this[0x1a4] == (JackOLanternGhost)0x0) {
        fVar9 = (float)FUN_0434af28(fVar15);
        fVar16 = *(float *)(param_1 + 0x20);
        fVar12 = *(float *)(param_1 + 0x18);
        fVar10 = (float)FUN_0434af28(fVar11);
        fVar13 = *(float *)(param_1 + 0x24);
        fVar17 = *(float *)(param_1 + 0x1c);
        Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
        TodScaleRotateTransformMatrix
                  ((SexyMatrix3 *)aSStack_30,(float)(int)((fVar9 - fVar16) * fVar12) + fVar16,
                   (float)(int)((fVar10 - fVar13) * fVar17) + fVar13,*(float *)(this + 0xc4),
                   *(float *)(this + 0xc0) * *(float *)(param_1 + 0x18) * fVar14,
                   *(float *)(this + 0xc0) * *(float *)(param_1 + 0x1c));
        pIVar6 = (Image *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                    ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        Sexy::Color::Color((Color *)&uStack_40,1);
      }
      else {
        fVar12 = *(float *)(param_1 + 0x20);
        fVar9 = (float)FUN_0434af28(fVar15);
        fVar16 = *(float *)(param_1 + 0x18);
        fVar17 = *(float *)(param_1 + 0x24);
        fVar10 = (float)FUN_0434af28(fVar11);
        fVar13 = *(float *)(param_1 + 0x1c);
        Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
        Sexy::Insets::Insets((Insets *)&uStack_40,0x48,0xe6,0xea,0xff);
        TodScaleRotateTransformMatrix
                  ((SexyMatrix3 *)aSStack_30,fVar12 + 20.0 + (float)(int)((fVar9 - fVar12) * fVar16)
                   ,fVar17 + -20.0 + (float)(int)((fVar10 - fVar17) * fVar13),
                   *(float *)(this + 0xc4),
                   *(float *)(this + 0xc0) * *(float *)(param_1 + 0x18) * fVar14,
                   *(float *)(this + 0xc0) * *(float *)(param_1 + 0x1c));
        pIVar6 = (Image *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                    ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      }
      pIVar8 = (Insets *)&uStack_40;
      TodBltMatrix(param_1,pIVar6,(SexyMatrix3 *)aSStack_30,(TRect *)(param_1 + 0x28),
                   (Color *)&uStack_40,*(int *)(param_1 + 0x78),(TRect *)&uStack_50);
      in_w4 = SUB81(pIVar8,0);
    }
    if (this_01 != (ResourceInfo *)0x0) {
      fVar14 = -1.0;
      if (this[0xd4] == (JackOLanternGhost)0x0) {
        fVar14 = 1.0;
      }
      fVar9 = *(float *)(this + 0x40);
      iVar3 = FUN_0434af38(uStack_80);
      fVar10 = *(float *)(this + 0x44);
      fVar15 = (fVar15 + fVar9 * fVar14) - (float)iVar3;
      iVar3 = FUN_0434af38(uStack_7c);
      fVar11 = (fVar11 + fVar10) - (float)iVar3;
      if (this[0x1a4] == (JackOLanternGhost)0x0) {
        fVar15 = (float)FUN_0434af28(fVar15);
        fVar9 = *(float *)(param_1 + 0x20);
        fVar10 = *(float *)(param_1 + 0x18);
        fVar11 = (float)FUN_0434af28(fVar11);
        Sexy::FastCurve::SetOutRange
                  (aFStack_60,(float)(int)((fVar15 - fVar9) * fVar10) + fVar9,
                   (float)(int)((fVar11 - *(float *)(param_1 + 0x24)) * *(float *)(param_1 + 0x1c))
                   + *(float *)(param_1 + 0x24));
        fVar15 = *(float *)(this + 0xc0);
        fVar9 = *(float *)(this + 0xc4);
        Sexy::FastCurve::SetOutRange((FastCurve *)&uStack_50,fVar14 * fVar15,fVar15);
        fVar11 = (float)FUN_0434af28(0xbf800000);
        uStack_40 = Sexy::SexyVector2::operator*((SexyVector2 *)(this + 0x40),fVar11);
        fStack_3c = fVar15;
        Sexy::SexyTransform2D::CreateTransformWithPivot
                  ((SexyTransform2D *)aFStack_60,(SexyVector2 *)&uStack_50,fVar9,
                   (SexyVector2 *)&uStack_40,(SexyVector2 *)0x0,(bool)in_w4);
        PopAnimRig::Draw((PopAnimRig *)this_01,param_1,aSStack_30);
      }
      else {
        uVar7 = 0xff;
        Sexy::Insets::Insets(aIStack_70,0x48,0xe6,0xea,0xff);
        fVar10 = *(float *)(param_1 + 0x20);
        fVar15 = (float)FUN_0434af28(fVar15);
        fVar17 = *(float *)(param_1 + 0x18);
        fVar9 = *(float *)(param_1 + 0x24);
        fVar11 = (float)FUN_0434af28(fVar11);
        Sexy::FastCurve::SetOutRange
                  (aFStack_60,fVar10 + 20.0 + (float)(int)((fVar15 - fVar10) * fVar17),
                   fVar9 + -20.0 + (float)(int)((fVar11 - fVar9) * *(float *)(param_1 + 0x1c)));
        fVar15 = *(float *)(this + 0xc0);
        fVar9 = *(float *)(this + 0xc4);
        Sexy::FastCurve::SetOutRange((FastCurve *)&uStack_50,fVar14 * fVar15,fVar15);
        fVar11 = (float)FUN_0434af28(0xbf800000);
        uStack_40 = Sexy::SexyVector2::operator*((SexyVector2 *)(this + 0x40),fVar11);
        fStack_3c = fVar15;
        Sexy::SexyTransform2D::CreateTransformWithPivot
                  ((SexyTransform2D *)aFStack_60,(SexyVector2 *)&uStack_50,fVar9,
                   (SexyVector2 *)&uStack_40,(SexyVector2 *)0x0,(bool)uVar7);
        PopAnimRig::GetPAMColor();
        Sexy::Insets::Insets((Insets *)&uStack_50,(Insets *)aFStack_60);
        Sexy::Color::operator*((Color *)&uStack_50,(Color *)aIStack_70);
        uStack_50 = CONCAT44(fStack_3c,uStack_40);
        uStack_48 = uStack_38;
        PopAnimRig::SetPAMColor((PopAnimRig *)this_01,(Color *)&uStack_50);
        PopAnimRig::Draw((PopAnimRig *)this_01,param_1,aSStack_30);
        PopAnimRig::SetPAMColor((PopAnimRig *)this_01,(Color *)aFStack_60);
      }
    }
    lVar5 = Projectile::getProps((Projectile *)this);
    Sexy::Color::Color((Color *)&uStack_40,1);
    cVar2 = Sexy::TRect<int>::operator!=((TRect<int> *)(lVar5 + 0x110),(TRect *)&uStack_40);
    if (cVar2 == '\0') {
      Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_78);
    }
    else {
      Sexy::Graphics::SetColorizeImages(param_1,false);
      Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_78);
    }
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

