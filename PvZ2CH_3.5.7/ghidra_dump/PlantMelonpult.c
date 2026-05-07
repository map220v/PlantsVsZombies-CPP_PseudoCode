// Class: PlantMelonpult


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMelonpult::Initialize() */

void __thiscall PlantMelonpult::Initialize(PlantMelonpult *this)

{
  long lVar1;
  undefined4 uVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  *(undefined4 *)(this + 0x40) = 0;
  this[0x44] = (PlantMelonpult)0x0;
  std::string::string(asStack_10,"melonpult_new_avatar_2");
  uVar2 = NewAvatar::GetGeneralBoostValueByNewAvatarName(asStack_10);
  *(undefined4 *)(this + 0x48) = uVar2;
  std::string::~string(asStack_10);
  nop();
  uVar2 = GeneEnhancement::GetGeneEnhancementSkillBoost(0xb,0);
  *(undefined4 *)(this + 0x4c) = uVar2;
  uVar2 = GeneEnhancement::GetGeneEnhancementSkillBoost(0xb,1);
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x50) = uVar2;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMelonpult::StaticClassInit() */

void PlantMelonpult::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantMelonpult");
    (*pcVar2)(plVar1,asStack_10,FUN_04049b38,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantMelonpult::StaticGetClass() */

long * PlantMelonpult::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantMelonpult",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantMelonpult::GetClass() const */

long * PlantMelonpult::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantMelonpult",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantMelonpult::BoostProjectile(Projectile*) */

void __thiscall PlantMelonpult::BoostProjectile(PlantMelonpult *this,Projectile *param_1)

{
  float fVar1;
  
  if (param_1 != (Projectile *)0x0) {
    fVar1 = (float)FUN_040489d8(*(undefined4 *)(param_1 + 0xd8));
    FUN_040489dc(fVar1 * (*(float *)(this + 0x4c) + 1.0),param_1 + 0xd8);
    fVar1 = (float)FUN_040489e4(*(undefined4 *)(param_1 + 0x178));
    FUN_040489e8(fVar1 * (*(float *)(this + 0x50) + 1.0),param_1 + 0x178);
    return;
  }
  return;
}


/* PlantMelonpult::PlantMelonpult() */

void __thiscall PlantMelonpult::PlantMelonpult(PlantMelonpult *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067be590;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  return;
}


/* PlantMelonpult::StaticNew() */

PlantMelonpult * PlantMelonpult::StaticNew(void)

{
  PlantMelonpult *this;
  
  this = ::operator_new(0x58);
  PlantMelonpult(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMelonpult::FindTargetAndFire(PlantWeapon) */

void __thiscall PlantMelonpult::FindTargetAndFire(PlantMelonpult *this,undefined4 param_2)

{
  int iVar1;
  long lVar2;
  RtObject *this_00;
  PlantAnimRig_Melonpult *pPVar3;
  float fVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_040489f8(*(undefined8 *)(this + 0x10));
  if (4 < iVar1) {
    fVar4 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
    lVar2 = FUN_04049174(*(undefined8 *)(this + 0x10));
    if (fVar4 < *(float *)(lVar2 + 0x2c8)) {
      this[0x44] = (PlantMelonpult)0x1;
      this_00 = (RtObject *)
                UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      pPVar3 = Sexy::RtObject::Cast<PlantAnimRig_Melonpult>(this_00);
      std::string::string(asStack_10,"attack");
      PlantAnimRig_HoyaCordata::setIdleTag((string *)pPVar3);
      std::string::~string(asStack_10);
      nop();
    }
  }
  PlantFramework::FindTargetAndFire(this,param_2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantMelonpult::LaunchProjectileAt(Projectile*, Sexy::SexyVector3 const&, PlantWeapon) */

void __thiscall
PlantMelonpult::LaunchProjectileAt
          (PlantMelonpult *this,Projectile *param_1,SexyVector3 *param_2,int param_4)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  lVar1 = FUN_04049174(*(undefined8 *)(this + 0x10));
  if (param_4 == 1) {
    fVar2 = *(float *)(lVar1 + 0x2c4);
    fVar4 = (float)PlantFramework::Rand((PlantFramework *)this,fVar2 * 0.1);
    fVar3 = *(float *)(lVar1 + 0x2c0);
    fVar4 = fVar4 + fVar2;
    fVar2 = (float)PlantFramework::Rand((PlantFramework *)this,fVar3 * 0.1);
    fVar2 = fVar2 + fVar3;
  }
  else if (param_4 == 2) {
    fVar2 = *(float *)(lVar1 + 0x2c4);
    fVar4 = (float)PlantFramework::Rand((PlantFramework *)this,fVar2 * 0.3);
    fVar3 = *(float *)(lVar1 + 0x2c0);
    fVar4 = fVar4 + fVar2;
    fVar2 = (float)PlantFramework::Rand((PlantFramework *)this,fVar3 * 0.1);
    fVar2 = fVar2 + fVar3;
  }
  else {
    fVar4 = *(float *)(lVar1 + 700);
    fVar2 = *(float *)(lVar1 + 0x2b8);
  }
  BoostProjectile(this,param_1);
  Projectile::LaunchAt(param_1,param_2,fVar4,fVar2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMelonpult::normalFire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void PlantMelonpult::normalFire
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,
               PlantMelonpult *param_4,RtWeakPtrBase *param_5,undefined8 param_6,undefined4 param_7)

{
  char cVar1;
  undefined8 uVar2;
  ResourceInfo *pRVar3;
  float *pfVar4;
  long *plVar5;
  long lVar6;
  Plant *pPVar7;
  code *pcVar8;
  RtMixedPtrBase aRStack_38 [8];
  int local_30;
  int local_2c;
  float local_28;
  float local_24;
  undefined4 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar7 = *(Plant **)(param_4 + 0x10);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_18,param_5);
  uVar2 = Plant::Fire(pPVar7,(RtWeakPtr<Sexy::SoundResource> *)&local_18,param_6,param_7);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  PlantFramework::FindTargetZombie(aRStack_38,param_4,0);
  (**(code **)(*(long *)param_4 + 0xf8))
            ((RtWeakPtr<Sexy::SoundResource> *)&local_18,param_4,param_7);
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  DVec3::DVec3((DVec3 *)&local_28);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_38);
  if (cVar1 == '\0') {
    if (pRVar3 == (ResourceInfo *)0x0) {
      pfVar4 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                        **)(param_4 + 0x10));
      local_24 = pfVar4[1];
      local_28 = *pfVar4 + 600.0;
      local_20 = 0;
    }
    else {
      GridItem::GetGridLocation();
      BoardTransforms::GridToBoardSpace((Point *)&local_18);
      local_28 = (float)local_30;
      local_20 = 0x41c80000;
      local_24 = (float)local_2c;
    }
  }
  else {
    plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    pcVar8 = *(code **)(*plVar5 + 0x3b0);
    lVar6 = FUN_04049174(*(undefined8 *)(param_4 + 0x10));
    local_18 = (*pcVar8)(*(undefined4 *)(lVar6 + 0x2c0),plVar5);
    local_14 = param_2;
    local_10 = param_3;
    Sexy::SexyVector3::operator=((SexyVector3 *)&local_28,(SexyVector3 *)&local_18);
  }
  (**(code **)(*(long *)param_4 + 0x528))(param_4);
  LaunchProjectileAt(param_4,uVar2,(DVec3 *)&local_28,param_7);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMelonpult::avatarFire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void PlantMelonpult::avatarFire
               (undefined1 param_1 [16],float param_2,undefined4 param_3,PlantMelonpult *param_4,
               RtWeakPtrBase *param_5,undefined4 param_6,undefined4 param_7)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ResourceInfo *pRVar4;
  ulong uVar5;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  float *pfVar9;
  ulong uVar10;
  Plant *pPVar11;
  code *pcVar12;
  float fVar13;
  RtMixedPtrBase aRStack_70 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_68 [8];
  float local_60;
  float local_5c;
  undefined4 local_58;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [16];
  undefined4 local_40;
  float local_3c;
  undefined4 local_38;
  int local_30;
  int local_2c;
  undefined4 local_20;
  float fStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar11 = *(Plant **)(param_4 + 0x10);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_20,param_5);
  uVar3 = Plant::Fire(pPVar11,(RtWeakPtr<Sexy::SoundResource> *)&local_20,param_6,param_7);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  PlantFramework::FindTargetZombie(aRStack_70,param_4,0);
  (**(code **)(*(long *)param_4 + 0xf8))
            ((RtWeakPtr<Sexy::SoundResource> *)&local_20,param_4,param_7);
  pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  DVec3::DVec3((DVec3 *)&local_60);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_70);
  if (cVar1 == '\0') {
    if (pRVar4 == (ResourceInfo *)0x0) {
      pfVar9 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                        **)(param_4 + 0x10));
      param_2 = 600.0;
      local_5c = pfVar9[1];
      local_60 = *pfVar9 + 600.0;
      local_58 = 0;
    }
    else {
      GridItem::GetGridLocation();
      BoardTransforms::GridToBoardSpace((Point *)&local_20);
      param_3 = 0x41c80000;
      param_2 = (float)local_30;
      local_58 = 0x41c80000;
      local_5c = (float)local_2c;
      local_60 = param_2;
    }
  }
  else {
    plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    pcVar12 = *(code **)(*plVar6 + 0x3b0);
    lVar7 = FUN_04049174(*(undefined8 *)(param_4 + 0x10));
    local_20 = (*pcVar12)(*(undefined4 *)(lVar7 + 0x2c0),plVar6);
    fStack_1c = param_2;
    local_18 = param_3;
    Sexy::SexyVector3::operator=((SexyVector3 *)&local_60,(SexyVector3 *)&local_20);
  }
  (**(code **)(*(long *)param_4 + 0x528))(param_4);
  LaunchProjectileAt(param_4,uVar3,(DVec3 *)&local_60,param_7);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_68);
  if (*(code **)(*(long *)param_4 + 400) == PlantFramework::GetCollisionFlags) {
    uVar2 = PlantFramework::GetCollisionFlags();
  }
  else {
    uVar2 = (**(code **)(*(long *)param_4 + 400))(param_4,param_7);
  }
  uVar10 = 0;
  Plant::GetPlantAttackRect((Plant *)&local_30,*(undefined8 *)(param_4 + 0x10),param_7);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  EntityFinder::GetEntitiesTouchingRectangle
            ((RtWeakPtr<Sexy::SoundResource> *)&local_20,2,(Plant *)&local_30,
             *(undefined4 *)(*(long *)(param_4 + 0x10) + 0x110),
             *(undefined4 *)(*(long *)(param_4 + 0x10) + 0x110));
  uVar8 = CONCAT44(fStack_1c,local_20);
  uVar5 = FUN_04048a20(uVar8,CONCAT44(uStack_14,local_18));
  if (uVar5 != 0) {
    do {
      FUN_04048a2c(uVar8,uVar10);
      nop();
      if (this != (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   *)0x0) {
        ToolPacketData::GetProps();
        cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)&local_40);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
        if ((cVar1 != '\0') && (cVar1 = (**(code **)(*(long *)this + 0x328))(this), cVar1 == '\0'))
        {
          pcVar12 = *(code **)(*(long *)param_4 + 0x3e0);
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)aRStack_50);
          cVar1 = (*pcVar12)(param_4,(RtMixedPtrBase *)&local_40,param_7);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
          if (cVar1 != '\0') {
            pfVar9 = (float *)std::
                              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              ::_M_leftmost(this);
            fVar13 = *pfVar9;
            lVar7 = Board::GetBoardProperties(*(Board **)(gLawnApp + 0x9f0));
            if (fVar13 <= *(float *)(lVar7 + 0x10)) {
              pcVar12 = *(code **)(*(long *)this + 0x3d0);
              Plant::GetType();
              Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                        ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)aRStack_50);
              cVar1 = (*pcVar12)(this,(RtMixedPtrBase *)&local_40,0);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
              if ((cVar1 != '\0') &&
                 (cVar1 = (**(code **)(*(long *)this + 0xb8))(this,uVar2), cVar1 != '\0')) {
                ToolPacketData::GetProps();
                Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                          ((RtWeakPtr<Sexy::SoundResource> *)aRStack_50,(RtWeakPtrBase *)&local_40);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
                cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_50);
                if ((cVar1 != '\0') &&
                   ((cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_70), cVar1 != '\0' &&
                    (cVar1 = Sexy::RtWeakPtrBase::operator!=
                                       ((RtWeakPtrBase *)aRStack_50,(RtWeakPtrBase *)aRStack_70),
                    cVar1 != '\0')))) {
                  ToolPacketData::GetProps();
                  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                            ((RtWeakPtr<SpartanBambooMatrixSystem> *)a_Stack_68,
                             (RtWeakPtrBase *)&local_40);
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                            ((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
                  break;
                }
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
              }
            }
          }
        }
        uVar8 = CONCAT44(fStack_1c,local_20);
        uVar5 = FUN_04048a20(uVar8,CONCAT44(uStack_14,local_18));
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar5);
  }
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)a_Stack_68);
  if (cVar1 != '\0') {
    DVec3::DVec3((DVec3 *)aRStack_50);
    plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_68);
    pcVar12 = *(code **)(*plVar6 + 0x3b0);
    lVar7 = FUN_04049174(*(undefined8 *)(param_4 + 0x10));
    local_40 = (*pcVar12)(*(undefined4 *)(lVar7 + 0x2c0),plVar6);
    local_3c = param_2;
    local_38 = param_3;
    Sexy::SexyVector3::operator=((SexyVector3 *)aRStack_50,(SexyVector3 *)&local_40);
    pPVar11 = *(Plant **)(param_4 + 0x10);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)a_Stack_68);
    uVar8 = Plant::Fire(pPVar11,(RtWeakPtr<Sexy::SoundResource> *)&local_40,param_6,param_7);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    LaunchProjectileAt(param_4,uVar8,(DVec3 *)aRStack_50,param_7);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* PlantMelonpult::~PlantMelonpult() */

void __thiscall PlantMelonpult::~PlantMelonpult(PlantMelonpult *this)

{
  *(undefined ***)this = &PTR_GetClass_067be590;
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x28));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantMelonpult::~PlantMelonpult() */

void __thiscall PlantMelonpult::~PlantMelonpult(PlantMelonpult *this)

{
  ~PlantMelonpult(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMelonpult::RemoveUndamageableEntitiesFromList(std::vector<BoardEntity*,
   std::allocator<BoardEntity*> >&) */

void __thiscall
PlantMelonpult::RemoveUndamageableEntitiesFromList(PlantMelonpult *this,vector *param_1)

{
  bool bVar1;
  char cVar2;
  undefined8 *puVar3;
  Zombie *pZVar4;
  GridItem *pGVar5;
  RtObject *this_00;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)param_1);
LAB_04049f0c:
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)param_1);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  do {
    if (!bVar1) {
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    this_00 = (RtObject *)*puVar3;
    if (this_00 == (RtObject *)0x0) {
LAB_0404a000:
      FUN_04048fcc((__normal_iterator *)&local_18);
      goto LAB_04049f0c;
    }
    pZVar4 = Sexy::RtObject::Cast<Zombie>(this_00);
    if ((pZVar4 == (Zombie *)0x0) ||
       (((cVar2 = (**(code **)(*(long *)pZVar4 + 0x328))(), cVar2 == '\0' &&
         (cVar2 = (**(code **)(*(long *)pZVar4 + 0x330))(pZVar4), cVar2 == '\0')) &&
        (cVar2 = RealObject::IsOnTeam(pZVar4,1), cVar2 == '\0')))) {
      bVar1 = Sexy::RtObject::IsA<GridItem>(this_00);
      if ((!bVar1) || (pGVar5 = Sexy::RtObject::Cast<GridItem>(this_00), pGVar5 == (GridItem *)0x0))
      goto LAB_0404a000;
      cVar2 = (**(code **)(*(long *)pGVar5 + 0x200))();
      if (cVar2 != '\0') break;
    }
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_10,(__normal_iterator *)&local_18);
    local_18 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::erase
                         ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)param_1,local_10);
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)param_1);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  } while( true );
  FUN_04048fcc((__normal_iterator *)&local_18);
  goto LAB_04049f0c;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMelonpult::DoSpecial(int) */

void PlantMelonpult::DoSpecial(int param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  PlantFramework *this;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  RtWeakPtrBase *pRVar15;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var16;
  float *pfVar17;
  SharkMinion *pSVar18;
  Projectile *pPVar19;
  Zombie *this_00;
  RealObject *this_01;
  int extraout_w1;
  int iVar20;
  int extraout_w1_00;
  int extraout_w1_01;
  int extraout_w1_02;
  Plant *pPVar21;
  int iVar22;
  float fVar23;
  float fVar24;
  RtWeakPtr<Sexy::SoundResource> aRStack_48 [8];
  int local_40;
  int local_3c;
  RtId aRStack_38 [16];
  Iterator aIStack_28 [32];
  long local_8;
  
  this = (PlantFramework *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x40) == 0) {
    (**(code **)(*(long *)this + 0x530))();
  }
  iVar22 = 0;
  iVar6 = Board::CountZombiesOnScreen(*(Board **)(gLawnApp + 0x9f0),false);
  iVar7 = Board::CountDamagableGridItemsOnScreen();
  lVar10 = FUN_04048a34(*(undefined8 *)(this + 0x28),*(undefined8 *)(this + 0x30));
  iVar20 = *(int *)(this + 0x40);
  uVar11 = Sexy::LazySingleton<PVZDB>::GetInstance();
  uVar3 = 0;
  if ((long)(4 - iVar20) != 0) {
    uVar3 = (ulong)((iVar6 + iVar7) - lVar10) / (ulong)(long)(4 - iVar20);
  }
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar11,0x29);
  while ((bVar4 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar4 &&
         ((ulong)(long)iVar22 < uVar3))) {
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_48,(RtWeakPtrBase *)aRStack_38);
    Sexy::RtId::~RtId(aRStack_38);
    plVar13 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
    cVar5 = (**(code **)(*plVar13 + 0x328))();
    if (cVar5 == '\0') {
      plVar13 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
      cVar5 = (**(code **)(*plVar13 + 0x330))();
      if (cVar5 == '\0') {
        this_00 = (Zombie *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
        cVar5 = Zombie::IsInvisible(this_00);
        if (cVar5 == '\0') {
          this_01 = (RealObject *)
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
          cVar5 = RealObject::IsOnOpposingTeam(this_01,*(RealObject **)(this + 0x10));
          if (cVar5 != '\0') {
            uVar11 = *(undefined8 *)(this + 0x28);
            lVar14 = FUN_04048a34(uVar11,*(undefined8 *)(this + 0x30));
            lVar12 = 0;
            do {
              if (lVar12 == lVar14) {
                p_Var16 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                       ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
                pfVar17 = (float *)std::
                                   _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   ::_M_leftmost(p_Var16);
                fVar23 = *pfVar17;
                fVar24 = pfVar17[1];
                if (fVar23 <= 800.0) {
                  iVar22 = iVar22 + 1;
                  cVar5 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
                  uVar8 = 2;
                  if (cVar5 == '\0') {
                    uVar8 = 1;
                  }
                  *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = uVar8;
                  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_38,fVar23,fVar24,50.0);
                  pPVar21 = *(Plant **)(this + 0x10);
                  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                            ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)aRStack_48
                            );
                  pSVar18 = (SharkMinion *)
                            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
                  uVar8 = SharkMinion::getRow(pSVar18);
                  pPVar19 = (Projectile *)
                            Plant::Fire(pPVar21,(RtWeakPtr<Sexy::SoundResource> *)&local_40,uVar8,1)
                  ;
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                            ((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
                  uVar11 = FUN_040489cc(*(undefined8 *)(pPVar19 + 0xe0));
                  uVar11 = operator|(uVar11,0x2000);
                  FUN_040489d0(pPVar19 + 0xe0,uVar11);
                  LaunchProjectileAt((PlantMelonpult *)this,pPVar19,aRStack_38,1);
                  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                            ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)aRStack_48
                            );
                  Projectile::SetTarget(pPVar19,(RtWeakPtr *)&local_40);
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                            ((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
                  *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 0xffffffff;
                  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                            ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)aRStack_48
                            );
                  std::
                  vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
                  ::push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
                               *)(this + 0x28),(RtWeakPtr *)&local_40);
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                            ((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
                  iVar20 = extraout_w1_02;
                  goto LAB_0404a208;
                }
                break;
              }
              pRVar15 = (RtWeakPtrBase *)FUN_04048a40(uVar11,lVar12);
              cVar5 = Sexy::RtWeakPtrBase::operator==(pRVar15,(RtWeakPtrBase *)aRStack_48);
              lVar12 = lVar12 + 1;
            } while (cVar5 == '\0');
          }
        }
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
    iVar20 = extraout_w1;
LAB_0404a208:
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,iVar20);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  uVar11 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar11,0x2f);
  do {
    bVar4 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if ((!bVar4) || (uVar3 <= (ulong)(long)iVar22)) {
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      lVar12 = FUN_04048a34(*(undefined8 *)(this + 0x28),*(undefined8 *)(this + 0x30));
      if (lVar10 == lVar12) {
        cVar5 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
        uVar8 = 2;
        if (cVar5 == '\0') {
          uVar8 = 1;
        }
        *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = uVar8;
        iVar7 = PlantFramework::Rand(this);
        iVar20 = *(int *)(*(long *)(this + 0x10) + 0x114);
        iVar22 = (*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8) - iVar20) + 1;
        iVar6 = 0;
        if (iVar22 != 0) {
          iVar6 = iVar7 / iVar22;
        }
        iVar9 = PlantFramework::Rand(this);
        iVar1 = *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc);
        iVar2 = 0;
        if (iVar1 != 0) {
          iVar2 = iVar9 / iVar1;
        }
        BoardTransforms::GridToBoardSpacePos
                  ((BoardTransforms *)(ulong)(uint)(iVar20 + (iVar7 - iVar6 * iVar22)),
                   iVar9 - iVar2 * iVar1,iVar1);
        EATextSquish::Vec3::Vec3((Vec3 *)aIStack_28,(float)local_40,(float)local_3c,0.0);
        std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                  ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aRStack_38);
        lVar10 = Plant::Fire(*(Plant **)(this + 0x10),
                             (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)
                             aRStack_38,*(undefined4 *)(*(Plant **)(this + 0x10) + 0x110),1);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38)
        ;
        uVar11 = FUN_040489cc(*(undefined8 *)(lVar10 + 0xe0));
        uVar11 = operator|(uVar11,0x2000);
        FUN_040489d0((undefined8 *)(lVar10 + 0xe0),uVar11);
        LaunchProjectileAt((PlantMelonpult *)this,lVar10,aIStack_28,1);
        *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 0xffffffff;
      }
      *(int *)(this + 0x40) = *(int *)(this + 0x40) + 1;
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_48,(RtWeakPtrBase *)aRStack_38);
    Sexy::RtId::~RtId(aRStack_38);
    plVar13 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
    cVar5 = (**(code **)(*plVar13 + 0x200))();
    if (cVar5 != '\0') {
      uVar11 = *(undefined8 *)(this + 0x28);
      lVar14 = FUN_04048a34(uVar11,*(undefined8 *)(this + 0x30));
      lVar12 = 0;
      do {
        if (lVar12 == lVar14) {
          iVar22 = iVar22 + 1;
          p_Var16 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
          pfVar17 = (float *)std::
                             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             ::_M_leftmost(p_Var16);
          fVar23 = *pfVar17;
          fVar24 = pfVar17[1];
          cVar5 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
          uVar8 = 2;
          if (cVar5 == '\0') {
            uVar8 = 1;
          }
          *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = uVar8;
          EATextSquish::Vec3::Vec3((Vec3 *)aRStack_38,fVar23,fVar24,50.0);
          pPVar21 = *(Plant **)(this + 0x10);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)aRStack_48);
          pSVar18 = (SharkMinion *)
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
          uVar8 = SharkMinion::getRow(pSVar18);
          pPVar19 = (Projectile *)
                    Plant::Fire(pPVar21,(RtWeakPtr<Sexy::SoundResource> *)&local_40,uVar8,1);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
          uVar11 = FUN_040489cc(*(undefined8 *)(pPVar19 + 0xe0));
          uVar11 = operator|(uVar11,0x2000);
          FUN_040489d0(pPVar19 + 0xe0,uVar11);
          LaunchProjectileAt((PlantMelonpult *)this,pPVar19,aRStack_38,1);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)aRStack_48);
          Projectile::SetTarget(pPVar19,(RtWeakPtr *)&local_40);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
          *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 0xffffffff;
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)aRStack_48);
          std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
          push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
                     *)(this + 0x28),(RtWeakPtr *)&local_40);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
          iVar20 = extraout_w1_00;
          goto LAB_0404a3b0;
        }
        pRVar15 = (RtWeakPtrBase *)FUN_04048a40(uVar11,lVar12);
        cVar5 = Sexy::RtWeakPtrBase::operator==(pRVar15,(RtWeakPtrBase *)aRStack_48);
        lVar12 = lVar12 + 1;
      } while (cVar5 == '\0');
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
    iVar20 = extraout_w1_01;
LAB_0404a3b0:
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,iVar20);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMelonpult::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void __thiscall
PlantMelonpult::Fire
          (PlantMelonpult *this,RtWeakPtrBase *param_2,undefined4 param_3,undefined4 param_4)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long lVar8;
  float *pfVar9;
  ResourceInfo *pRVar10;
  RtObject *pRVar11;
  PlantAnimRig_Melonpult *pPVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  BoardEntity **ppBVar16;
  long lVar17;
  long lVar18;
  undefined8 *puVar19;
  Zombie *pZVar20;
  GridItem *this_00;
  GridItemFlame *this_01;
  code *pcVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  DVec2 aDStack_a0 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_98 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_90 [8];
  int local_88;
  int local_84;
  float local_80;
  float local_7c;
  undefined4 local_78;
  int local_70;
  float local_6c;
  undefined4 local_68;
  Insets aIStack_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_30;
  float local_20;
  float fStack_1c;
  undefined4 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = (**(code **)(*(long *)this + 0x180))();
  if (cVar2 != '\0') {
    uVar7 = 0;
    (**(code **)(*(long *)this + 0xa8))(this,0);
    goto LAB_0404a760;
  }
  if (this[0x44] != (PlantMelonpult)0x0) {
    DVec2::DVec2(aDStack_a0,25.0,45.0);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_98,(RtWeakPtrBase *)&local_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
    lVar8 = FUN_04049174(*(undefined8 *)(this + 0x10));
    lVar8 = FUN_04048af4(*(undefined8 *)(lVar8 + 0x70));
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_90,(RtWeakPtrBase *)(lVar8 + 8));
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_50);
    iVar4 = *(int *)(*(long *)(this + 0x10) + 0x110);
    iVar5 = BoardConstants::NUMBER_OF_COLUMNS();
    Sexy::Insets::Insets
              (aIStack_60,*(int *)(*(long *)(this + 0x10) + 0x114),iVar4,
               (iVar5 - *(int *)(*(long *)(this + 0x10) + 0x114)) + 1,1);
    uVar6 = operator|(2,4);
    EntityFinder::GetEntitiesInGridSquares
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_50,uVar6,
               aIStack_60);
    RemoveUndamageableEntitiesFromList(this,(vector *)&local_50);
    cVar2 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty
                      ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_50);
    if (cVar2 == '\0') {
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38);
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
      for (local_70 = 0; iVar4 = local_70, uVar13 = FUN_04048a20(local_50,local_48),
          (ulong)(long)iVar4 < uVar13; local_70 = local_70 + 1) {
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)&local_38,&local_70);
      }
      uVar7 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)&local_38);
      uVar13 = 0;
      uVar14 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_38);
      std::random_shuffle<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                (uVar7,uVar14);
      do {
        uVar15 = FUN_04048a08(local_38,local_30);
        uVar1 = 0;
        if (uVar15 != 0) {
          uVar1 = uVar13 / uVar15;
        }
        lVar8 = uVar13 - uVar1 * uVar15;
        uVar13 = uVar13 + 1;
        ppBVar16 = (BoardEntity **)FUN_04048a2c(local_50,lVar8);
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20,ppBVar16);
      } while (uVar13 != 3);
      lVar8 = 0;
      do {
        uVar7 = *(undefined8 *)(gLawnApp + 0x9f0);
        pfVar9 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                          **)(this + 0x10));
        fVar24 = *pfVar9;
        fVar23 = pfVar9[1];
        fVar22 = (float)ValueRange::GetRandomValue((ValueRange *)aDStack_a0);
        fVar23 = fVar23 - fVar22;
        lVar17 = std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                 **)(this + 0x10));
        uVar6 = *(undefined4 *)(lVar17 + 8);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_70,(RtWeakPtrBase *)aRStack_90);
        pRVar10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_98);
        lVar17 = Board::AddProjectile
                           ((Board *)(fVar24 + 45.0),uVar7,
                            (RtWeakPtr<Sexy::SoundResource> *)&local_70,pRVar10,0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
        if (*(long *)(gLawnApp + 0x9f0) != 0) {
          uVar7 = *(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8);
          lVar18 = FUN_04048a00(uVar7);
          if ((lVar18 != 0) && (lVar18 = FUN_0404959c(uVar7), lVar18 != 0)) {
            FUN_04048afc(lVar17 + 0x184);
          }
        }
        puVar19 = (undefined8 *)FUN_04048a2c(CONCAT44(fStack_1c,local_20),lVar8);
        if ((RtObject *)*puVar19 == (RtObject *)0x0) {
          pZVar20 = (Zombie *)0x0;
LAB_0404ad5c:
          DVec3::DVec3((DVec3 *)&local_80);
LAB_0404ad64:
          if (pZVar20 == (Zombie *)0x0) {
            pfVar9 = (float *)std::
                              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                              **)(this + 0x10));
            local_80 = *pfVar9 + 600.0;
            local_7c = pfVar9[1];
            local_78 = 0;
          }
          else {
LAB_0404ad30:
            pcVar21 = *(code **)(*(long *)pZVar20 + 0x3b0);
            lVar18 = FUN_04049174(*(undefined8 *)(this + 0x10));
            local_70 = (*pcVar21)(*(undefined4 *)(lVar18 + 0x2c0),pZVar20);
LAB_0404ac8c:
            local_6c = fVar23;
            local_68 = uVar6;
            Sexy::SexyVector3::operator=((SexyVector3 *)&local_80,(SexyVector3 *)&local_70);
          }
        }
        else {
          pZVar20 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar19);
          puVar19 = (undefined8 *)FUN_04048a2c(CONCAT44(fStack_1c,local_20),lVar8);
          if ((RtObject *)*puVar19 == (RtObject *)0x0) goto LAB_0404ad5c;
          this_00 = Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar19);
          DVec3::DVec3((DVec3 *)&local_80);
          if (this_00 == (GridItem *)0x0) goto LAB_0404ad64;
          bVar3 = Sexy::RtObject::IsA<GridItemFlame>((RtObject *)this_00);
          if (bVar3) {
            nop();
            lVar18 = FUN_04049174(*(undefined8 *)(this + 0x10));
            local_70 = GridItemFlame::CalcProjectileTargetLocation
                                 (this_01,*(float *)(lVar18 + 0x2c0));
            goto LAB_0404ac8c;
          }
          if (pZVar20 != (Zombie *)0x0) goto LAB_0404ad30;
          GridItem::GetGridLocation();
          BoardTransforms::GridToBoardSpace((Point *)&local_70);
          local_80 = (float)local_88;
          local_7c = (float)local_84;
          local_78 = 0x41c80000;
        }
        lVar8 = lVar8 + 1;
        (**(code **)(*(long *)this + 0x528))(this);
        LaunchProjectileAt(this,lVar17,(DVec3 *)&local_80,3);
      } while (lVar8 != 3);
      this[0x44] = (PlantMelonpult)0x0;
      pRVar11 = (RtObject *)
                UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      pPVar12 = Sexy::RtObject::Cast<PlantAnimRig_Melonpult>(pRVar11);
      std::string::string((string *)&local_70,"attack");
      PlantAnimRig_HoyaCordata::setIdleTag((string *)pPVar12);
      std::string::~string((string *)&local_70);
      nop();
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
      std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_38);
    }
    else {
      iVar4 = 3;
      do {
        uVar7 = *(undefined8 *)(gLawnApp + 0x9f0);
        pfVar9 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                          **)(this + 0x10));
        fVar24 = *pfVar9;
        fVar23 = pfVar9[1];
        fVar22 = (float)ValueRange::GetRandomValue((ValueRange *)aDStack_a0);
        lVar8 = std::
                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                **)(this + 0x10));
        uVar6 = *(undefined4 *)(lVar8 + 8);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_20,(RtWeakPtrBase *)aRStack_90);
        pRVar10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_98);
        uVar7 = Board::AddProjectile
                          ((Board *)(fVar24 + 45.0),fVar23 - fVar22,uVar6,uVar7,
                           (RtWeakPtr<Sexy::ResourceInfo> *)&local_20,pRVar10,0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
        DVec3::DVec3((DVec3 *)&local_20);
        pfVar9 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                          **)(this + 0x10));
        local_20 = *pfVar9 + 600.0;
        fStack_1c = pfVar9[1];
        local_18 = 0;
        (**(code **)(*(long *)this + 0x528))(this);
        LaunchProjectileAt(this,uVar7,(RtWeakPtr<Sexy::ResourceInfo> *)&local_20,3);
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      this[0x44] = (PlantMelonpult)0x0;
      pRVar11 = (RtObject *)
                UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      pPVar12 = Sexy::RtObject::Cast<PlantAnimRig_Melonpult>(pRVar11);
      std::string::string((string *)&local_20,"attack");
      PlantAnimRig_HoyaCordata::setIdleTag((string *)pPVar12);
      std::string::~string((string *)&local_20);
      nop();
    }
    uVar7 = 0;
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
    goto LAB_0404a760;
  }
  cVar2 = Plant::IsSkillCheat(*(Plant **)(this + 0x10));
  if (cVar2 == '\0') {
    iVar4 = FUN_040489f8();
    if (iVar4 == 2) {
      iVar4 = RandRangeInt(0,100);
      if ((float)iVar4 < *(float *)(this + 0x48) * 100.0 + 25.0) goto LAB_0404a7b0;
    }
    else if ((2 < iVar4) &&
            (iVar4 = RandRangeInt(0,100), (float)iVar4 < *(float *)(this + 0x48) * 100.0 + 50.0)) {
LAB_0404a7b0:
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_20,param_2);
      uVar7 = avatarFire(this,(RtWeakPtr<Sexy::SoundResource> *)&local_20,param_3,param_4);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
      goto LAB_0404a760;
    }
  }
  else {
    cVar2 = Plant::IsSkillActivate(*(Plant **)(this + 0x10));
    if (cVar2 != '\0') goto LAB_0404a7b0;
  }
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_20,param_2);
  uVar7 = normalFire(this,(RtWeakPtr<Sexy::SoundResource> *)&local_20,param_3,param_4);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
LAB_0404a760:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}

