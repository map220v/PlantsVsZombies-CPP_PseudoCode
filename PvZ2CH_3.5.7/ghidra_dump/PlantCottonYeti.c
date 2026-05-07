// Class: PlantCottonYeti


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCottonYeti::CanTargetZombie(Sexy::RtWeakPtr<Zombie>, PlantWeapon) */

void PlantCottonYeti::CanTargetZombie(TextureInfo *param_1,RtWeakPtrBase *param_2)

{
  undefined4 uVar1;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  uVar1 = EA::Text::GlyphCache_Memory::EndUpdate(param_1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* PlantCottonYeti::FindTargetAndFire(PlantWeapon) */

undefined8 PlantCottonYeti::FindTargetAndFire(long param_1)

{
  undefined8 uVar1;
  
  if (7 < *(int *)(*(long *)(param_1 + 0x10) + 0x114)) {
    return 0;
  }
  uVar1 = PlantFramework::FindTargetAndFire();
  return uVar1;
}


/* PlantCottonYeti::PlantCottonYeti() */

void __thiscall PlantCottonYeti::PlantCottonYeti(PlantCottonYeti *this)

{
  undefined4 uVar1;
  
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067ded60;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x28) = uVar1;
  return;
}


/* PlantCottonYeti::StaticNew() */

PlantCottonYeti * PlantCottonYeti::StaticNew(void)

{
  PlantCottonYeti *this;
  
  this = ::operator_new(0x30);
  PlantCottonYeti(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCottonYeti::StaticClassInit() */

void PlantCottonYeti::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantCottonYeti");
    (*pcVar2)(plVar1,asStack_10,FUN_040ec38c,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantCottonYeti::StaticGetClass() */

long * PlantCottonYeti::StaticGetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantCottonYeti",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantCottonYeti::GetClass() const */

long * PlantCottonYeti::GetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantCottonYeti",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantCottonYeti::~PlantCottonYeti() */

void __thiscall PlantCottonYeti::~PlantCottonYeti(PlantCottonYeti *this)

{
  *(undefined ***)this = &PTR_GetClass_067ded60;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantCottonYeti::~PlantCottonYeti() */

void __thiscall PlantCottonYeti::~PlantCottonYeti(PlantCottonYeti *this)

{
  ~PlantCottonYeti(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCottonYeti::DoSpecial(int) */

void PlantCottonYeti::DoSpecial(int param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  Projectile *this;
  long *extraout_x0;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  SexyVector3 *pSVar6;
  RealObject *this_01;
  code *pcVar7;
  RtMixedPtrBase aRStack_38 [8];
  RtWeakPtr aRStack_30 [8];
  int local_28;
  int local_24;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  float local_18;
  float local_14;
  undefined4 local_10;
  long local_8;
  
  plVar5 = (long *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*plVar5 + 0x180))();
  if (cVar1 != '\0') {
    *(undefined4 *)(plVar5[2] + 0x150) = 1;
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_18);
    this = (Projectile *)
           Plant::Fire((Plant *)plVar5[2],
                       (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_18,
                       *(undefined4 *)((Plant *)plVar5[2] + 0x110),1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    nop();
    pcVar7 = *(code **)(*extraout_x0 + 0x1e0);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)aRStack_20);
    (*pcVar7)(extraout_x0,
              (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    cVar1 = Plant::GetAvatarEnable((Plant *)plVar5[2]);
    if (cVar1 != '\0') {
      FUN_040ec1e8((long)extraout_x0 + 0x1dc);
    }
    PlantFramework::FindTargetZombie(aRStack_38,plVar5,1);
    (**(code **)(*plVar5 + 0xf8))(aRStack_30,plVar5,1);
    DVec3::DVec3((DVec3 *)&local_18);
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_38);
    if (cVar1 == '\0') {
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_30);
      if (bVar2) {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
        GridItem::GetGridLocation();
        BoardTransforms::GridToBoardSpace((Point *)aRStack_20);
        local_18 = (float)local_28;
        local_10 = 0;
        local_14 = (float)local_24;
      }
      else {
        iVar3 = BoardTransforms::GridToBoardSpaceX(8);
        local_18 = (float)iVar3;
        iVar3 = BoardTransforms::GridToBoardSpaceY(*(int *)(plVar5[2] + 0x110));
        local_14 = (float)iVar3;
        local_10 = 0;
      }
    }
    else {
      this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      pSVar6 = (SexyVector3 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost(this_00);
      Sexy::SexyVector3::operator=((SexyVector3 *)&local_18,pSVar6);
    }
    iVar3 = BoardTransforms::BoardSpaceToGridXUnbounded(local_18);
    iVar4 = BoardTransforms::BoardSpaceToGridYUnbounded(local_14);
    Sexy::FastCurve::SetOutRange((FastCurve *)aRStack_20,(float)iVar3,(float)iVar4);
    FUN_040ec1d4((long)extraout_x0 + 0x1e4,aRStack_20);
    Projectile::LaunchAt(this,(SexyVector3 *)&local_18,300.0,1.0);
    this_01 = (RealObject *)plVar5[2];
    std::string::string((string *)aRStack_20,"Play_CabbagePult_Throw");
    RealObject::PlayPositionalSound(this_01,(string *)aRStack_20,0.0);
    std::string::~string((string *)aRStack_20);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCottonYeti::Initialize() */

void __thiscall PlantCottonYeti::Initialize(PlantCottonYeti *this)

{
  long lVar1;
  float fVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  fVar2 = (float)PVZ_T();
  FUN_040ec1b0(aRStack_10,*(undefined8 *)(this + 0x10));
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  lVar1 = FUN_040ec1e4(*(undefined8 *)(lVar1 + 0x70));
  *(float *)(this + 0x28) = fVar2 + *(float *)(lVar1 + 0x20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCottonYeti::setState(unsigned int) */

void __thiscall PlantCottonYeti::setState(PlantCottonYeti *this,uint param_1)

{
  UIEasyButtonWidget *this_00;
  PopAnimRig *pPVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  this_00 = *(UIEasyButtonWidget **)(this + 0x10);
  local_8 = ___stack_chk_guard;
  if ((*(uint *)(this_00 + 200) != param_1) && (*(uint *)(this_00 + 200) = param_1, param_1 == 0xd))
  {
    pPVar1 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(this_00);
    std::string::string(asStack_40,"attack_sleep");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar1,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCottonYeti::UpdateActions() */

void __thiscall PlantCottonYeti::UpdateActions(PlantCottonYeti *this)

{
  char cVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  RtMixedPtrBase aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  switch(*(undefined4 *)(*(long *)(this + 0x10) + 200)) {
  case 10:
    fVar4 = *(float *)(this + 0x28);
    fVar2 = (float)PVZ_T();
    if (fVar4 < fVar2) {
      uVar3 = PVZ_EOT();
      *(undefined4 *)(this + 0x28) = uVar3;
      setState(this,0xb);
    }
    break;
  case 0xb:
    cVar1 = (**(code **)(*(long *)this + 0x180))(this);
    if (cVar1 == '\0') {
      PlantFramework::FindTargetZombie(aRStack_10,this);
      cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
      if (cVar1 != '\0') {
        (**(code **)(*(long *)this + 0x1a0))(this);
        setState(this,0xc);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    }
    break;
  case 0xd:
    fVar4 = *(float *)(this + 0x28);
    fVar2 = (float)PVZ_T();
    if (fVar4 < fVar2) {
      uVar3 = PVZ_EOT();
      *(undefined4 *)(this + 0x28) = uVar3;
      setState(this,0xe);
    }
    break;
  case 0x10:
    fVar4 = *(float *)(this + 0x28);
    fVar2 = (float)PVZ_T();
    if (fVar4 < fVar2) {
      uVar3 = PVZ_EOT();
      *(undefined4 *)(this + 0x28) = uVar3;
      setState(this,0x11);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantCottonYeti::LaunchProjectileAt(Projectile*, Sexy::SexyVector3 const&, float, float) */

void __thiscall
PlantCottonYeti::LaunchProjectileAt
          (PlantCottonYeti *this,Projectile *param_1,SexyVector3 *param_2,float param_3,
          float param_4)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  FUN_040ecaf4(*(undefined8 *)(this + 0x10));
  lVar1 = FUN_040ecaf4(*(undefined8 *)(this + 0x10));
  PlantFramework::Rand((PlantFramework *)this,param_3 * *(float *)(lVar1 + 700));
  lVar1 = FUN_040ecaf4(*(undefined8 *)(this + 0x10));
  fVar3 = *(float *)(lVar1 + 0x2b8);
  lVar1 = FUN_040ecaf4(*(undefined8 *)(this + 0x10));
  fVar2 = (float)PlantFramework::Rand((PlantFramework *)this,param_4 * *(float *)(lVar1 + 0x2b8));
  Projectile::LaunchAt(param_1,param_2,1.0,fVar2 + fVar3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCottonYeti::normalFire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void __thiscall
PlantCottonYeti::normalFire
          (PlantCottonYeti *this,RtWeakPtrBase *param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  Projectile *pPVar4;
  long *extraout_x0;
  code *pcVar5;
  RealObject *this_00;
  Plant *pPVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  float local_18;
  float local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)this + 0x180))();
  if (cVar1 == '\0') {
    pPVar6 = *(Plant **)(this + 0x10);
    iVar3 = *(int *)(pPVar6 + 0x110);
    iVar2 = *(int *)(pPVar6 + 0x114);
    *(undefined4 *)(pPVar6 + 0x150) = 0;
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_18,param_2);
    pPVar4 = (Projectile *)
             Plant::Fire(pPVar6,(RtWeakPtr<Sexy::SoundResource> *)&local_18,param_3,param_4);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    nop();
    pcVar5 = *(code **)(*extraout_x0 + 0x1e0);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)aRStack_20);
    (*pcVar5)(extraout_x0,(RtWeakPtr<Sexy::SoundResource> *)&local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    PlantFramework::FindTargetZombie(aRStack_30,this,0);
    (**(code **)(*(long *)this + 0xf8))(aRStack_28,this,param_4);
    DVec3::DVec3((DVec3 *)&local_18);
    iVar2 = BoardTransforms::GridToBoardSpaceX(iVar2 + 1);
    local_18 = (float)iVar2;
    iVar3 = BoardTransforms::GridToBoardSpaceX(iVar3);
    local_14 = (float)iVar3;
    local_10 = 0;
    LaunchProjectileAt(this,pPVar4,(SexyVector3 *)&local_18,_FUN_040ece1c,_FUN_040ece1c);
    this_00 = *(RealObject **)(this + 0x10);
    std::string::string((string *)aRStack_20,"Play_CabbagePult_Throw");
    RealObject::PlayPositionalSound(this_00,(string *)aRStack_20,0.0);
    std::string::~string((string *)aRStack_20);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  }
  else {
    (**(code **)(*(long *)this + 0xa8))(this,0);
    pPVar4 = (Projectile *)0x0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pPVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCottonYeti::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void __thiscall
PlantCottonYeti::Fire
          (PlantCottonYeti *this,RtWeakPtrBase *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  uVar1 = normalFire(this,aRStack_10,param_3,param_4);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}

