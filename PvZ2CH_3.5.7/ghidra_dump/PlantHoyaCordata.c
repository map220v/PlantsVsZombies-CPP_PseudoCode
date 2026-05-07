// Class: PlantHoyaCordata


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHoyaCordata::StaticClassInit() */

void PlantHoyaCordata::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantHoyaCordata");
    (*pcVar2)(plVar1,asStack_10,FUN_04e2a0cc,0xb0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantHoyaCordata::StaticGetClass() */

long * PlantHoyaCordata::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantHoyaCordata",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantHoyaCordata::GetClass() const */

long * PlantHoyaCordata::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantHoyaCordata",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantHoyaCordata::CancelBufferPlant(Plant*) */

void __thiscall PlantHoyaCordata::CancelBufferPlant(PlantHoyaCordata *this,Plant *param_1)

{
  if (param_1 != (Plant *)0x0) {
    Plant::SetAttackUpValue(param_1,false,*(float *)(this + 0x2c),0.0);
    Plant::SetAttackUpConstValue(param_1,false,*(float *)(this + 0x2c),0.0);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHoyaCordata::onApplyCondition(PlantConditions) */

void __thiscall PlantHoyaCordata::onApplyCondition(PlantHoyaCordata *this,int param_2)

{
  int iVar1;
  PlantGroup *this_00;
  undefined8 *puVar2;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar3;
  Plant *pPVar4;
  ZombieAnimRig_DinoStealEgg *this_01;
  long *plVar5;
  long lVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((((param_2 - 1U < 2) || (param_2 == 6)) || (param_2 == 0x12)) || (param_2 == 0xf)) {
    this_00 = (PlantGroup *)Board::GetPlantGroupAt(*(Point **)(gLawnApp + 0x9f0));
    if (this_00 == (PlantGroup *)0x0) {
      if (*(int *)(this + 0xa8) != 0xc) goto LAB_04e2a6fc;
    }
    else {
      PlantGroup::GetTopPlant(this_00);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      if (*(int *)(this + 0xa8) != 0xc) goto LAB_04e2a6fc;
      for (lVar6 = 0; iVar1 = PlantGroup::Count(this_00), (int)lVar6 < iVar1; lVar6 = lVar6 + 1) {
        puVar2 = (undefined8 *)PlantGroup::Plants();
        pRVar3 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_04e29710(*puVar2,lVar6);
        pPVar4 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar3);
        CancelBufferPlant(this,pPVar4);
        pRVar3 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_04e29710(*puVar2,lVar6);
        this_01 = (ZombieAnimRig_DinoStealEgg *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar3);
        ZombieAnimRig_DinoStealEgg::SetHasEgg(this_01,false);
      }
    }
    plVar5 = (long *)Plant::GetAttachedEffectManager(*(Plant **)(this + 0x10));
    (**(code **)(*plVar5 + 0x48))();
  }
LAB_04e2a6fc:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHoyaCordata::Initialize() */

void __thiscall PlantHoyaCordata::Initialize(PlantHoyaCordata *this)

{
  char cVar1;
  int iVar2;
  BoardTransforms *this_00;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  NameMapperBase *this_03;
  RtObject *this_04;
  NewAvatarGeneralSkillBoost *pNVar3;
  undefined4 uVar4;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  uVar4 = PVZ_EOT();
  *(undefined4 *)(this + 0xa8) = 0xb;
  *(undefined4 *)(this + 0x28) = uVar4;
  *(undefined4 *)(this + 0x2c) = uVar4;
  *(undefined4 *)(this + 0x30) = uVar4;
  *(undefined4 *)(this + 0x88) = uVar4;
  this_00 = (BoardTransforms *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            **)(this + 0x10));
  BoardTransforms::BoardSpaceToGrid(this_00,*(float *)this_00,*(float *)(this_00 + 4));
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined8 *)(this + 0x38) = local_10;
  this[0x8d] = (PlantHoyaCordata)0x0;
  *(int *)(this + 0x38) = (int)local_10 + 1;
  std::vector<Plant*,std::allocator<Plant*>>::clear
            ((vector<Plant*,std::allocator<Plant*>> *)(this + 0x90));
  this[0x8c] = (PlantHoyaCordata)0x0;
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
  this_03 = (NameMapperBase *)PlantNewAvatarMapper::GetInstance();
  std::string::string((string *)&local_10,"hoyacordata_new_avatar_2");
  iVar2 = NameMapperBase::GetIdForName(this_03,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  cVar1 = PlayerInfo::IsPlantNewAvatarUnLocked(this_02,iVar2);
  if (cVar1 != '\0') {
    NewAvatar::GetAvatarInfoByAvatarId(iVar2);
    this_04 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    pNVar3 = Sexy::RtObject::Cast<NewAvatarGeneralSkillBoost>(this_04);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    if (pNVar3 != (NewAvatarGeneralSkillBoost *)0x0) {
      *(undefined4 *)(this + 0xac) = *(undefined4 *)(pNVar3 + 100);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHoyaCordata::BufferPlantHealth(Plant*, float) */

void __thiscall
PlantHoyaCordata::BufferPlantHealth(PlantHoyaCordata *this,Plant *param_1,float param_2)

{
  RtObject *this_00;
  float fVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (Plant *)0x0) {
    FUN_04e296dc(aRStack_10,*(undefined8 *)(this + 0x10));
    this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    Sexy::RtObject::Cast<PlantHoyaCordataProps_const>(this_00);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    fVar1 = (float)FUN_04e296d4(*(undefined4 *)(*(long *)(this + 0x10) + 0xd8));
    (**(code **)(*(long *)param_1 + 0x1e0))(param_1,(int)(param_2 * _FUN_04e2ab40 * fVar1),1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHoyaCordata::CanTupleSpellPlantFood(Plant*) */

void __thiscall PlantHoyaCordata::CanTupleSpellPlantFood(PlantHoyaCordata *this,Plant *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  RtObject *this_00;
  PlantHoyaCordataProps *pPVar5;
  BoardTransforms *this_01;
  float fVar6;
  float fVar7;
  float fVar8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (Plant *)0x0) {
    Plant::GetType();
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    bVar1 = std::operator==((string *)(lVar4 + 8),"hoyacordata");
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    if (!bVar1) {
      FUN_04e296dc(aRStack_10,*(undefined8 *)(this + 0x10));
      this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      pPVar5 = Sexy::RtObject::Cast<PlantHoyaCordataProps_const>(this_00);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      if (*(int *)(this + 0xa8) != 0xe) {
        this_01 = (BoardTransforms *)
                  std::
                  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                 *)param_1);
        BoardTransforms::BoardSpaceToGrid(this_01,*(float *)this_01,*(float *)(this_01 + 4));
        cVar2 = Sexy::TPoint<int>::operator==((TPoint<int> *)aRStack_10,(TPoint *)(this + 0x38));
        if (((cVar2 != '\0') && (cVar2 = FUN_04e296d0(param_1[0x250]), cVar2 == '\0')) &&
           (fVar6 = (float)Plant::GetDamageConstValue(param_1), fVar6 != 0.0)) {
          iVar3 = FUN_04e29700(*(undefined8 *)(this + 0x10));
          if (iVar3 < 3) {
            fVar6 = 0.0;
            if (iVar3 == 2) {
              fVar6 = *(float *)(pPVar5 + 0x2c4);
            }
          }
          else {
            fVar6 = *(float *)(pPVar5 + 0x2c4) + *(float *)(pPVar5 + 0x2c4);
          }
          fVar8 = *(float *)(pPVar5 + 700);
          fVar7 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
          if (fVar7 < fVar6 + fVar8) {
            ZombieAnimRig_DinoStealEgg::SetHasEgg((ZombieAnimRig_DinoStealEgg *)param_1,true);
          }
        }
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHoyaCordata::PlayAttackEffect(std::string) */

void __thiscall PlantHoyaCordata::PlayAttackEffect(PlantHoyaCordata *this,undefined8 param_2)

{
  GameObjectDictionary *this_00;
  AttachedEffect *this_01;
  PlantGroup *this_02;
  long lVar1;
  ResourceInfo *pRVar2;
  char *__s;
  code *pcVar3;
  string asStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_04e2975c(asStack_20);
  this_00 = (GameObjectDictionary *)Plant::GetAttachedEffectManager(*(Plant **)(this + 0x10));
  std::string::string(asStack_18,"attack");
  this_01 = (AttachedEffect *)GameObjectDictionary::FindOrCreate(this_00,asStack_18);
  std::string::~string(asStack_18);
  nop();
  this_02 = (PlantGroup *)Board::GetPlantGroupAt(*(Point **)(gLawnApp + 0x9f0));
  if (this_02 != (PlantGroup *)0x0) {
    PlantGroup::GetTopPlant(this_02);
    lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
    if (lVar1 != 0) {
      GetPAMByName(asStack_20);
      pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_18);
      AttachedEffect::InitializeWithAnimation(this_01,(PopAnim *)pRVar2);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
      __s = (char *)FUN_0547429c(param_2);
      std::string::string(asStack_18,__s);
      AttachedEffect::PlayAnimLooped(this_01,asStack_18,2);
      std::string::~string(asStack_18);
      nop();
      pcVar3 = *(code **)(*(long *)this_01 + 0x18);
      EATextSquish::Vec3::Vec3((Vec3 *)asStack_18,0.0,0.0,0.0);
      (*pcVar3)(this_01,lVar1,asStack_18,1);
    }
  }
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHoyaCordata::AllPlayAttackEffect(std::string, int, BoardEntity*) */

void __thiscall
PlantHoyaCordata::AllPlayAttackEffect
          (PlantHoyaCordata *this,undefined8 param_2,undefined4 param_3,RtObject *param_4)

{
  bool bVar1;
  undefined8 extraout_x0;
  GameObjectDictionary *this_00;
  AttachedEffect *this_01;
  ResourceInfo *pRVar2;
  char *__s;
  code *pcVar3;
  undefined4 local_34 [3];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_34[0] = param_3;
  if (param_4 != (RtObject *)0x0) {
    FUN_04e2975c(asStack_28);
    bVar1 = Sexy::RtObject::IsA<Plant>(param_4);
    if (bVar1) {
      nop();
      this_00 = (GameObjectDictionary *)Plant::GetAttachedEffectManager(*(Plant **)(this + 0x10));
      std::to_string<ActivityTypeID>((ActivityTypeID *)local_34);
      std::operator+("attack",asStack_20);
      this_01 = (AttachedEffect *)GameObjectDictionary::FindOrCreate(this_00,asStack_18);
      std::string::~string(asStack_18);
      std::string::~string(asStack_20);
      GetPAMByName(asStack_28);
      pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_18);
      AttachedEffect::InitializeWithAnimation(this_01,(PopAnim *)pRVar2);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
      __s = (char *)FUN_0547429c(param_2);
      std::string::string(asStack_18,__s);
      AttachedEffect::PlayAnimLooped(this_01,asStack_18,2);
      std::string::~string(asStack_18);
      nop();
      pcVar3 = *(code **)(*(long *)this_01 + 0x18);
      EATextSquish::Vec3::Vec3((Vec3 *)asStack_18,0.0,0.0,0.0);
      (*pcVar3)(this_01,extraout_x0,asStack_18,1);
      std::string::~string(asStack_28);
    }
    else {
      std::string::~string(asStack_28);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHoyaCordata::PlayPlantfoodeffect() */

void __thiscall PlantHoyaCordata::PlayPlantfoodeffect(PlantHoyaCordata *this)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar4;
  string asStack_40 [8];
  RtMixedPtrBase aRStack_38 [8];
  string asStack_30 [8];
  Vec3 aVStack_28 [16];
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_04e2975c(asStack_40);
  cVar1 = FUN_0547419c(asStack_40);
  if (cVar1 == '\0') {
    GetPAMByName(asStack_40);
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_38);
    if (cVar1 != '\0') {
      iVar2 = Board::MakeRenderOrder(0x65130,*(undefined4 *)(*(long *)(this + 0x10) + 0x110),0);
      EATextSquish::Vec3::Vec3(aVStack_28,0.0,-115.0,0.0);
      puVar3 = (undefined8 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                               **)(this + 0x10));
      local_18 = *puVar3;
      local_10 = *(undefined4 *)(puVar3 + 1);
      EATextSquish::Vec3::operator+=((Vec3 *)&local_18,aVStack_28);
      this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
      pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_38);
      Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar4,(RtClass *)0x0);
      Effect_PopAnim::SetCentered(this_00,true);
      StandaloneEffect::SetBoardSpaceOrigin
                ((StandaloneEffect *)this_00,(SexyVector3 *)&local_18,iVar2);
      std::string::string(asStack_30,"dz02");
      Effect_PopAnim::PlaySingleAnimation(this_00,asStack_30,0);
      std::string::~string(asStack_30);
      nop();
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
  }
  std::string::~string(asStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHoyaCordata::TupleSpellPlantFood(Plant*) */

void __thiscall PlantHoyaCordata::TupleSpellPlantFood(PlantHoyaCordata *this,Plant *param_1)

{
  undefined *puVar1;
  bool bVar2;
  char cVar3;
  long lVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Plant::GetType();
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  bVar2 = std::operator==((string *)(lVar4 + 8),"hoyacordata");
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if ((!bVar2) && (cVar3 = Plant::CanApplyPlantfood(param_1), cVar3 != '\0')) {
    cVar3 = FUN_04e2a698(*(undefined4 *)(param_1 + 0x70));
    puVar1 = gMessageRouter;
    if (cVar3 == '\0') {
      Plant::GetType();
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
      FUN_05475d88(aRStack_10,lVar4 + 8);
      MessageRouter::Broadcast<std::string_const&,std::string>
                ((MessageRouter *)puVar1,Message::PlantfoodUsed,aRStack_10);
      std::string::~string((string *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    }
    (**(code **)(**(long **)(param_1 + 0xa8) + 0x220))(*(long **)(param_1 + 0xa8));
    ZombieAnimRig_DinoStealEgg::SetHasEgg((ZombieAnimRig_DinoStealEgg *)param_1,false);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantHoyaCordata::PlantHoyaCordata() */

void __thiscall PlantHoyaCordata::PlantHoyaCordata(PlantHoyaCordata *this)

{
  undefined *puVar1;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_069da870;
  Sexy::Point::Point((Point *)(this + 0x38));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x58));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x70));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x90));
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,StartLoopTupleSpell);
  local_50 = local_30;
  uStack_48 = uStack_28;
  local_40 = local_20;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<PlantHoyaCordata,void(PlantHoyaCordata::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantFoodEnd,&local_50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,CanTupleSpellPlantFood);
  local_40 = local_8;
  local_50 = local_18;
  uStack_48 = uStack_10;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<PlantHoyaCordata,void(PlantHoyaCordata::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantPlantfooded,&local_50);
  return;
}


/* PlantHoyaCordata::StaticNew() */

PlantHoyaCordata * PlantHoyaCordata::StaticNew(void)

{
  PlantHoyaCordata *this;
  
  this = ::operator_new(0xb0);
  PlantHoyaCordata(this);
  return this;
}


/* PlantHoyaCordata::BufferPlantSpeed(Plant*, bool) */

void __thiscall
PlantHoyaCordata::BufferPlantSpeed(PlantHoyaCordata *this,Plant *param_1,bool param_2)

{
  long lVar1;
  float fVar2;
  
  if (param_1 == (Plant *)0x0) {
    return;
  }
  lVar1 = FUN_04e2b52c(*(undefined8 *)(this + 0x10));
  fVar2 = *(float *)(param_1 + 0xe0);
  if (!param_2) {
    Plant::ChangeSpeedModifier(param_1,fVar2,*(float *)(this + 0x2c) - *(float *)(this + 0x28));
    return;
  }
  Plant::ChangeSpeedModifier
            (param_1,*(float *)(lVar1 + 0x2d4) * fVar2 + fVar2,
             *(float *)(this + 0x2c) - *(float *)(this + 0x28));
  return;
}


/* PlantHoyaCordata::Phase2BufferPlant(Plant*) */

void __thiscall PlantHoyaCordata::Phase2BufferPlant(PlantHoyaCordata *this,Plant *param_1)

{
  BufferPlantSpeed(this,param_1,true);
  Plant::SetInvincible(param_1,true,true,*(float *)(this + 0x2c) - *(float *)(this + 0x28));
  return;
}


/* PlantHoyaCordata::CancelPhase2BufferPlant(Plant*) */

void __thiscall PlantHoyaCordata::CancelPhase2BufferPlant(PlantHoyaCordata *this,Plant *param_1)

{
  if (param_1 != (Plant *)0x0) {
    BufferPlantSpeed(this,param_1,false);
    Plant::SetInvincible(param_1,false,false,0.0);
    return;
  }
  return;
}


/* PlantHoyaCordata::onDestroy() */

void __thiscall PlantHoyaCordata::onDestroy(PlantHoyaCordata *this)

{
  int iVar1;
  long *plVar2;
  PlantGroup *this_00;
  undefined8 *puVar3;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar4;
  Plant *pPVar5;
  long lVar6;
  
  if (*(int *)(this + 0xa8) == 0xc) {
    lVar6 = 0;
    plVar2 = (long *)Plant::GetAttachedEffectManager(*(Plant **)(this + 0x10));
    (**(code **)(*plVar2 + 0x48))();
    this_00 = (PlantGroup *)Board::GetPlantGroupAt(*(Point **)(gLawnApp + 0x9f0));
    if (this_00 != (PlantGroup *)0x0) {
      for (; iVar1 = PlantGroup::Count(this_00), (int)lVar6 < iVar1; lVar6 = lVar6 + 1) {
        puVar3 = (undefined8 *)PlantGroup::Plants();
        pRVar4 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_04e29710(*puVar3,lVar6);
        pPVar5 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar4);
        CancelBufferPlant(this,pPVar5);
        pRVar4 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_04e29710(*puVar3,lVar6);
        pPVar5 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar4);
        CancelPhase2BufferPlant(this,pPVar5);
      }
      PlantFramework::onDestroy((PlantFramework *)this);
      return;
    }
  }
  PlantFramework::onDestroy((PlantFramework *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHoyaCordata::Idle() */

void __thiscall PlantHoyaCordata::Idle(PlantHoyaCordata *this)

{
  long *plVar1;
  RtObject *pRVar2;
  PlantAnimRig_HoyaCordata *pPVar3;
  PlantAnimRig *pPVar4;
  PopAnimRig *pPVar5;
  char *__s;
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  switch(*(undefined4 *)(this + 0xa8)) {
  default:
    plVar1 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    (**(code **)(*plVar1 + 0x118))();
    goto LAB_04e2b7d8;
  case 0xc:
    pPVar4 = (PlantAnimRig *)
             UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    PlantAnimRig::SetState(pPVar4,1);
    if (this[0x8c] == (PlantHoyaCordata)0x0) {
      pRVar2 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
      ;
      pPVar5 = (PopAnimRig *)Sexy::RtObject::Cast<PlantAnimRig_HoyaCordata>(pRVar2);
      std::string::string(asStack_58,"attack");
      Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3((DummyInit *)aRStack_50)
      ;
    }
    else {
      pRVar2 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
      ;
      pPVar5 = (PopAnimRig *)Sexy::RtObject::Cast<PlantAnimRig_HoyaCordata>(pRVar2);
      std::string::string(asStack_58,"attack_lv5");
      Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3((DummyInit *)aRStack_50)
      ;
    }
    PopAnimRig::PlayAndContinue(pPVar5,asStack_58,0,(DummyInit *)aRStack_50);
    std::string::~string(asStack_58);
    nop();
    goto LAB_04e2b7d8;
  case 0xd:
    pRVar2 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    pPVar3 = Sexy::RtObject::Cast<PlantAnimRig_HoyaCordata>(pRVar2);
    __s = "sleep";
    break;
  case 0xf:
    this[8] = (PlantHoyaCordata)0x0;
    (**(code **)(*(long *)this + 0x228))(this);
    this[8] = (PlantHoyaCordata)0x1;
    pRVar2 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    pPVar3 = Sexy::RtObject::Cast<PlantAnimRig_HoyaCordata>(pRVar2);
    __s = "sleep";
    break;
  case 0x10:
    pRVar2 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    pPVar3 = Sexy::RtObject::Cast<PlantAnimRig_HoyaCordata>(pRVar2);
    __s = "sleep_over";
  }
  std::string::string(asStack_68,__s);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string(asStack_58,"onAnimStoppedCallback");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  PlantAnimRig_HoyaCordata::playSingleAnimation(pPVar3,asStack_68,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  std::string::~string(asStack_68);
  nop();
LAB_04e2b7d8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHoyaCordata::AllPhase2BufferPlant() */

void __thiscall PlantHoyaCordata::AllPhase2BufferPlant(PlantHoyaCordata *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  Plant *extraout_x0;
  undefined8 local_58;
  undefined8 local_50;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  undefined8 local_40;
  undefined8 local_38;
  Insets aIStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  iVar2 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(this + 0x10));
  iVar3 = SharkMinion::getRow(*(SharkMinion **)(this + 0x10));
  Sexy::Insets::Insets(aIStack_30,iVar2 + -1,iVar3 + -1,3,3);
  EntityFinder::GetEntitiesInGridSquares
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,1,aIStack_30
            );
  lVar4 = FUN_04e29718(local_20,local_18);
  if (lVar4 != 0) {
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)(this + 0x40);
    local_58 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_20);
    local_50 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_20);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_58,(__normal_iterator *)&local_50), bVar1)
    {
      puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58)
      ;
      if (((RtObject *)*puVar5 != (RtObject *)0x0) &&
         (bVar1 = Sexy::RtObject::IsA<Plant>((RtObject *)*puVar5), bVar1)) {
        uVar6 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin(this_00);
        uVar7 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end(this_00);
        ToolPacketData::GetProps();
        local_40 = std::
                   find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<BoardEntity>*,std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>,Sexy::RtWeakPtr<GameObject>>
                             (uVar6,uVar7,aRStack_48);
        local_38 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end(this_00);
        bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_40,(__normal_iterator *)&local_38)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
        if (bVar1) {
          nop();
          Phase2BufferPlant(this,extraout_x0);
        }
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_58);
    }
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHoyaCordata::CurePlant() */

void __thiscall PlantHoyaCordata::CurePlant(PlantHoyaCordata *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  PlantGroup *this_01;
  undefined8 *puVar5;
  RtWeakPtr<Sexy::ResourceInfo> *this_02;
  Plant *pPVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  Plant *extraout_x0;
  undefined8 local_58;
  undefined8 local_50;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  undefined8 local_40;
  undefined8 local_38;
  Insets aIStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0xa8) == 0xc) {
    lVar4 = 0;
    this_01 = (PlantGroup *)Board::GetPlantGroupAt(*(Point **)(gLawnApp + 0x9f0));
    if (this_01 != (PlantGroup *)0x0) {
      for (; iVar2 = PlantGroup::Count(this_01), (int)lVar4 < iVar2; lVar4 = lVar4 + 1) {
        puVar5 = (undefined8 *)PlantGroup::Plants();
        this_02 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_04e29710(*puVar5,lVar4);
        pPVar6 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
        BufferPlantHealth(this,pPVar6,1.0);
      }
    }
  }
  else if (*(int *)(this + 0xa8) == 0xe) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    iVar2 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(this + 0x10));
    iVar3 = SharkMinion::getRow(*(SharkMinion **)(this + 0x10));
    Sexy::Insets::Insets(aIStack_30,iVar2 + -1,iVar3 + -1,3,3);
    EntityFinder::GetEntitiesInGridSquares
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,1,
               aIStack_30);
    lVar4 = FUN_04e29718(local_20,local_18);
    if (lVar4 != 0) {
      this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)(this + 0x40);
      local_58 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)&local_20);
      local_50 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_20);
      while (bVar1 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_58,(__normal_iterator *)&local_50),
            bVar1) {
        std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
        uVar7 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin(this_00);
        uVar8 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end(this_00);
        ToolPacketData::GetProps();
        local_40 = std::
                   find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<BoardEntity>*,std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>,Sexy::RtWeakPtr<GameObject>>
                             (uVar7,uVar8,aRStack_48);
        local_38 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end(this_00);
        bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_40,(__normal_iterator *)&local_38)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
        if (bVar1) {
          nop();
          BufferPlantHealth(this,extraout_x0,2.0);
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_58);
      }
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHoyaCordata::BufferPlantAttack(Plant*, float) */

void __thiscall
PlantHoyaCordata::BufferPlantAttack(PlantHoyaCordata *this,Plant *param_1,float param_2)

{
  RtObject *this_00;
  PlantHoyaCordataProps *pPVar1;
  ulong uVar2;
  int *piVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  float fVar7;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [8];
  float local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (Plant *)0x0) {
    uVar5 = 0;
    FUN_04e296dc(aRStack_68,*(undefined8 *)(this + 0x10));
    this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
    pPVar1 = Sexy::RtObject::Cast<PlantHoyaCordataProps_const>(this_00);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
    fVar7 = (float)PVZ_T();
    uVar6 = *(undefined8 *)(pPVar1 + 0x70);
    uVar4 = *(undefined8 *)(pPVar1 + 0x78);
    *(float *)(this + 0x2c) = fVar7 + *(float *)(pPVar1 + 0x2b8);
    uVar2 = FUN_04e29738(uVar6,uVar4);
    if (uVar2 != 0) {
      do {
        piVar3 = (int *)FUN_04e2974c(uVar6,uVar5);
        if (*piVar3 == 3) {
          FUN_04e2974c(uVar6,1);
          Plant::calcDamageInfoFromPlantAction(*(PlantAction **)(this + 0x10));
          Plant::SetAttackUpValue
                    (param_1,true,*(float *)(this + 0x2c),param_2 * *(float *)(pPVar1 + 0x2d8));
          Plant::SetAttackUpConstValue
                    (param_1,true,*(float *)(this + 0x2c),local_60 * 0.5 * param_2);
          DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
          uVar6 = *(undefined8 *)(pPVar1 + 0x70);
          uVar2 = FUN_04e29738(uVar6,*(undefined8 *)(pPVar1 + 0x78));
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar2);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PlantHoyaCordata::BufferPlant(Plant*, float) */

void __thiscall PlantHoyaCordata::BufferPlant(PlantHoyaCordata *this,Plant *param_1,float param_2)

{
  if (param_1 != (Plant *)0x0) {
    BufferPlantAttack(this,param_1,param_2);
    BufferPlantHealth(this,param_1,param_2);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHoyaCordata::UpdatePlantfood() */

void __thiscall PlantHoyaCordata::UpdatePlantfood(PlantHoyaCordata *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  bool bVar2;
  RtWeakPtrBase *pRVar3;
  RtObject *this_01;
  Plant *this_02;
  Plant *this_03;
  float fVar4;
  undefined4 uVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0xa8) == 0xe) {
    fVar4 = (float)PVZ_T();
    if (*(float *)(this + 0x2c) <= fVar4) {
      (**(code **)(*(long *)this + 0x228))(this);
    }
    else {
      fVar4 = (float)PVZ_T();
      this_03 = *(Plant **)(this + 0x10);
      if (*(float *)(this_03 + 300) < fVar4) {
        cVar1 = Board::IsPlaying(*(Board **)(gLawnApp + 0x9f0));
        if (cVar1 != '\0') {
          CurePlant(this);
          this_03 = *(Plant **)(this + 0x10);
        }
        Plant::ResetLaunchTimer(this_03,false);
      }
      fVar4 = (float)PVZ_T();
      if (*(float *)(this + 0x28) <= fVar4) {
        AllPhase2BufferPlant(this);
      }
      else {
        fVar4 = (float)PVZ_T();
        if (*(float *)(this + 0x88) <= fVar4) {
          this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)(this + 0x70);
          local_18 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::begin(this_00);
          local_10 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::end(this_00);
          while (bVar2 = __gnu_cxx::operator!=
                                   ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10),
                bVar2) {
            pRVar3 = (RtWeakPtrBase *)
                     std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)aRStack_20,pRVar3);
            cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_20);
            if (cVar1 != '\0') {
              this_01 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
              bVar2 = Sexy::RtObject::IsA<Plant>(this_01);
              if (bVar2) {
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
                nop();
                cVar1 = Plant::HasCondition();
                if ((cVar1 == '\0') && (cVar1 = Plant::CanApplyPlantfood(this_02), cVar1 != '\0')) {
                  (**(code **)(**(long **)(this_02 + 0xa8) + 0x220))(*(long **)(this_02 + 0xa8));
                }
              }
            }
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
            eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                      ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
          }
          std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
          clear((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *
                )this_00);
          uVar5 = PVZ_EOT();
          *(undefined4 *)(this + 0x88) = uVar5;
        }
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantHoyaCordata::~PlantHoyaCordata() */

void __thiscall PlantHoyaCordata::~PlantHoyaCordata(PlantHoyaCordata *this)

{
  undefined *puVar1;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  *(undefined ***)this = &PTR_GetClass_069da870;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,StartLoopTupleSpell);
  local_50 = local_30;
  uStack_48 = uStack_28;
  local_40 = local_20;
  MessageRouter::
  Unsubscribe<Plant*,Sexy::CBMemberTranslatorX<PlantHoyaCordata,void(PlantHoyaCordata::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantFoodEnd,&local_50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,CanTupleSpellPlantFood);
  local_40 = local_8;
  local_50 = local_18;
  uStack_48 = uStack_10;
  MessageRouter::
  Unsubscribe<Plant*,Sexy::CBMemberTranslatorX<PlantHoyaCordata,void(PlantHoyaCordata::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantPlantfooded,&local_50);
  std::vector<Plant*,std::allocator<Plant*>>::~vector
            ((vector<Plant*,std::allocator<Plant*>> *)(this + 0x90));
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x70));
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)(this + 0x58));
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x40));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantHoyaCordata::~PlantHoyaCordata() */

void __thiscall PlantHoyaCordata::~PlantHoyaCordata(PlantHoyaCordata *this)

{
  ~PlantHoyaCordata(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHoyaCordata::AllBufferPlant() */

void __thiscall PlantHoyaCordata::AllBufferPlant(PlantHoyaCordata *this)

{
  vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *this_00;
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  Plant *extraout_x0;
  undefined8 uVar7;
  ulong uVar8;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  Plant *this_02;
  RtObject *this_03;
  PlantHoyaCordataProps *pPVar9;
  RtWeakPtr *pRVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  undefined8 local_50;
  undefined8 local_48;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  Insets aIStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  this_00 = (vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
            (this + 0x40);
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  iVar3 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(this + 0x10));
  iVar4 = SharkMinion::getRow(*(SharkMinion **)(this + 0x10));
  Sexy::Insets::Insets(aIStack_30,iVar3 + -1,iVar4 + -1,3,3);
  EntityFinder::GetEntitiesInGridSquares
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,1,aIStack_30
            );
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::clear
            (this_00);
  lVar5 = FUN_04e29718(local_20,local_18);
  if (lVar5 != 0) {
    iVar3 = 0;
    local_50 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_20);
    local_48 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_20);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_50,(__normal_iterator *)&local_48), bVar1)
    {
      puVar6 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50)
      ;
      uVar12 = *puVar6;
      nop();
      Plant::GetType();
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      bVar1 = std::operator==((string *)(lVar5 + 8),"hoyacordata");
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
      if (!bVar1) {
        BufferPlant(this,extraout_x0,2.0);
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_40);
        std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
        push_back(this_00,(RtWeakPtr *)aRStack_38);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
        std::string::string((string *)aRStack_38,"dz01");
        AllPlayAttackEffect(this,aRStack_38,iVar3,uVar12);
        std::string::~string((string *)aRStack_38);
        nop();
        iVar3 = iVar3 + 1;
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_50);
    }
    cVar2 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
    if (cVar2 != '\0') {
      std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::clear
                ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
                  *)(this + 0x70));
      uVar13 = PVZ_EOT();
      *(undefined4 *)(this + 0x88) = uVar13;
      uVar12 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)this_00);
      uVar7 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)this_00);
      std::
      random_shuffle<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<GridItemVase>*,std::vector<Sexy::RtWeakPtr<GridItemVase>,std::allocator<Sexy::RtWeakPtr<GridItemVase>>>>>
                (uVar12,uVar7);
      *(undefined4 *)(this + 0x34) = 0;
      uVar11 = 0;
      while( true ) {
        uVar12 = *(undefined8 *)(this + 0x40);
        uVar8 = FUN_04e29724(uVar12,*(undefined8 *)(this + 0x48));
        if ((uVar8 <= uVar11) || (1 < *(int *)(this + 0x34))) break;
        this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_04e29730(uVar12,uVar11);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
        nop();
        if (this_02 == (Plant *)0x0) {
LAB_04e2c738:
          uVar11 = uVar11 + 1;
        }
        else {
          FUN_04e296dc(aRStack_38,*(undefined8 *)(this + 0x10));
          this_03 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
          pPVar9 = Sexy::RtObject::Cast<PlantHoyaCordataProps_const>(this_03);
          fVar15 = *(float *)(pPVar9 + 0x2c0);
          fVar14 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
          if (((fVar15 <= fVar14) || (cVar2 = Plant::CanBeWatered(this_02), cVar2 == '\0')) ||
             (cVar2 = Plant::IsWatering(this_02), cVar2 != '\0')) goto LAB_04e2c738;
          Plant::GetType();
          Plant::GetType();
          cVar2 = Sexy::RtWeakPtrBase::operator==
                            ((RtWeakPtrBase *)aRStack_40,(RtWeakPtrBase *)aRStack_38);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
          if (cVar2 != '\0') goto LAB_04e2c738;
          Plant::Water(this_02,true,2.0);
          *(int *)(this + 0x34) = *(int *)(this + 0x34) + 1;
          pRVar10 = (RtWeakPtr *)FUN_04e29730(*(undefined8 *)(this + 0x40),uVar11);
          std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
          push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
                     *)(this + 0x70),pRVar10);
          fVar14 = (float)PVZ_T();
          *(float *)(this + 0x88) = fVar14 + 2.5;
          uVar11 = uVar11 + 1;
        }
      }
    }
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHoyaCordata::SetState(unsigned int) */

void __thiscall PlantHoyaCordata::SetState(PlantHoyaCordata *this,uint param_1)

{
  int iVar1;
  PlantGroup *this_00;
  RtObject *pRVar2;
  PlantHoyaCordataProps *pPVar3;
  long *plVar4;
  Plant *pPVar5;
  PlantAnimRig_HoyaCordata *pPVar6;
  undefined8 *puVar7;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar8;
  ZombieAnimRig_DinoStealEgg *this_01;
  char *__s;
  long lVar9;
  UIEasyButtonWidget *this_02;
  float fVar10;
  float fVar11;
  float fVar12;
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtId aRStack_60 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  *(uint *)(this + 0xa8) = param_1;
  *(uint *)(*(long *)(this + 0x10) + 200) = param_1;
  local_8 = ___stack_chk_guard;
  this_00 = (PlantGroup *)Board::GetPlantGroupAt(*(Point **)(gLawnApp + 0x9f0));
  if (this_00 == (PlantGroup *)0x0) {
    FUN_04e296dc(aRStack_58,*(undefined8 *)(this + 0x10));
    pRVar2 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
    pPVar3 = Sexy::RtObject::Cast<PlantHoyaCordataProps_const>(pRVar2);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
    switch(param_1) {
    case 0xb:
    case 0x11:
      goto switchD_04e2c8e0_caseD_b;
    default:
      goto switchD_04e2c8e0_default;
    case 0xd:
      goto switchD_04e2c940_caseD_d;
    case 0xe:
      goto switchD_04e2c8e0_caseD_e;
    case 0xf:
      goto switchD_04e2c8e0_caseD_f;
    case 0x10:
      goto switchD_04e2c8e0_caseD_10;
    }
  }
  PlantGroup::GetTopPlant(this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
  FUN_04e296dc(aRStack_58,*(undefined8 *)(this + 0x10));
  pRVar2 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
  pPVar3 = Sexy::RtObject::Cast<PlantHoyaCordataProps_const>(pRVar2);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
  switch(param_1) {
  case 0xb:
  case 0x11:
    goto switchD_04e2c8e0_caseD_b;
  case 0xc:
    fVar11 = (float)PVZ_T();
    *(float *)(this + 0x2c) = fVar11 + *(float *)(pPVar3 + 0x2b8);
    for (lVar9 = 0; iVar1 = PlantGroup::Count(this_00), (int)lVar9 < iVar1; lVar9 = lVar9 + 1) {
      puVar7 = (undefined8 *)PlantGroup::Plants();
      pRVar8 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_04e29710(*puVar7,lVar9);
      pPVar5 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar8);
      BufferPlant(this,pPVar5,1.0);
    }
    this_02 = *(UIEasyButtonWidget **)(this + 0x10);
    iVar1 = FUN_04e29700(this_02);
    if (iVar1 == 5) {
      fVar11 = (float)PVZ_T();
      this_02 = *(UIEasyButtonWidget **)(this + 0x10);
      *(float *)(this + 0x28) = fVar11 + 3.0;
    }
    pRVar2 = (RtObject *)UIEasyButtonWidget::GetImageNormal(this_02);
    pPVar6 = Sexy::RtObject::Cast<PlantAnimRig_HoyaCordata>(pRVar2);
    std::string::string((string *)aRStack_58,"attack");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3((DummyInit *)aRStack_50);
    PopAnimRig::PlayAndContinue((PopAnimRig *)pPVar6,aRStack_58,0,(DummyInit *)aRStack_50);
    std::string::~string((string *)aRStack_58);
    nop();
    std::string::string((string *)aRStack_58,"pg");
    PlayAttackEffect(this,aRStack_58);
    std::string::~string((string *)aRStack_58);
    nop();
    break;
  case 0xd:
    for (lVar9 = 0; iVar1 = PlantGroup::Count(this_00), (int)lVar9 < iVar1; lVar9 = lVar9 + 1) {
      puVar7 = (undefined8 *)PlantGroup::Plants();
      pRVar8 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_04e29710(*puVar7,lVar9);
      pPVar5 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar8);
      CancelBufferPlant(this,pPVar5);
      pRVar8 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_04e29710(*puVar7,lVar9);
      this_01 = (ZombieAnimRig_DinoStealEgg *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar8);
      ZombieAnimRig_DinoStealEgg::SetHasEgg(this_01,false);
    }
switchD_04e2c940_caseD_d:
    iVar1 = FUN_04e29700(*(undefined8 *)(this + 0x10));
    if (iVar1 < 3) {
      fVar11 = (*(float *)(pPVar3 + 0x2cc) + 1.0) - *(float *)(pPVar3 + 0x2d0) * (float)iVar1;
    }
    else {
      fVar11 = *(float *)(pPVar3 + 0x2cc) - *(float *)(pPVar3 + 0x2d0) * 2.0;
    }
    fVar12 = *(float *)(this + 0xac);
    fVar10 = (float)PVZ_T();
    pPVar5 = *(Plant **)(this + 0x10);
    *(float *)(this + 0x30) = (fVar10 + fVar11) - fVar12 * fVar11;
    goto LAB_04e2c994;
  case 0xe:
switchD_04e2c8e0_caseD_e:
    AllBufferPlant(this);
    iVar1 = FUN_04e29700(*(undefined8 *)(this + 0x10));
    if (iVar1 == 5) {
      fVar11 = (float)PVZ_T();
      *(float *)(this + 0x28) = fVar11 + 3.0;
    }
    fVar11 = (float)PVZ_T();
    *(float *)(this + 0x2c) = fVar11 + *(float *)(pPVar3 + 0x2b8);
    PlayPlantfoodeffect(this);
    break;
  case 0xf:
switchD_04e2c8e0_caseD_f:
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::clear
              ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
               (this + 0x40));
    iVar1 = FUN_04e29700(*(undefined8 *)(this + 0x10));
    if (iVar1 < 3) {
      fVar11 = (*(float *)(pPVar3 + 0x2cc) + 1.0) - *(float *)(pPVar3 + 0x2d0) * (float)iVar1;
    }
    else {
      fVar11 = *(float *)(pPVar3 + 0x2cc) - *(float *)(pPVar3 + 0x2d0) * 2.0;
    }
    fVar10 = (float)PVZ_T();
    pPVar5 = *(Plant **)(this + 0x10);
    *(float *)(this + 0x30) = fVar10 + fVar11;
LAB_04e2c994:
    plVar4 = (long *)Plant::GetAttachedEffectManager(pPVar5);
    (**(code **)(*plVar4 + 0x48))();
    pRVar2 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    pPVar6 = Sexy::RtObject::Cast<PlantAnimRig_HoyaCordata>(pRVar2);
    __s = "sleep";
LAB_04e2c9c0:
    std::string::string(asStack_68,__s);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string((string *)aRStack_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               aRStack_58);
    PlantAnimRig_HoyaCordata::playSingleAnimation(pPVar6,asStack_68,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string((string *)aRStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    std::string::~string(asStack_68);
    nop();
    break;
  case 0x10:
switchD_04e2c8e0_caseD_10:
    pRVar2 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    pPVar6 = Sexy::RtObject::Cast<PlantAnimRig_HoyaCordata>(pRVar2);
    __s = "sleep_over";
    goto LAB_04e2c9c0;
  }
switchD_04e2c8e0_default:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
switchD_04e2c8e0_caseD_b:
  plVar4 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  (**(code **)(*plVar4 + 0x118))();
  goto switchD_04e2c8e0_default;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHoyaCordata::ApplyPlantfood() */

void __thiscall PlantHoyaCordata::ApplyPlantfood(PlantHoyaCordata *this)

{
  RealObject *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  SetState(this,0xe);
  this_00 = *(RealObject **)(this + 0x10);
  std::string::string(asStack_10,"Play_TwoYear_BGM");
  RealObject::PlayPositionalSound(this_00,asStack_10,10.0);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHoyaCordata::CancelPlantfood() */

void __thiscall PlantHoyaCordata::CancelPlantfood(PlantHoyaCordata *this)

{
  RealObject *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  SetState(this,0xf);
  this_00 = *(RealObject **)(this + 0x10);
  std::string::string(asStack_10,"Stop_TwoYear_BGM");
  RealObject::PlayPositionalSound(this_00,asStack_10,0.0);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHoyaCordata::UpdateActions() */

void __thiscall PlantHoyaCordata::UpdateActions(PlantHoyaCordata *this)

{
  vector<Plant*,std::allocator<Plant*>> *this_00;
  char cVar1;
  PlantHoyaCordata PVar2;
  int iVar3;
  PlantGroup *this_01;
  undefined8 *puVar4;
  RtWeakPtr<Sexy::ResourceInfo> *this_02;
  RtObject *this_03;
  PlantAnimRig_HoyaCordata *pPVar5;
  Plant *pPVar6;
  long lVar7;
  float fVar8;
  undefined8 local_48;
  undefined8 local_40;
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
  if (*(int *)(this + 0x38) < iVar3) {
    this_01 = (PlantGroup *)Board::GetPlantGroupAt(*(Point **)(gLawnApp + 0x9f0));
    iVar3 = *(int *)(this + 0xa8);
    if (iVar3 == 0xb) {
      if (this_01 != (PlantGroup *)0x0) {
        SetState(this,0xc);
      }
    }
    else if (iVar3 == 0xc) {
      if (this[0x8d] != (PlantHoyaCordata)0x0) {
        this_00 = (vector<Plant*,std::allocator<Plant*>> *)(this + 0x90);
        cVar1 = std::vector<Plant*,std::allocator<Plant*>>::empty(this_00);
        if (cVar1 == '\0') {
          local_48 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                              *)this_00);
          while( true ) {
            local_40 = std::
                       vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                              *)this_00);
            PVar2 = (PlantHoyaCordata)
                    __gnu_cxx::operator!=
                              ((__normal_iterator *)&local_48,(__normal_iterator *)&local_40);
            if (!(bool)PVar2) break;
            puVar4 = (undefined8 *)
                     std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
            pPVar6 = (Plant *)*puVar4;
            if (*(code **)(*(long *)pPVar6 + 0x1f8) == Plant::IsInPlantFoodState) {
              cVar1 = Plant::IsInPlantFoodState(pPVar6);
            }
            else {
              cVar1 = (**(code **)(*(long *)pPVar6 + 0x1f8))();
            }
            if (cVar1 == '\0') {
              TupleSpellPlantFood(this,pPVar6);
              __gnu_cxx::
              __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              ::__normal_iterator<Sexy::RenderStateManager::Context**>
                        ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                          *)&local_40,(__normal_iterator *)&local_48);
              local_48 = std::vector<Plant*,std::allocator<Plant*>>::erase(this_00,local_40);
            }
            else {
              FUN_04e2a940((__normal_iterator *)&local_48);
            }
          }
          cVar1 = std::vector<Plant*,std::allocator<Plant*>>::empty(this_00);
          if (cVar1 != '\0') {
            this[0x8d] = PVar2;
          }
        }
      }
      if ((this_01 == (PlantGroup *)0x0) ||
         (fVar8 = (float)PVZ_T(), *(float *)(this + 0x2c) <= fVar8)) {
        SetState(this,0xd);
      }
      else {
        fVar8 = (float)PVZ_T();
        if ((*(float *)(this + 0x28) <= fVar8) && (lVar7 = 0, this[0x8c] == (PlantHoyaCordata)0x0))
        {
          for (; iVar3 = PlantGroup::Count(this_01), (int)lVar7 < iVar3; lVar7 = lVar7 + 1) {
            puVar4 = (undefined8 *)PlantGroup::Plants();
            this_02 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_04e29710(*puVar4,lVar7);
            pPVar6 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
            Phase2BufferPlant(this,pPVar6);
          }
          std::string::string((string *)&local_40,"pg_lv5");
          PlayAttackEffect(this,(string *)&local_40);
          std::string::~string((string *)&local_40);
          nop();
          this_03 = (RtObject *)
                    UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
          pPVar5 = Sexy::RtObject::Cast<PlantAnimRig_HoyaCordata>(this_03);
          std::string::string((string *)&local_40,"attack_lv5");
          Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
          PopAnimRig::PlayAndContinue((PopAnimRig *)pPVar5,(string *)&local_40,0,aDStack_38);
          std::string::~string((string *)&local_40);
          nop();
          this[0x8c] = (PlantHoyaCordata)0x1;
        }
        fVar8 = (float)PVZ_T();
        pPVar6 = *(Plant **)(this + 0x10);
        if (*(float *)(pPVar6 + 300) < fVar8) {
          cVar1 = Board::IsPlaying(*(Board **)(gLawnApp + 0x9f0));
          if (cVar1 != '\0') {
            CurePlant(this);
            pPVar6 = *(Plant **)(this + 0x10);
          }
          Plant::ResetLaunchTimer(pPVar6,false);
        }
      }
    }
    else if ((iVar3 == 0x11) && (fVar8 = (float)PVZ_T(), *(float *)(this + 0x30) <= fVar8)) {
      SetState(this,0x10);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHoyaCordata::onAnimStoppedCallback(std::string const&) */

void __thiscall PlantHoyaCordata::onAnimStoppedCallback(PlantHoyaCordata *this,string *param_1)

{
  PlantHoyaCordata PVar1;
  bool bVar2;
  RtObject *pRVar3;
  PlantAnimRig_HoyaCordata *pPVar4;
  char *__s;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PVar1 = (PlantHoyaCordata)std::operator==(param_1,"attack02");
  if ((bool)PVar1) {
    if (this[0x8c] == (PlantHoyaCordata)0x0) {
      pRVar3 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
      ;
      pPVar4 = Sexy::RtObject::Cast<PlantAnimRig_HoyaCordata>(pRVar3);
      __s = "attack";
    }
    else {
      pRVar3 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
      ;
      pPVar4 = Sexy::RtObject::Cast<PlantAnimRig_HoyaCordata>(pRVar3);
      __s = "attack_lv5";
    }
    std::string::string(asStack_10,__s);
    PlantAnimRig_HoyaCordata::setIdleTag((string *)pPVar4);
    std::string::~string(asStack_10);
    nop();
  }
  else {
    bVar2 = std::operator==(param_1,"sleep");
    if (bVar2) {
      pRVar3 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
      ;
      pPVar4 = Sexy::RtObject::Cast<PlantAnimRig_HoyaCordata>(pRVar3);
      std::string::string(asStack_10,"sleep_idle");
      PlantAnimRig_HoyaCordata::setIdleTag((string *)pPVar4);
      std::string::~string(asStack_10);
      nop();
      this[0x8c] = PVar1;
      SetState(this,0x11);
    }
    else {
      bVar2 = std::operator==(param_1,"sleep_over");
      if (bVar2) {
        pRVar3 = (RtObject *)
                 UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
        pPVar4 = Sexy::RtObject::Cast<PlantAnimRig_HoyaCordata>(pRVar3);
        std::string::string(asStack_10,"idle");
        PlantAnimRig_HoyaCordata::setIdleTag((string *)pPVar4);
        std::string::~string(asStack_10);
        nop();
        SetState(this,0xb);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantHoyaCordata::onEndCondition(PlantConditions) */

void __thiscall PlantHoyaCordata::onEndCondition(PlantHoyaCordata *this,int param_2)

{
  if ((((1 < param_2 - 1U) && (param_2 != 6)) && (param_2 != 0x12)) && (param_2 != 0xf)) {
    return;
  }
  this[0x8c] = (PlantHoyaCordata)0x0;
  SetState(this,0xb);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHoyaCordata::onSleeped(bool) */

void __thiscall PlantHoyaCordata::onSleeped(PlantHoyaCordata *this,bool param_1)

{
  int iVar1;
  PlantGroup *this_00;
  undefined8 *puVar2;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar3;
  Plant *pPVar4;
  ZombieAnimRig_DinoStealEgg *this_01;
  long *plVar5;
  long lVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (PlantGroup *)Board::GetPlantGroupAt(*(Point **)(gLawnApp + 0x9f0));
  if (this_00 != (PlantGroup *)0x0) {
    PlantGroup::GetTopPlant(this_00);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  if (param_1) {
    if (*(int *)(this + 0xa8) == 0xc) {
      lVar6 = 0;
      if (this_00 != (PlantGroup *)0x0) {
        for (; iVar1 = PlantGroup::Count(this_00), (int)lVar6 < iVar1; lVar6 = lVar6 + 1) {
          puVar2 = (undefined8 *)PlantGroup::Plants();
          pRVar3 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_04e29710(*puVar2,lVar6);
          pPVar4 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar3);
          CancelBufferPlant(this,pPVar4);
          pRVar3 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_04e29710(*puVar2,lVar6);
          this_01 = (ZombieAnimRig_DinoStealEgg *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar3);
          ZombieAnimRig_DinoStealEgg::SetHasEgg(this_01,false);
        }
      }
      plVar5 = (long *)Plant::GetAttachedEffectManager(*(Plant **)(this + 0x10));
      (**(code **)(*plVar5 + 0x48))();
    }
  }
  else {
    this[0x8c] = (PlantHoyaCordata)param_1;
    SetState(this,0xb);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHoyaCordata::StartLoopTupleSpell(Plant*) */

void __thiscall PlantHoyaCordata::StartLoopTupleSpell(PlantHoyaCordata *this,Plant *param_1)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  BoardTransforms *this_00;
  RtObject *this_01;
  PlantAnimRig_HoyaCordata *pPVar4;
  Plant *local_98 [4];
  TPoint<int> aTStack_78 [8];
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtId aRStack_60 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_98[0] = param_1;
  Plant::GetType();
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
  bVar1 = std::operator==((string *)(lVar3 + 8),"hoyacordata");
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
  if (((!bVar1) && (local_98[0] != (Plant *)0x0)) && (*(int *)(this + 0xa8) != 0xe)) {
    this_00 = (BoardTransforms *)
              std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)local_98[0]);
    BoardTransforms::BoardSpaceToGrid(this_00,*(float *)this_00,*(float *)(this_00 + 4));
    cVar2 = Sexy::TPoint<int>::operator==(aTStack_78,(TPoint *)(this + 0x38));
    if ((cVar2 != '\0') &&
       (cVar2 = FUN_04e296d0(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                               *)(local_98[0] + 0x250)), cVar2 != '\0')) {
      this_01 = (RtObject *)
                UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      pPVar4 = Sexy::RtObject::Cast<PlantAnimRig_HoyaCordata>(this_01);
      std::string::string(asStack_68,"attack02");
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
      std::string::string((string *)aRStack_58,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
                 aRStack_58);
      PlantAnimRig_HoyaCordata::playSingleAnimation(pPVar4,asStack_68,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string((string *)aRStack_58);
      nop();
      Sexy::RtId::~RtId(aRStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
      std::string::~string(asStack_68);
      nop();
      this[0x8d] = (PlantHoyaCordata)0x1;
      std::vector<Plant*,std::allocator<Plant*>>::push_back
                ((vector<Plant*,std::allocator<Plant*>> *)(this + 0x90),local_98);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

