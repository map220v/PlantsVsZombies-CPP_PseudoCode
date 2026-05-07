// Class: PlantFumeshroom


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFumeshroom::StaticClassInit() */

void PlantFumeshroom::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantFumeshroom");
    (*pcVar2)(plVar1,asStack_10,FUN_041fd484,0x70,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantFumeshroom::StaticGetClass() */

long * PlantFumeshroom::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantFumeshroom",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantFumeshroom::GetClass() const */

long * PlantFumeshroom::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantFumeshroom",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFumeshroom::OnAnimCommand(std::string const&, std::string const&) */

void PlantFumeshroom::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  char cVar2;
  code *pcVar3;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1[0x50] != (string)0x0) {
    PlantFramework::OnAnimCommand(param_1,param_2);
    return;
  }
  bVar1 = std::operator==(param_2,"use_action");
  cVar2 = bVar1;
  if (bVar1) {
    cVar2 = (**(code **)(*(long *)param_1 + 0x180))(param_1);
    if (cVar2 == '\0') {
      pcVar3 = *(code **)(*(long *)param_1 + 0xb0);
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                (a_Stack_10);
      (*pcVar3)(param_1,a_Stack_10,*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x110),0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
      cVar2 = bVar1;
    }
    else {
      pcVar3 = *(code **)(*(long *)param_1 + 0xb0);
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                (a_Stack_10);
      (*pcVar3)(param_1,a_Stack_10,*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x110),1);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(cVar2);
  }
  return;
}


/* PlantFumeshroom::Idle() */

void __thiscall PlantFumeshroom::Idle(PlantFumeshroom *this)

{
  long *plVar1;
  
  plVar1 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  (**(code **)(*plVar1 + 0x118))();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFumeshroom::playZombieHitEffect(Zombie*, Sexy::SexyVector3) */

void PlantFumeshroom::playZombieHitEffect
               (undefined4 param_1_00,undefined4 param_2,undefined4 param_3,long param_1,
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *param_5)

{
  float *pfVar1;
  Effect_PopAnim *this;
  ResourceInfo *pRVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  float local_30;
  float local_2c;
  string asStack_28 [16];
  undefined4 local_18;
  float local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_50 = param_1_00;
  local_4c = param_2;
  local_48 = param_3;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo((ResistenceValueInfo *)&local_30)
  ;
  pfVar1 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(param_5);
  fVar4 = *pfVar1;
  fVar3 = (pfVar1[1] + local_2c) - pfVar1[2];
  this = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_28,"POPANIM_EFFECTS_FUMESHROOM_BUBBLES_HIT");
  GetPAMByName(asStack_28);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_18);
  Effect_PopAnim::CreatePopAnimRig(this,(PopAnim *)pRVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  std::string::~string(asStack_28);
  nop();
  Effect_PopAnim::SetCentered(this,true);
  uVar5 = 0;
  EATextSquish::Vec3::Vec3((Vec3 *)asStack_28,fVar4 + local_30,fVar3,0.0);
  local_18 = Sexy::SexyVector3::operator+((SexyVector3 *)asStack_28,(SexyVector3 *)&local_50);
  local_14 = fVar3;
  local_10 = uVar5;
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)&local_18,-1);
  uVar5 = Board::MakeRenderOrder(0x64961,*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x110),0);
  FUN_041fc7f4(this + 0x1c,uVar5);
  std::string::string((string *)&local_18,"animation");
  Effect_PopAnim::PlaySingleAnimation(this,(RtWeakPtr *)&local_18,2);
  std::string::~string((string *)&local_18);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantFumeshroom::PlantFumeshroom() */

void __thiscall PlantFumeshroom::PlantFumeshroom(PlantFumeshroom *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_068083b0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  ZombossSkyCityLineShoot::ZombossSkyCityLineShoot((ZombossSkyCityLineShoot *)(this + 0x54));
  return;
}


/* PlantFumeshroom::StaticNew() */

PlantFumeshroom * PlantFumeshroom::StaticNew(void)

{
  PlantFumeshroom *this;
  
  this = ::operator_new(0x70);
  PlantFumeshroom(this);
  return this;
}


/* PlantFumeshroom::pushZombieAway(Zombie*) */

void __thiscall PlantFumeshroom::pushZombieAway(PlantFumeshroom *this,Zombie *param_1)

{
  int iVar1;
  float *pfVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)param_1);
  fVar5 = *pfVar2;
  iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
  if ((200.0 < fVar5) && (fVar4 = (float)(iVar1 * 9 + 200), fVar5 <= fVar4)) {
    lVar3 = FUN_041fd114(*(undefined8 *)(this + 0x10));
    Zombie::Nudge(param_1,fVar4,*(float *)(lVar3 + 0x2b8),true);
    return;
  }
  return;
}


/* PlantFumeshroom::Initialize() */

void __thiscall PlantFumeshroom::Initialize(PlantFumeshroom *this)

{
  long lVar1;
  undefined8 uVar2;
  
  PlantFramework::Initialize((PlantFramework *)this);
  this[0x34] = (PlantFumeshroom)0x0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::clear
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x38));
  this[0x50] = (PlantFumeshroom)0x0;
  if (*(long *)(gLawnApp + 0x9f0) != 0) {
    uVar2 = *(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8);
    lVar1 = FUN_041fc800(uVar2);
    if ((lVar1 != 0) && (lVar1 = FUN_041fd094(uVar2), lVar1 != 0)) {
      this[0x50] = (PlantFumeshroom)0x1;
    }
  }
  return;
}


/* PlantFumeshroom::~PlantFumeshroom() */

void __thiscall PlantFumeshroom::~PlantFumeshroom(PlantFumeshroom *this)

{
  *(undefined ***)this = &PTR_GetClass_068083b0;
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x38));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantFumeshroom::~PlantFumeshroom() */

void __thiscall PlantFumeshroom::~PlantFumeshroom(PlantFumeshroom *this)

{
  ~PlantFumeshroom(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFumeshroom::damageZombies(PlantWeapon, DamageInfo, bool) */

void __thiscall
PlantFumeshroom::damageZombies(PlantFumeshroom *this,int param_2,long param_3,char param_4)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  Zombie *this_00;
  ulong uVar7;
  PlantFumeshroomSubSystem *this_01;
  GridItem *pGVar8;
  code *pcVar9;
  long lVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  lVar10 = *(long *)this;
  pcVar9 = *(code **)(lVar10 + 400);
  local_8 = ___stack_chk_guard;
  if (pcVar9 == PlantFramework::GetCollisionFlags) {
    uVar3 = PlantFramework::GetCollisionFlags();
    pcVar9 = *(code **)(lVar10 + 0x198);
  }
  else {
    uVar3 = (*pcVar9)();
    pcVar9 = *(code **)(*(long *)this + 0x198);
  }
  if (pcVar9 == PlantFramework::GetDamageFlags) {
    uVar5 = PlantFramework::GetDamageFlags();
  }
  else {
    uVar5 = (*pcVar9)(this,param_2);
  }
  operator|=(param_3 + 0x10,uVar5);
  uVar11 = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  uVar4 = operator|(4,2);
  (**(code **)(*(long *)this + 0x2b8))((Vec3 *)&local_30,this,param_2);
  EntityFinder::GetEntitiesTouchingRectangle
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,uVar4,
             (Vec3 *)&local_30,*(undefined4 *)(*(long *)(this + 0x10) + 0x110),
             *(undefined4 *)(*(long *)(this + 0x10) + 0x110));
  uVar5 = local_20;
  lVar10 = FUN_041fc86c(local_20,local_18);
  if (lVar10 != 0) {
    do {
      puVar6 = (undefined8 *)FUN_041fc878(uVar5,uVar11);
      this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar6);
      if (this_00 == (Zombie *)0x0) {
        puVar6 = (undefined8 *)FUN_041fc878(local_20,uVar11);
        pGVar8 = Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar6);
        cVar1 = (**(code **)(*(long *)pGVar8 + 0x200))();
        if (cVar1 == '\0') goto LAB_041fe4b8;
LAB_041fe63c:
        puVar6 = (undefined8 *)FUN_041fc878(local_20,uVar11);
        (**(code **)(*(long *)*puVar6 + 0x110))((long *)*puVar6,param_3);
      }
      else {
        cVar1 = RealObject::IsOnOpposingTeam((RealObject *)this_00,*(RealObject **)(this + 0x10));
        if ((((cVar1 != '\0') &&
             (cVar1 = (**(code **)(*(long *)this_00 + 0x328))(this_00), cVar1 == '\0')) &&
            (cVar1 = Zombie::IsIgnoringAllDamage(this_00), cVar1 == '\0')) &&
           (cVar1 = (**(code **)(*(long *)this_00 + 0xb8))(this_00,uVar3), cVar1 != '\0')) {
          if (param_2 == 1) {
            cVar1 = Zombie::CanBeLaunchedByPlants(this_00);
            if (((cVar1 != '\0') && (cVar1 = Zombie::IsControlled(this_00), cVar1 == '\0')) &&
               (cVar1 = LawnApp::IsInModule(gLawnApp,4), cVar1 == '\0')) {
              pushZombieAway(this,this_00);
            }
            if ((*(float *)(this + 0x2c) == 0.0) ||
               (fVar12 = (float)PVZ_T(), *(float *)(this + 0x2c) < fVar12)) {
              fVar12 = (float)PVZ_T();
              fVar13 = (float)PlantFramework::Rand((PlantFramework *)this,0.5);
              *(float *)(this + 0x2c) = fVar12 + fVar13 + 1.5;
              goto LAB_041fe56c;
            }
          }
          else {
LAB_041fe56c:
            EATextSquish::Vec3::Vec3((Vec3 *)&local_30,-10.0,-40.0,0.0);
            playZombieHitEffect(local_30,local_2c,local_28,this,this_00);
          }
          if (param_4 != '\0') {
            bVar2 = Sexy::RtObject::IsA<Zomboss>((RtObject *)this_00);
            if ((((bVar2) ||
                 (bVar2 = Sexy::RtObject::IsA<ZombieZombossMech>((RtObject *)this_00), bVar2)) ||
                (cVar1 = (**(code **)(*(long *)this_00 + 0x4d8))(this_00), cVar1 != '\0')) ||
               (cVar1 = (**(code **)(*(long *)this_00 + 0x508))(this_00), cVar1 != '\0'))
            goto LAB_041fe4b8;
            this_01 = Board::GetGameSubSystem<PlantFumeshroomSubSystem>
                                (*(Board **)(gLawnApp + 0x9f0));
            fVar12 = (float)Plant::GetZombieConditionExtendRate(*(Plant **)(this + 0x10),0x18);
            PlantFumeshroomSubSystem::CauseZombieStun(this_01,this_00,fVar12);
          }
          goto LAB_041fe63c;
        }
      }
LAB_041fe4b8:
      uVar5 = local_20;
      uVar11 = uVar11 + 1;
      uVar7 = FUN_041fc86c(local_20,local_18);
    } while (uVar11 < uVar7);
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
/* PlantFumeshroom::CancelPlantfood() */

void __thiscall PlantFumeshroom::CancelPlantfood(PlantFumeshroom *this)

{
  long lVar1;
  float *pfVar2;
  float local_cc;
  DamageInfo aDStack_c8 [8];
  float local_c0;
  undefined1 auStack_b8 [80];
  float local_68 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  if (this[0x50] == (PlantFumeshroom)0x0) {
    Plant::GetProps();
    lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_68);
    FUN_041fc848(*(undefined8 *)(lVar1 + 0x70),1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_68);
    Plant::calcDamageInfoFromPlantAction(*(PlantAction **)(this + 0x10));
    if (*(float *)(this + 0x28) < local_c0) {
      local_68[0] = local_c0 - *(float *)(this + 0x28);
      local_cc = 0.0;
      pfVar2 = eastl::max_alt<float>(&local_cc,local_68);
      local_c0 = *pfVar2;
      operator|=(auStack_b8,0x2000);
      DamageInfo::DamageInfo((DamageInfo *)local_68,aDStack_c8);
      damageZombies(this,1,(RtWeakPtr<Sexy::ResourceInfo> *)local_68,0);
      DamageInfo::~DamageInfo((DamageInfo *)local_68);
    }
    this[0x34] = (PlantFumeshroom)0x0;
    *(undefined4 *)(this + 0x28) = 0;
    DamageInfo::~DamageInfo(aDStack_c8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFumeshroom::UpdatePlantfood() */

void __thiscall PlantFumeshroom::UpdatePlantfood(PlantFumeshroom *this)

{
  long lVar1;
  PlantAction *pPVar2;
  float *pfVar3;
  Plant *pPVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_cc;
  DamageInfo aDStack_c8 [8];
  float local_c0;
  undefined1 auStack_b8 [80];
  float local_68 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x50] == (PlantFumeshroom)0x0) {
    if (this[0x34] != (PlantFumeshroom)0x0) {
      Plant::GetProps();
      lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_68);
      FUN_041fc848(*(undefined8 *)(lVar1 + 0x70),1);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_68);
      Plant::calcDamageInfoFromPlantAction(*(PlantAction **)(this + 0x10));
      operator|=(auStack_b8,0x2000);
      fVar6 = local_c0;
      if (*(float *)(this + 0x28) < local_c0) {
        fVar5 = (float)PVZ_Dt();
        fVar7 = *(float *)(this + 0x28);
        fVar6 = (fVar5 / *(float *)(this + 0x30)) * fVar6;
        if (local_c0 < fVar6 + fVar7) {
          local_68[0] = local_c0 - fVar7;
          local_cc = 0.0;
          pfVar3 = eastl::max_alt<float>(&local_cc,local_68);
          fVar6 = *pfVar3;
        }
        if (0.0 < fVar6) {
          *(float *)(this + 0x28) = fVar6 + fVar7;
          local_c0 = fVar6;
          DamageInfo::DamageInfo((DamageInfo *)local_68,aDStack_c8);
          damageZombies(this,1,(RtWeakPtr<Sexy::ResourceInfo> *)local_68,0);
          DamageInfo::~DamageInfo((DamageInfo *)local_68);
        }
      }
      DamageInfo::~DamageInfo(aDStack_c8);
    }
  }
  else {
    pfVar3 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                      **)(this + 0x10));
    EATextSquish::Vec3::Vec3((Vec3 *)local_68,*pfVar3,pfVar3[1],pfVar3[2]);
    pPVar4 = *(Plant **)(this + 0x10);
    fVar6 = *(float *)(pPVar4 + 0xc4);
    Plant::GetProps();
    lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aDStack_c8);
    pPVar2 = (PlantAction *)FUN_041fc848(*(undefined8 *)(lVar1 + 0x70),2);
    PeashooterPlantfood::Update
              ((PeashooterPlantfood *)(this + 0x54),pPVar4,(SexyVector3 *)local_68,fVar6,pPVar2);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aDStack_c8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFumeshroom::damageZombies(PlantWeapon, bool) */

void __thiscall
PlantFumeshroom::damageZombies(PlantFumeshroom *this,undefined4 param_2,undefined1 param_3)

{
  long lVar1;
  DamageInfo aDStack_c8 [96];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Plant::GetProps();
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
  FUN_041fc848(*(undefined8 *)(lVar1 + 0x70),param_2);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
  Plant::calcDamageInfoFromPlantAction(*(PlantAction **)(this + 0x10));
  DamageInfo::DamageInfo((DamageInfo *)aRStack_68,aDStack_c8);
  damageZombies(this,param_2,aRStack_68,param_3);
  DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
  DamageInfo::~DamageInfo(aDStack_c8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFumeshroom::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void __thiscall
PlantFumeshroom::Fire(PlantFumeshroom *this,RtWeakPtrBase *param_2,undefined8 param_3,ulong param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar5;
  float *pfVar6;
  ulong uVar7;
  RtMixedPtrBase *this_01;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar8;
  long *plVar9;
  Zombie *this_02;
  undefined8 uVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  string asStack_20 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x50] != (PlantFumeshroom)0x0) {
    *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 2;
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,param_2);
    lVar4 = PlantFramework::Fire((PlantFramework *)this,aRStack_18,param_3,param_4);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    FUN_041fc8f8(lVar4 + 0x184);
    goto LAB_041feb8c;
  }
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_20,"POPANIM_EFFECTS_FUMESHROOM_BUBBLES");
  GetPAMByName(asStack_20);
  pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar5,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  std::string::~string(asStack_20);
  nop();
  uVar2 = Board::MakeRenderOrder(0x64960,*(undefined4 *)(*(long *)(this + 0x10) + 0x110),0);
  FUN_041fc7f4(this_00 + 0x1c,uVar2);
  Plant::GetProps();
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  lVar4 = FUN_041fc848(*(undefined8 *)(lVar4 + 0x70),param_4 & 0xffffffff);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if ((int)param_4 == 0) {
    iVar3 = FUN_041fc808(*(undefined8 *)(this + 0x10));
    if (iVar3 < 2) {
LAB_041fed18:
      std::string::string((string *)aRStack_18,"special");
      Effect_PopAnim::PlaySingleAnimation(this_00,(RtWeakPtr *)aRStack_18,0);
      std::string::~string((string *)aRStack_18);
      nop();
      uVar10 = 0;
    }
    else {
      fVar12 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
      iVar3 = FUN_041fc808(*(undefined8 *)(this + 0x10));
      if (iVar3 < 3) {
        if (0.1 <= fVar12) goto LAB_041fed18;
      }
      else if (0.2 <= fVar12) goto LAB_041fed18;
      std::string::string((string *)aRStack_18,"special2");
      Effect_PopAnim::PlaySingleAnimation(this_00,(RtWeakPtr *)aRStack_18,0);
      std::string::~string((string *)aRStack_18);
      nop();
      uVar10 = 1;
    }
    damageZombies(this,0,uVar10);
  }
  else {
    std::string::string((string *)aRStack_18,"plantfood");
    Effect_PopAnim::PlaySingleAnimation(this_00,(RtWeakPtr *)aRStack_18,0);
    std::string::~string((string *)aRStack_18);
    nop();
    this[0x34] = (PlantFumeshroom)0x1;
    fVar13 = *(float *)(*(long *)(this + 0x10) + 0x130);
    fVar12 = (float)PVZ_T();
    *(float *)(this + 0x30) = fVar13 - fVar12;
    cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
    if (cVar1 != '\0') {
      uVar11 = 0;
      while( true ) {
        uVar10 = *(undefined8 *)(this + 0x38);
        uVar7 = FUN_041fc858(uVar10,*(undefined8 *)(this + 0x40));
        if (uVar7 <= uVar11) break;
        this_01 = (RtMixedPtrBase *)FUN_041fc864(uVar10,uVar11);
        cVar1 = Sexy::RtMixedPtrBase::IsValid(this_01);
        if (cVar1 == '\0') {
LAB_041fee38:
          uVar11 = uVar11 + 1;
        }
        else {
          pRVar8 = (RtWeakPtr<Sexy::ResourceInfo> *)
                   FUN_041fc864(*(undefined8 *)(this + 0x38),uVar11);
          plVar9 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar8);
          cVar1 = (**(code **)(*plVar9 + 0x328))();
          if (cVar1 != '\0') goto LAB_041fee38;
          pRVar8 = (RtWeakPtr<Sexy::ResourceInfo> *)
                   FUN_041fc864(*(undefined8 *)(this + 0x38),uVar11);
          this_02 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar8);
          Zombie::ResetTargetPostion(this_02);
          uVar11 = uVar11 + 1;
        }
      }
      std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::clear
                ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
                 (this + 0x38));
    }
  }
  pfVar6 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    **)(this + 0x10));
  EATextSquish::Vec3::Vec3
            ((Vec3 *)aRStack_18,*(float *)(lVar4 + 0x68) + *pfVar6,
             *(float *)(lVar4 + 0x6c) + pfVar6[1],pfVar6[2]);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)aRStack_18,-1);
  lVar4 = 0;
LAB_041feb8c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFumeshroom::AbsorbZombieAtGrid(int, int) */

void __thiscall PlantFumeshroom::AbsorbZombieAtGrid(PlantFumeshroom *this,int param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined8 *puVar4;
  Zombie *this_00;
  ulong uVar5;
  float *pfVar6;
  ulong uVar7;
  undefined8 uVar8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  Insets aIStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::clear
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x38));
  if (*(code **)(*(long *)this + 400) != PlantFramework::GetCollisionFlags) {
    (**(code **)(*(long *)this + 400))(this,0);
  }
  uVar7 = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  Sexy::Insets::Insets(aIStack_30,param_1,param_2 + -1,2,3);
  EntityFinder::GetEntitiesInGridSquares
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,2,aIStack_30
            );
  uVar8 = local_20;
  lVar3 = FUN_041fc86c(local_20,local_18);
  if (lVar3 != 0) {
    do {
      puVar4 = (undefined8 *)FUN_041fc878(uVar8,uVar7);
      this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar4);
      cVar1 = (**(code **)(*(long *)this_00 + 0x328))();
      if ((((((cVar1 == '\0') &&
             (cVar1 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar1 == '\0')) &&
            (cVar1 = Zombie::IsControlled(this_00), cVar1 == '\0')) &&
           ((cVar1 = RealObject::IsOnOpposingTeam
                               ((RealObject *)this_00,*(RealObject **)(this + 0x10)), cVar1 != '\0'
            && (cVar1 = Zombie::CanBeLaunchedByPlants(this_00), cVar1 != '\0')))) &&
          ((bVar2 = Sexy::RtObject::IsA<Zomboss>((RtObject *)this_00), !bVar2 &&
           ((bVar2 = Sexy::RtObject::IsA<ZombieZombossMech>((RtObject *)this_00), !bVar2 &&
            (cVar1 = (**(code **)(*(long *)this_00 + 0x4d8))(this_00), cVar1 == '\0')))))) &&
         (cVar1 = (**(code **)(*(long *)this_00 + 0x508))(this_00), cVar1 == '\0')) {
        pfVar6 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                          **)(this + 0x10));
        EATextSquish::Vec3::Vec3
                  ((Vec3 *)aIStack_30,(float)(int)(*pfVar6 + 28.0),(float)(int)pfVar6[1],0.0);
        Zombie::SetTargetPosition(this_00,(SexyVector3 *)aIStack_30);
        FUN_041fc8e8(this_00 + 0x360);
        (**(code **)(*(long *)this_00 + 0x298))(0x40000000,this_00);
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_40);
        std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
                  ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
                   (this + 0x38),(RtWeakPtr *)aRStack_38);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
      }
      uVar8 = local_20;
      uVar7 = uVar7 + 1;
      uVar5 = FUN_041fc86c(local_20,local_18);
    } while (uVar7 < uVar5);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PlantFumeshroom::ApplyPlantfood() */

void __thiscall PlantFumeshroom::ApplyPlantfood(PlantFumeshroom *this)

{
  char cVar1;
  
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  if (this[0x50] != (PlantFumeshroom)0x0) {
    ZombossSkyCityLineShoot::Start((ZombossSkyCityLineShoot *)(this + 0x54),4.0,0x3c,1.0);
    return;
  }
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  if (cVar1 == '\0') {
    return;
  }
  AbsorbZombieAtGrid(this,*(int *)(*(long *)(this + 0x10) + 0x114) + 1,
                     *(int *)(*(long *)(this + 0x10) + 0x110));
  return;
}

