// Class: PlantMonotropa


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMonotropa::CreateProjectileEffectByBoardSpace(std::string, std::string, Sexy::SexyVector3,
   int) */

void PlantMonotropa::CreateProjectileEffectByBoardSpace
               (float param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
               string *param_5,undefined8 param_6,int param_7)

{
  Effect_PopAnim *this;
  ResourceInfo *pRVar1;
  float local_20;
  undefined4 local_1c;
  undefined4 local_18;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_20 = param_1;
  local_1c = param_2;
  local_18 = param_3;
  this = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  GetPAMByName(param_5);
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
  Effect_PopAnim::CreatePopAnimRig(this,(PopAnim *)pRVar1,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) != '\0') {
    local_18 = Board::calculateRoofOffsetZ(local_20);
  }
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)&local_20,param_7);
  Effect_PopAnim::PlaySingleAnimation(this,param_6,0);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this);
  }
  return;
}


/* PlantMonotropa::CanApplyPlantfood() */

void __thiscall PlantMonotropa::CanApplyPlantfood(PlantMonotropa *this)

{
  FUN_04cba1c0(*(undefined4 *)(this + 0x38),*(undefined4 *)(this + 0x3c));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMonotropa::StaticClassInit() */

void PlantMonotropa::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantMonotropa");
    (*pcVar2)(plVar1,asStack_10,FUN_04cbcfd4,0xb8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantMonotropa::StaticGetClass() */

long * PlantMonotropa::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantMonotropa",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantMonotropa::GetClass() const */

long * PlantMonotropa::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantMonotropa",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantMonotropa::InitParamByCurrentLevel(PlantMonotropaProps const*) */

void __thiscall
PlantMonotropa::InitParamByCurrentLevel(PlantMonotropa *this,PlantMonotropaProps *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  float fVar5;
  
  if (param_1 != (PlantMonotropaProps *)0x0) {
    fVar5 = *(float *)(param_1 + 0x2c4);
    uVar1 = *(undefined4 *)(param_1 + 0x2b8);
    *(float *)(this + 0x7c) = fVar5;
    *(undefined4 *)(this + 0x78) = uVar1;
    Sexy::OutputDebugStrF((wchar_t *)"delta cool down time = %f",(double)fVar5);
    iVar2 = *(int *)(param_1 + 0x2d4);
    uVar1 = *(undefined4 *)(param_1 + 0x2c8);
    uVar3 = *(undefined4 *)(param_1 + 0x2d0);
    *(undefined4 *)(this + 0x84) = *(undefined4 *)(param_1 + 0x2cc);
    *(undefined4 *)(this + 0x88) = uVar3;
    *(int *)(this + 0x8c) = iVar2;
    *(undefined4 *)(this + 0x80) = uVar1;
    iVar4 = FUN_04cba198(*(undefined8 *)(this + 0x10));
    if (iVar4 == 1) {
      *(float *)(this + 0x78) = *(float *)(this + 0x78) - *(float *)(param_1 + 700);
      return;
    }
    if (iVar4 == 2) {
      *(float *)(this + 0x78) =
           *(float *)(this + 0x78) - *(float *)(param_1 + 700) * *(float *)(param_1 + 0x2c0);
    }
    else if (iVar4 < 2) {
      return;
    }
    *(int *)(this + 0x8c) = iVar2 + 2;
  }
  return;
}


/* PlantMonotropa::UpdateCooldown() */

void __thiscall PlantMonotropa::UpdateCooldown(PlantMonotropa *this)

{
  char cVar1;
  
  cVar1 = TimeUtil::CheckTimeEclapse(*(float *)(this + 0x7c),*(float *)(this + 0x74));
  if (cVar1 == '\0') {
    return;
  }
  *(undefined4 *)(*(long *)(this + 0x10) + 200) = 10;
  Sexy::OutputDebugStrF((wchar_t *)"m_plant->m_state = Monotropa_idle");
  return;
}


/* PlantMonotropa::LaunchSpecialAttack() */

void __thiscall PlantMonotropa::LaunchSpecialAttack(PlantMonotropa *this)

{
  *(undefined4 *)(*(long *)(this + 0x10) + 200) = 0xe;
  Sexy::OutputDebugStrF((wchar_t *)"m_plant->m_state = Monotropa_SpecialAttack");
  return;
}


/* PlantMonotropa::ApplyPlantfood() */

void __thiscall PlantMonotropa::ApplyPlantfood(PlantMonotropa *this)

{
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  LaunchSpecialAttack(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMonotropa::GetPlantAttackRect(PlantWeapon) */

void __thiscall PlantMonotropa::GetPlantAttackRect(Insets *param_1,PlantMonotropa *this)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_c = BoardConstants::NUMBER_OF_COLUMNS();
  lVar3 = *(long *)(this + 0x10);
  iVar1 = *(int *)(lVar3 + 0x114);
  local_c = local_c - iVar1;
  piVar2 = eastl::min_alt<int>(&local_c,(int *)(this + 0x8c));
  Sexy::Insets::Insets(param_1,iVar1,*(int *)(lVar3 + 0x110),*piVar2,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMonotropa::CreateProjectileEffectByScreenSpace(std::string, std::string, Sexy::SexyVector2,
   int) */

void PlantMonotropa::CreateProjectileEffectByScreenSpace
               (undefined4 param_1,undefined4 param_2,undefined8 param_3,string *param_4,
               undefined8 param_5,int param_6)

{
  Effect_PopAnim *this;
  ResourceInfo *pRVar1;
  undefined8 local_18;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_18 = CONCAT44(param_2,param_1);
  local_8 = ___stack_chk_guard;
  this = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  GetPAMByName(param_4);
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
  Effect_PopAnim::CreatePopAnimRig(this,(PopAnim *)pRVar1,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  StandaloneEffect::SetScreenSpaceOrigin((StandaloneEffect *)this,(SexyVector2 *)&local_18,param_6);
  Effect_PopAnim::PlaySingleAnimation(this,param_5,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMonotropa::FireProjectile() */

void __thiscall PlantMonotropa::FireProjectile(PlantMonotropa *this)

{
  int iVar1;
  float *pfVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  string asStack_48 [8];
  string asStack_40 [8];
  Vec3 aVStack_38 [16];
  Vec3 aVStack_28 [16];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    **)(this + 0x10));
  EATextSquish::Vec3::Vec3(aVStack_38,*pfVar2,pfVar2[1],0.0);
  uVar3 = 0xc2dc0000;
  uVar4 = 0;
  EATextSquish::Vec3::Vec3(aVStack_28,0.0,-110.0,0.0);
  std::string::string(asStack_48,"POPANIM_EFFECTS_MONOTROPA_PROJECTILE");
  std::string::string(asStack_40,"ice_wind");
  local_18 = Sexy::SexyVector3::operator+((SexyVector3 *)aVStack_38,(SexyVector3 *)aVStack_28);
  local_14 = uVar3;
  local_10 = uVar4;
  iVar1 = (**(code **)(*(long *)this + 0x88))(this);
  CreateProjectileEffectByBoardSpace
            (local_18,local_14,local_10,this,asStack_48,asStack_40,iVar1 + 1);
  std::string::~string(asStack_40);
  nop();
  std::string::~string(asStack_48);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMonotropa::OnAttackEndAnim(std::string const&) */

void PlantMonotropa::OnAttackEndAnim(string *param_1)

{
  long lVar1;
  PopAnimRig *pPVar2;
  undefined4 uVar3;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  *(undefined4 *)(*(long *)(param_1 + 0x10) + 200) = 0xd;
  local_8 = ___stack_chk_guard;
  Sexy::OutputDebugStrF((wchar_t *)"OnAttackEndAnim m_plant->m_state = Monotropa_Cooldown");
  pPVar2 = (PopAnimRig *)
           UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(param_1 + 0x10));
  std::string::string(asStack_58,"monotropa_cooldown");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)param_1,(_func_void *)0x398);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<PlantMonotropa,void(PlantMonotropa::*)(std::string_const&)>(aDStack_38,aCStack_50);
  PopAnimRig::PlayAndStop(pPVar2,asStack_58,0,aDStack_38);
  std::string::~string(asStack_58);
  nop();
  uVar3 = PVZ_T();
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(param_1 + 0x74) = uVar3;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantMonotropa::CheckZombieCanBeSnowman(Sexy::RtWeakPtr<Zombie>) */

bool __thiscall PlantMonotropa::CheckZombieCanBeSnowman(undefined8 param_1,RtMixedPtrBase *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  Zombie *pZVar6;
  RtObject *pRVar7;
  ZombieSwashbuckler *this;
  undefined8 uVar8;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  SexyVector3 *pSVar9;
  string *psVar10;
  Board *this_01;
  float fVar11;
  
  cVar1 = Sexy::RtMixedPtrBase::IsValid(param_2);
  if (cVar1 != '\0') {
    plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    cVar1 = (**(code **)(*plVar4 + 0x328))();
    if (cVar1 == '\0') {
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
      cVar1 = (**(code **)(*plVar4 + 0x330))();
      if (cVar1 == '\0') {
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
        fVar11 = (float)FUN_04cba1dc(*(undefined4 *)(lVar5 + 0x280));
        if (0.0 < fVar11) {
          pZVar6 = (Zombie *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
          cVar1 = Zombie::IsInSandStorm(pZVar6);
          if (cVar1 == '\0') {
            pZVar6 = (Zombie *)
                     Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
            cVar1 = Zombie::IsRisingFromGround(pZVar6);
            if (cVar1 == '\0') {
              pRVar7 = (RtObject *)
                       Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
              this = Sexy::RtObject::Cast<ZombieSwashbuckler>(pRVar7);
              if (this != (ZombieSwashbuckler *)0x0) {
                if (*(code **)(*(long *)this + 0x338) == ZombieSwashbuckler::IsSwingingIn) {
                  cVar1 = ZombieSwashbuckler::IsSwingingIn(this);
                }
                else {
                  cVar1 = (**(code **)(*(long *)this + 0x338))();
                }
                if (cVar1 != '\0') {
                  return false;
                }
                cVar1 = FUN_04cba1e8(this[0x802]);
                if (cVar1 != '\0') {
                  return false;
                }
              }
              pZVar6 = (Zombie *)
                       Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
              cVar1 = Zombie::IsBoss(pZVar6);
              if (cVar1 == '\0') {
                plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                           ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
                cVar1 = (**(code **)(*plVar4 + 0x4d8))();
                if (cVar1 == '\0') {
                  plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                             ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
                  cVar1 = (**(code **)(*plVar4 + 0x508))();
                  if (cVar1 == '\0') {
                    pZVar6 = (Zombie *)
                             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                       ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
                    cVar1 = Zombie::HasFogImmune(pZVar6);
                    if (cVar1 == '\0') {
                      pZVar6 = (Zombie *)
                               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                         ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
                      cVar1 = Zombie::IsBerserk(pZVar6);
                      if (cVar1 == '\0') {
                        pZVar6 = (Zombie *)
                                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                           ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
                        iVar3 = Zombie::GetSizeType(pZVar6);
                        if (iVar3 != 2) {
                          pZVar6 = (Zombie *)
                                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                             ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
                          iVar3 = Zombie::GetSizeType(pZVar6);
                          if (iVar3 != 1) {
                            pZVar6 = (Zombie *)
                                     Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                               ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
                            cVar1 = Zombie::IsFlying(pZVar6);
                            if (cVar1 == '\0') {
                              pRVar7 = (RtObject *)
                                       Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                                 ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
                              bVar2 = Sexy::RtObject::IsA<ZombieMech>(pRVar7);
                              if (!bVar2) {
                                uVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                                  ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
                                cVar1 = Zombie::HasCondition(uVar8,0x18);
                                if (cVar1 == '\0') {
                                  this_01 = *(Board **)(gLawnApp + 0x9f0);
                                  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                             *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                                         ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
                                  pSVar9 = (SexyVector3 *)
                                           std::
                                           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                           ::_M_leftmost(this_00);
                                  cVar1 = Board::IsSky(this_01,pSVar9);
                                  if (cVar1 == '\0') {
                                    pZVar6 = (Zombie *)
                                             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                                       ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
                                    psVar10 = (string *)Zombie::GetTypeName(pZVar6);
                                    bVar2 = std::operator==(psVar10,"zombie_snowman");
                                    return !bVar2;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return false;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMonotropa::onAnimStoppedCallback(std::string const&) */

void __thiscall PlantMonotropa::onAnimStoppedCallback(PlantMonotropa *this,string *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  long *plVar3;
  code *pcVar4;
  undefined4 uVar5;
  string asStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = FUN_0547429c(param_1);
  Sexy::OutputDebugStrF((wchar_t *)"on anim stopped callback %s",uVar2);
  bVar1 = std::operator==(param_1,"attack1_on");
  if (bVar1) {
    Sexy::OutputDebugStrF((wchar_t *)"anim stop attack1_on");
    *(undefined4 *)(*(long *)(this + 0x10) + 200) = 0xd;
    uVar5 = PVZ_T();
    *(undefined4 *)(this + 0x74) = uVar5;
    plVar3 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    pcVar4 = *(code **)(*plVar3 + 0x78);
    std::string::string(asStack_28,"idle");
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    (*pcVar4)(plVar3,asStack_28,1,0,avStack_20);
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_20);
    std::string::~string(asStack_28);
    nop();
  }
  else {
    bVar1 = std::operator==(param_1,"attack1");
    if (bVar1) {
      Sexy::OutputDebugStrF((wchar_t *)"anim stop attack1");
    }
    else {
      bVar1 = std::operator==(param_1,"attack1_off");
      if (bVar1) {
        Sexy::OutputDebugStrF((wchar_t *)"anim stop attack1_off");
        plVar3 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
        pcVar4 = *(code **)(*plVar3 + 0x78);
        std::string::string(asStack_28,"idle");
        std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
        (*pcVar4)(plVar3,asStack_28,1,0,avStack_20);
        std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_20)
        ;
        std::string::~string(asStack_28);
        nop();
      }
      else {
        bVar1 = std::operator==(param_1,"plantfood_off");
        if ((bVar1) || (bVar1 = std::operator==(param_1,"plantfood1_off"), bVar1)) {
          uVar2 = FUN_0547429c(param_1);
          Sexy::OutputDebugStrF((wchar_t *)"anim stop %s",uVar2);
        }
      }
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PlantMonotropa::PlantMonotropa() */

void __thiscall PlantMonotropa::PlantMonotropa(PlantMonotropa *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_06999ff0;
  MonotropaFoodCounter::MonotropaFoodCounter((MonotropaFoodCounter *)(this + 0x28));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x98));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xb0));
  return;
}


/* PlantMonotropa::StaticNew() */

PlantMonotropa * PlantMonotropa::StaticNew(void)

{
  PlantMonotropa *this;
  
  this = ::operator_new(0xb8);
  PlantMonotropa(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMonotropa::ExecuteDamage(BoardEntity*, PlantWeapon) */

void __thiscall PlantMonotropa::ExecuteDamage(PlantMonotropa *this,long *param_1,undefined4 param_3)

{
  long lVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [16];
  undefined8 local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Plant::GetProps();
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
  FUN_04cba21c(*(undefined8 *)(lVar1 + 0x70),param_3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
  Plant::calcDamageInfoFromPlantAction(*(PlantAction **)(this + 0x10));
  local_58 = 0x1000000000000;
  (**(code **)(*param_1 + 0x110))(param_1,aRStack_68);
  DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantMonotropa::~PlantMonotropa() */

void __thiscall PlantMonotropa::~PlantMonotropa(PlantMonotropa *this)

{
  *(undefined ***)this = &PTR_GetClass_06999ff0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0));
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x98));
  MonotropaFoodCounter::~MonotropaFoodCounter((MonotropaFoodCounter *)(this + 0x28));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantMonotropa::~PlantMonotropa() */

void __thiscall PlantMonotropa::~PlantMonotropa(PlantMonotropa *this)

{
  ~PlantMonotropa(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMonotropa::CheckZombieIsSnowman(Sexy::RtWeakPtr<Zombie>) */

void __thiscall PlantMonotropa::CheckZombieIsSnowman(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)_snowmanZombieList);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)_snowmanZombieList);
  local_18 = std::
             find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<Zombie>*,std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>>,Sexy::RtWeakPtr<Zombie>>
                       (uVar2,uVar3,param_2);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)_snowmanZombieList);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMonotropa::Initialize() */

void __thiscall PlantMonotropa::Initialize(PlantMonotropa *this)

{
  long *plVar1;
  PlantMonotropaProps *pPVar2;
  PlantAnimRig_DevilsFlower *extraout_x0;
  UIEasyButtonWidget *this_00;
  code *pcVar3;
  undefined4 uVar4;
  string asStack_28 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  uVar4 = PVZ_EOT();
  *(undefined4 *)(this + 0x70) = uVar4;
  *(undefined4 *)(this + 0x74) = uVar4;
  *(undefined4 *)(this + 0x90) = 0;
  _isInFoodPlantStatus = 0;
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::clear
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x98));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_20);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0xb0),(RtWeakPtr *)a_Stack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_20);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_20);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)&_snowmanZombie,(RtWeakPtr *)a_Stack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_20);
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::clear
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             _snowmanZombieList);
  this_00 = *(UIEasyButtonWidget **)(this + 0x10);
  *(undefined4 *)(this_00 + 200) = 10;
  plVar1 = (long *)UIEasyButtonWidget::GetImageNormal(this_00);
  pcVar3 = *(code **)(*plVar1 + 0x78);
  std::string::string(asStack_28,"idle");
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)a_Stack_20);
  (*pcVar3)(plVar1,asStack_28,1,0,a_Stack_20);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)a_Stack_20);
  std::string::~string(asStack_28);
  nop();
  pPVar2 = (PlantMonotropaProps *)FUN_04cbc8e8(*(undefined8 *)(this + 0x10));
  InitParamByCurrentLevel(this,pPVar2);
  UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  nop();
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)a_Stack_20,(RtWeakPtrBase *)asStack_28);
  PlantAnimRig_DevilsFlower::SetPlantPtr(extraout_x0,a_Stack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMonotropa::RemoveUndamageableEntitiesFromList(std::vector<BoardEntity*,
   std::allocator<BoardEntity*> >&) */

void __thiscall
PlantMonotropa::RemoveUndamageableEntitiesFromList(PlantMonotropa *this,vector *param_1)

{
  bool bVar1;
  char cVar2;
  undefined8 *puVar3;
  Zombie *this_00;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)param_1);
  do {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)param_1);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    while( true ) {
      if (!bVar1) {
        if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
      puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18)
      ;
      if ((((RtObject *)*puVar3 == (RtObject *)0x0) ||
          (this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar3), this_00 == (Zombie *)0x0))
         || (((cVar2 = (**(code **)(*(long *)this_00 + 0x328))(), cVar2 == '\0' &&
              (((cVar2 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar2 == '\0' &&
                (cVar2 = Zombie::IsInvisible(this_00), cVar2 == '\0')) &&
               (cVar2 = Zombie::IsInWater(this_00), cVar2 == '\0')))) &&
             ((cVar2 = RealObject::IsOnTeam(this_00,1), cVar2 == '\0' &&
              (cVar2 = Zombie::DoesIgnoresCollisions(this_00), cVar2 == '\0')))))) break;
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
    }
    FUN_04cbc148((__normal_iterator *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMonotropa::FindEnemies(PlantWeapon) */

void PlantMonotropa::FindEnemies
               (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *param_1,
               PlantMonotropa *param_2,undefined8 param_3)

{
  undefined1 auStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(param_1);
  (**(code **)(*(long *)param_2 + 0x2b8))(auStack_18,param_2,param_3);
  EntityFinder::GetEntitiesInGridSquares(param_1,2,auStack_18);
  RemoveUndamageableEntitiesFromList(param_2,(vector *)param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMonotropa::UpdateIdle() */

void __thiscall PlantMonotropa::UpdateIdle(PlantMonotropa *this)

{
  char cVar1;
  long lVar2;
  PopAnimRig *pPVar3;
  RealObject *this_00;
  string asStack_70 [8];
  undefined8 local_68;
  undefined8 local_60;
  string asStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)this + 0x180))();
  if (cVar1 == '\0') {
    FindEnemies((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_68,this,0);
    lVar2 = FUN_04cba1f4(local_68,local_60);
    if (lVar2 == 0) {
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_68);
    }
    else {
      *(undefined4 *)(*(long *)(this + 0x10) + 200) = 0xc;
      Sexy::OutputDebugStrF((wchar_t *)"m_plant->m_state = Monotropa_Attack");
      pPVar3 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      std::string::string(asStack_70,"attack1_on");
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x398);
      Sexy::Delegate1<std::string_const&>::
      Delegate1<PlantMonotropa,void(PlantMonotropa::*)(std::string_const&)>(aDStack_38,asStack_50);
      PopAnimRig::PlayAndStop(pPVar3,asStack_70,0,aDStack_38);
      std::string::~string(asStack_70);
      nop();
      this_00 = *(RealObject **)(this + 0x10);
      std::string::string(asStack_50,"Play_Plant_Monotropa_Attack");
      RealObject::PlayPositionalSound(this_00,asStack_50,0.0);
      std::string::~string(asStack_50);
      nop();
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_68);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantMonotropa::UpdateBlizzard() */

void __thiscall PlantMonotropa::UpdateBlizzard(PlantMonotropa *this)

{
  char cVar1;
  
  cVar1 = FUN_04cba1c0(*(undefined4 *)(this + 0x38),*(undefined4 *)(this + 0x3c));
  if (cVar1 == '\0') {
    MonotropaFoodCounter::Update((MonotropaFoodCounter *)(this + 0x28));
    cVar1 = FUN_04cba1c0(*(undefined4 *)(this + 0x38),*(undefined4 *)(this + 0x3c));
    if (cVar1 == '\0') {
      return;
    }
  }
  *(undefined4 *)(*(long *)(this + 0x10) + 200) = 0x10;
  Sexy::OutputDebugStrF((wchar_t *)"m_plant->m_state = Monotropa_BlizzardHurtZombie");
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMonotropa::AddSnowman(Sexy::RtWeakPtr<Zombie>) */

void __thiscall PlantMonotropa::AddSnowman(PlantMonotropa *this,RtWeakPtr *param_2)

{
  char cVar1;
  int iVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  BoardTransforms *this_01;
  GridItemMonotropa *this_02;
  Board *this_03;
  int local_18;
  int local_14;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)&_snowmanZombie,param_2);
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             _snowmanZombieList,param_2);
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
  this_01 = (BoardTransforms *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost(this_00);
  BoardTransforms::BoardSpaceToGrid(this_01,*(float *)this_01,*(float *)(this_01 + 4));
  this_03 = *(Board **)(gLawnApp + 0x9f0);
  std::string::string(asStack_10,"monotropa_snowman");
  Board::AddGridItem(this_03,asStack_10,local_18,local_14,1);
  nop();
  std::string::~string(asStack_10);
  nop();
  if (this_02 != (GridItemMonotropa *)0x0) {
    cVar1 = FUN_04cba1a0(*(undefined8 *)(this + 0x10));
    if (cVar1 != '\0') {
      PlantPoisonPeashooterPlantFoodProjectile::onProjectileInitialized
                ((PlantPoisonPeashooterPlantFoodProjectile *)this_02);
    }
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)param_2);
    GridItemSunSeed::setBindZombie((GridItemSunSeed *)this_02,asStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    iVar2 = FUN_04cba198(*(undefined8 *)(this + 0x10));
    if (2 < iVar2) {
      GridItemMonotropa::SetThresholdRatio(this_02,1.5);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMonotropa::UpdateBlizzardHurtZombie() */

void __thiscall PlantMonotropa::UpdateBlizzardHurtZombie(PlantMonotropa *this)

{
  RtWeakPtr *this_00;
  char cVar1;
  int iVar2;
  RtWeakPtrBase *pRVar3;
  long extraout_x0;
  ResourceInfo *pRVar4;
  long *plVar5;
  long extraout_x0_00;
  undefined8 uVar6;
  long lVar7;
  code *pcVar8;
  undefined4 uVar9;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::OutputDebugStrF((wchar_t *)"blizzard hurt zombie");
  uVar6 = *(undefined8 *)(this + 0x98);
  iVar2 = FUN_04cba200(uVar6,*(undefined8 *)(this + 0xa0));
  if (0 < iVar2) {
    lVar7 = 0;
    do {
      pRVar3 = (RtWeakPtrBase *)FUN_04cba20c(uVar6,lVar7);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,pRVar3);
      cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_30);
      if (cVar1 == '\0') {
LAB_04cbe71c:
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
      }
      else {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
        nop();
        if (extraout_x0 == 0) goto LAB_04cbe71c;
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,(RtWeakPtrBase *)aRStack_20);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
        pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_28);
        ExecuteDamage(this,pRVar4,0);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_20,(RtWeakPtrBase *)aRStack_28);
        cVar1 = CheckZombieCanBeSnowman(this,aRStack_20);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
        if (cVar1 != '\0') {
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)aRStack_20,(RtWeakPtrBase *)aRStack_28);
          AddSnowman(this,aRStack_20);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
      }
      if (iVar2 <= (int)lVar7 + 1) break;
      lVar7 = lVar7 + 1;
      uVar6 = *(undefined8 *)(this + 0x98);
    } while( true );
  }
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  if (cVar1 != '\0') {
    this_00 = (RtWeakPtr *)(this + 0xb0);
    pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
    if (pRVar4 != (ResourceInfo *)0x0) {
      pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
      ExecuteDamage(this,pRVar4,0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      nop();
      if (extraout_x0_00 != 0) {
        Zombie::ApplyCondition((Zombie *)0x40000000,0);
      }
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aRStack_20);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)this_00,(RtWeakPtr *)aRStack_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    }
  }
  *(undefined4 *)(*(long *)(this + 0x10) + 200) = 0xd;
  _isInFoodPlantStatus = 0;
  Sexy::OutputDebugStrF((wchar_t *)"m_plant->m_state = Monotropa_Cooldown");
  uVar9 = PVZ_T();
  *(undefined4 *)(this + 0x74) = uVar9;
  plVar5 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  pcVar8 = *(code **)(*plVar5 + 0x78);
  std::string::string((string *)aRStack_28,"idle");
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aRStack_20);
  (*pcVar8)(plVar5,(string *)aRStack_28,1,0,
            (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aRStack_20);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)aRStack_20);
  std::string::~string((string *)aRStack_28);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantMonotropa::UpdateActions() */

void __thiscall PlantMonotropa::UpdateActions(PlantMonotropa *this)

{
  switch(*(undefined4 *)(*(long *)(this + 0x10) + 200)) {
  case 10:
    UpdateIdle(this);
    return;
  case 0xb:
    nop();
    return;
  case 0xc:
    nop();
    return;
  case 0xd:
    UpdateCooldown(this);
    return;
  case 0xe:
    nop();
    return;
  case 0xf:
    UpdateBlizzard(this);
    return;
  case 0x10:
    UpdateBlizzardHurtZombie(this);
    return;
  default:
    return;
  }
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMonotropa::DoAttack(PlantWeapon) */

void __thiscall PlantMonotropa::DoAttack(PlantMonotropa *this,undefined4 param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  RtWeakPtr<Sexy::SoundResource> aRStack_40 [8];
  undefined8 local_38;
  undefined8 local_30;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FindEnemies((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)&local_20);
  lVar3 = FUN_04cba1f4(local_20,local_18);
  if (lVar3 == 0) {
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  }
  else {
    FUN_04cba214(local_20,(long)((int)lVar3 + -1));
    nop();
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,(RtWeakPtrBase *)aRStack_28);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_28,(RtWeakPtrBase *)aRStack_40);
    cVar1 = CheckZombieCanBeSnowman(this,aRStack_28);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
    if (cVar1 == '\0') {
      local_38 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)&local_20);
      local_30 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_20);
      while (bVar2 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_38,(__normal_iterator *)&local_30),
            bVar2) {
        puVar4 = (undefined8 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
        ExecuteDamage(this,*puVar4,param_2);
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
      }
    }
    else {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_28,(RtWeakPtrBase *)aRStack_40);
      AddSnowman(this,aRStack_28);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
      local_38 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)&local_20);
      local_30 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_20);
      while (bVar2 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_38,(__normal_iterator *)&local_30),
            bVar2) {
        puVar4 = (undefined8 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
        uVar5 = *puVar4;
        ToolPacketData::GetProps();
        cVar1 = Sexy::RtWeakPtrBase::operator!=
                          ((RtWeakPtrBase *)aRStack_28,(RtWeakPtrBase *)aRStack_40);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
        if (cVar1 != '\0') {
          ExecuteDamage(this,uVar5,param_2);
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantMonotropa::OnAnimCommand(std::string const&, std::string const&) */

void PlantMonotropa::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_2,"spawn_projectile_on");
  if (bVar1) {
    FireProjectile((PlantMonotropa *)param_1);
    DoAttack((PlantMonotropa *)param_1,0);
    PlantFramework::OnAnimCommand(param_1,param_2);
    return;
  }
  bVar1 = std::operator==(param_2,"spawn_projectile_off");
  if (bVar1) {
    PlantFramework::OnAnimCommand(param_1,param_2);
    return;
  }
  std::operator==(param_2,"use_action");
  PlantFramework::OnAnimCommand(param_1,param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMonotropa::LaunchSpecialAttackReal() */

void __thiscall PlantMonotropa::LaunchSpecialAttackReal(PlantMonotropa *this)

{
  PlantDracaena *pPVar1;
  vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *this_00;
  RtWeakPtr<PowerPropertySheet> *this_01;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  RtWeakPtr *pRVar11;
  undefined *puVar12;
  long lVar13;
  float fVar14;
  MonotropaFoodCounter *pMVar15;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(*(long *)(this + 0x10) + 200) = 0xf;
  Sexy::OutputDebugStrF((wchar_t *)"m_plant->m_state = Monotropa_Blizzard");
  cVar2 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_50);
  Board::GetGridBoundingRect();
  EntityFinder::GetEntitiesTouchingRectangle
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_50,2,
             (Vec3 *)&local_20,0xffffffff,0xffffffff);
  RemoveUndamageableEntitiesFromList(this,(vector *)&local_50);
  lVar7 = FUN_04cba1f4(local_50,local_48);
  if (lVar7 != 0) {
    pPVar1 = (PlantDracaena *)(this + 0x28);
    this_00 = (vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
              (this + 0x98);
    uVar5 = FUN_04cba22c(*(undefined4 *)(this + 0x84),*(undefined4 *)(this + 0x88));
                    /* WARNING: Load size is inaccurate */
    pMVar15._0_4_ = *(MonotropaFoodCounter **)(this + 0x80);
    *(undefined4 *)(this + 0x90) = uVar5;
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_20,(RtWeakPtrBase *)&local_38);
    MonotropaFoodCounter::Start(pMVar15._0_4_,pPVar1,uVar5,(Vec3 *)&local_20,cVar2);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
    uVar9 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)&local_50);
    uVar10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)&local_50);
    std::
    random_shuffle<__gnu_cxx::__normal_iterator<Pinata**,std::vector<Pinata*,std::allocator<Pinata*>>>>
              (uVar9,uVar10);
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::clear
              (this_00);
    local_60 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_50);
    local_58 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_50);
    while (bVar3 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_60,(__normal_iterator *)&local_58), bVar3)
    {
      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_60);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_20,(RtWeakPtrBase *)&local_38);
      std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
      push_back(this_00,(RtWeakPtr *)&local_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_60);
    }
    if (cVar2 != '\0') {
      iVar4 = FUN_04cba200(*(undefined8 *)(this + 0x98),*(undefined8 *)(this + 0xa0));
      iVar4 = PlantFramework::Rand((PlantFramework *)this,iVar4);
      lVar13 = (long)iVar4;
      uVar9 = *(undefined8 *)(this + 0x98);
      lVar7 = FUN_04cba200(uVar9,*(undefined8 *)(this + 0xa0));
      if (lVar13 == lVar7) {
        Sexy::OutputDebugStrF((wchar_t *)"random index == randspecialtargets size");
        uVar9 = *(undefined8 *)(this + 0x98);
        lVar13 = (long)(iVar4 + -1);
      }
      this_01 = (RtWeakPtr<PowerPropertySheet> *)(this + 0xb0);
      pRVar11 = (RtWeakPtr *)FUN_04cba20c(uVar9,lVar13);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_01,pRVar11);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_20,(RtWeakPtrBase *)this_01);
      PlantDracaena::SetTargetZombie(pPVar1,(Vec3 *)&local_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
      uVar9 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)this_00);
      uVar10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)this_00);
      local_60 = std::
                 remove<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<BoardEntity>*,std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>,Sexy::RtWeakPtr<BoardEntity>>
                           (uVar9,uVar10,this_01);
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_38,(__normal_iterator *)&local_60);
      local_58 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)this_00);
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_20,(__normal_iterator *)&local_58);
      std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::erase
                (this_00,local_38,CONCAT44(uStack_1c,local_20));
    }
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38);
    uVar9 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)this_00);
    uVar10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)this_00);
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
    assign<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<BoardEntity>*,std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>,void>
              ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
               &local_38,uVar9,uVar10);
    uVar9 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)&local_38);
    local_58 = uVar9;
    uVar6 = FUN_04cba200(local_38,local_30);
    Sexy::OutputDebugStrF((wchar_t *)"randomVec.size() = %d",(ulong)uVar6);
    if (5 < (int)uVar6) {
      uVar6 = FUN_04cba22c(5,uVar6);
      __gnu_cxx::
      __normal_iterator<Sexy::MetricsManager::Report**,std::vector<Sexy::MetricsManager::Report*,std::allocator<Sexy::MetricsManager::Report*>>>
      ::operator+=((__normal_iterator<Sexy::MetricsManager::Report**,std::vector<Sexy::MetricsManager::Report*,std::allocator<Sexy::MetricsManager::Report*>>>
                    *)&local_58,(long)(int)uVar6);
      Sexy::OutputDebugStrF((wchar_t *)"random_length = %d",(ulong)uVar6);
      std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
      assign<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<BoardEntity>*,std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>,void>
                (this_00,uVar9,local_58);
    }
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::vector
              ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
               &local_20,(vector *)this_00);
    MonotropaFoodCounter::SetTargets((MonotropaFoodCounter *)pPVar1,(Vec3 *)&local_20);
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
              ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
               &local_20);
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
              ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
               &local_38);
  }
  iVar4 = BoardTransforms::GridToBoardSpaceX(*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8) / 2 + 1);
  fVar14 = (float)iVar4 + DAT_06b95aa8;
  iVar4 = BoardTransforms::GridToBoardSpaceY(*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc) / 2 + 1);
  EATextSquish::Vec3::Vec3
            ((Vec3 *)&local_20,(float)(int)fVar14,(float)(int)((float)iVar4 + DAT_06b95aac),0.0);
  if (cVar2 == '\0') {
    puVar12 = &DAT_06b95af0;
  }
  else {
    puVar12 = &DAT_06b95b88;
  }
  FUN_05475d88((string *)&local_60,puVar12);
  FUN_05475d88((string *)&local_58,&DAT_06b95a90);
  FUN_05475d88((string *)&local_38,(string *)&local_60);
  plVar8 = (long *)CreateProjectileEffectByBoardSpace
                             (local_20,uStack_1c,local_18,this,(string *)&local_58,
                              (string *)&local_38,0x64961);
  std::string::~string((string *)&local_38);
  std::string::~string((string *)&local_58);
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x80))(0x40000000,plVar8);
  }
  std::string::~string((string *)&local_60);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_50);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PlantMonotropa::CancelPlantfood() */

void __thiscall PlantMonotropa::CancelPlantfood(PlantMonotropa *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)this + 0x180))();
  if (cVar1 != '\0') {
    LaunchSpecialAttackReal(this);
  }
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  return;
}

