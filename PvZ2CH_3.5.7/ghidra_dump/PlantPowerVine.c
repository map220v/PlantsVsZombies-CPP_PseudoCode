// Class: PlantPowerVine


/* PlantPowerVine::onExitState_NetworkedPFAttacking(PlantState) */

void PlantPowerVine::onExitState_NetworkedPFAttacking(long param_1)

{
  *(undefined4 *)(param_1 + 0x158) = 0;
  return;
}


/* PlantPowerVine::OnUseSpecialAnimCommand(float) */

float PlantPowerVine::OnUseSpecialAnimCommand(float param_1)

{
  char cVar1;
  PlantStatefulFramework *in_x0;
  Plant *this;
  float extraout_s0;
  float fVar2;
  float extraout_s0_00;
  
  this = *(Plant **)(in_x0 + 0x10);
  if ((*(int *)(this + 0x110) != -1) && (*(int *)(this + 0x114) != -1)) {
    if (*(code **)(*(long *)this + 0x1f8) == Plant::IsInPlantFoodState) {
      cVar1 = Plant::IsInPlantFoodState(this);
      param_1 = extraout_s0;
    }
    else {
      cVar1 = (**(code **)(*(long *)this + 0x1f8))();
      param_1 = extraout_s0_00;
    }
    if (cVar1 != '\0') {
      if (in_x0[0x164] == (PlantStatefulFramework)0x0) {
        fVar2 = (float)PlantStatefulFramework::setActionState(in_x0,0xc,true);
        return fVar2;
      }
      fVar2 = (float)PlantStatefulFramework::setActionState(in_x0,0xf,true);
      return fVar2;
    }
  }
  return param_1;
}


/* PlantPowerVine::canAttackZombie(Zombie const*) const */

undefined8 __thiscall PlantPowerVine::canAttackZombie(PlantPowerVine *this,Zombie *param_1)

{
  char cVar1;
  
  if ((param_1 != (Zombie *)0x0) &&
     (cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1), cVar1 == '\0')) {
    return 1;
  }
  return 0;
}


/* PlantPowerVine::IsNetworked() */

PlantPowerVine __thiscall PlantPowerVine::IsNetworked(PlantPowerVine *this)

{
  return this[0x164];
}


/* PlantPowerVine::onAnimCommand_NetworkedAttacking(std::string const&, std::string const&) */

bool __thiscall
PlantPowerVine::onAnimCommand_NetworkedAttacking
          (PlantPowerVine *this,string *param_1,string *param_2)

{
  bool bVar1;
  bool bVar2;
  
  bVar1 = std::operator==(param_1,"use_action");
  bVar2 = false;
  if (bVar1) {
    bVar2 = std::operator==(param_2,"normal");
    if (!bVar2) {
      bVar2 = std::operator==(param_2,"special");
      if (!bVar2) {
        bVar2 = std::operator==(param_2,"pink");
        return bVar2;
      }
    }
  }
  return bVar2;
}


/* PlantPowerVine::CanTargetZombie(Sexy::RtWeakPtr<Zombie>, PlantWeapon) */

void PlantPowerVine::CanTargetZombie(PlantPowerVine *param_1,RtWeakPtr *param_2)

{
  ResourceInfo *pRVar1;
  
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(param_2);
  canAttackZombie(param_1,(Zombie *)pRVar1);
  return;
}


/* PlantPowerVine::onUseActionAnimCommand(float) */

float PlantPowerVine::onUseActionAnimCommand(float param_1)

{
  char cVar1;
  PlantStatefulFramework *in_x0;
  Plant *this;
  float extraout_s0;
  float extraout_s0_00;
  
  this = *(Plant **)(in_x0 + 0x10);
  if ((*(int *)(this + 0x110) != -1) && (*(int *)(this + 0x114) != -1)) {
    if (*(code **)(*(long *)this + 0x1f8) == Plant::IsInPlantFoodState) {
      cVar1 = Plant::IsInPlantFoodState(this);
      param_1 = extraout_s0;
    }
    else {
      cVar1 = (**(code **)(*(long *)this + 0x1f8))();
      param_1 = extraout_s0_00;
    }
    if (cVar1 == '\0') {
      if (in_x0[0x164] == (PlantStatefulFramework)0x0) {
        PlantStatefulFramework::setActionState(in_x0,0xb,false);
      }
      else {
        PlantStatefulFramework::setActionState(in_x0,0xe,false);
      }
      param_1 = (float)PVZ_T();
      *(float *)(in_x0 + 0x15c) = param_1;
    }
  }
  return param_1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPowerVine::playEffectAnim() */

void __thiscall PlantPowerVine::playEffectAnim(PlantPowerVine *this)

{
  int iVar1;
  undefined4 uVar2;
  long *plVar3;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar4;
  float *pfVar5;
  long lVar6;
  GameObjectDictionary *this_01;
  AttachedEffect *this_02;
  PopAnim *pPVar7;
  undefined8 uVar8;
  code *pcVar9;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  string asStack_20 [8];
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar3 = (long *)Plant::GetAttachedEffectManager(*(Plant **)(this + 0x10));
  iVar1 = (**(code **)(*plVar3 + 0x50))();
  if (iVar1 == 0) {
    uVar2 = Board::MakeRenderOrder(0x61cd8,*(undefined4 *)(*(long *)(this + 0x10) + 0x110),0);
    this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    std::string::string(asStack_20,"POPANIM_EFFECTS_POWERVINE_LV2_BURST");
    GetPAMByName(asStack_20);
    pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
    Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar4,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    std::string::~string(asStack_20);
    nop();
    p_Var10 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                **)(this + 0x10);
    pfVar5 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(p_Var10);
    fVar13 = *pfVar5;
    FUN_04d14dc4(aRStack_28,p_Var10);
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
    p_Var10 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                **)(this + 0x10);
    fVar11 = *(float *)(lVar6 + 0x9c);
    lVar6 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost(p_Var10);
    fVar12 = *(float *)(lVar6 + 4);
    fVar14 = *(float *)(lVar6 + 8);
    FUN_04d14dc4(asStack_20,p_Var10);
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_20);
    EATextSquish::Vec3::Vec3
              ((Vec3 *)aRStack_18,fVar13 - fVar11,(fVar12 - fVar14) - *(float *)(lVar6 + 0xa0),20.0)
    ;
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)aRStack_18,-1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
    FUN_04d14d9c(this_00 + 0x1c,uVar2);
    std::string::string((string *)aRStack_18,"animation1");
    Effect_PopAnim::PlaySingleAnimation(this_00,aRStack_18,0);
    std::string::~string((string *)aRStack_18);
    nop();
    this_01 = (GameObjectDictionary *)Plant::GetAttachedEffectManager(*(Plant **)(this + 0x10));
    std::string::string((string *)aRStack_18,"enhance");
    this_02 = (AttachedEffect *)GameObjectDictionary::FindOrCreate(this_01,(string *)aRStack_18);
    std::string::~string((string *)aRStack_18);
    nop();
    std::string::string(asStack_20,"POPANIM_EFFECTS_POWERVINE_ENHANCE");
    GetPAMByName(asStack_20);
    pPVar7 = (PopAnim *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    AttachedEffect::InitializeWithAnimation(this_02,pPVar7);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    std::string::~string(asStack_20);
    nop();
    uVar8 = *(undefined8 *)(this + 0x10);
    pcVar9 = *(code **)(*(long *)this_02 + 0x18);
    EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,0.0,-30.0,0.0);
    (*pcVar9)(this_02,uVar8,aRStack_18,0xffffffff);
    std::string::string((string *)aRStack_18,"animation");
    AttachedEffect::PlayAnimLooped(this_02,aRStack_18,2);
    std::string::~string((string *)aRStack_18);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPowerVine::firePFProjectile(Zombie*, PlantWeapon, int) */

void __thiscall
PlantPowerVine::firePFProjectile
          (PlantPowerVine *this,undefined8 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  long lVar2;
  Projectile *this_00;
  DVec3 *this_01;
  long lVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  fVar7 = 0.0;
  local_8 = ___stack_chk_guard;
  lVar2 = FUN_04d1678c(*(undefined8 *)(this + 0x10));
  lVar3 = *(long *)this;
  *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = param_3;
  pcVar4 = *(code **)(lVar3 + 0xb0);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  this_00 = (Projectile *)
            (*pcVar4)(this,a_Stack_10,*(undefined4 *)(*(long *)(this + 0x10) + 0x110),param_3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  Sexy::SexyMath::DegToRad((float)param_4 * *(float *)(lVar2 + 0x2c4));
  FUN_04d14da4(this_00 + 0xc4);
  this_01 = (DVec3 *)Projectile::GetVelocity(this_00);
  fVar5 = (float)DVec3::getLength(this_01);
  Projectile::SetRotatedVelocity(this_00,fVar5);
  iVar1 = FUN_04d14de8(*(undefined8 *)(this + 0x10));
  if (iVar1 - 1U < 5) {
    fVar7 = *(float *)(&DAT_05755830 + (ulong)(iVar1 - 1U) * 4);
  }
  fVar5 = (float)Projectile::GetDamageAmount(this_00);
  fVar6 = (float)Projectile::GetDamageAmount(this_00);
  FUN_04d14dac((fVar5 + fVar7) / fVar6,this_00 + 0x184);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* PlantPowerVine::GetPlantFoodPlayCount() */

undefined4 __thiscall PlantPowerVine::GetPlantFoodPlayCount(PlantPowerVine *this)

{
  long lVar1;
  
  lVar1 = FUN_04d1678c(*(undefined8 *)(this + 0x10));
  if (this[0x164] == (PlantPowerVine)0x0) {
    return *(undefined4 *)(lVar1 + 0x3c);
  }
  return *(undefined4 *)(lVar1 + 0x2c0);
}


/* PlantPowerVine::canTargetZombieToEmpBurst(Zombie*) */

undefined8 __thiscall
PlantPowerVine::canTargetZombieToEmpBurst(PlantPowerVine *this,Zombie *param_1)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar2 = operator|(1,4);
  cVar1 = Zombie::MatchesAny(param_1,uVar2,*(undefined8 *)(this + 0x10));
  if (cVar1 != '\0') {
    return 0;
  }
  lVar3 = FUN_04d1678c(*(undefined8 *)(this + 0x10));
  uVar4 = ZombieRestrictionSet::IsIncluded((ZombieRestrictionSet *)(lVar3 + 0x2d8),param_1);
  return uVar4;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPowerVine::updateState_Attacking() */

void __thiscall PlantPowerVine::updateState_Attacking(PlantPowerVine *this)

{
  char cVar1;
  PopAnimRig *pPVar2;
  long *plVar3;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  undefined8 *puVar4;
  UIEasyButtonWidget *this_01;
  undefined8 uVar5;
  float local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_04d1678c(*(undefined8 *)(this + 0x10));
  this_01 = *(UIEasyButtonWidget **)(this + 0x10);
  *(undefined4 *)(this_01 + 0x150) = 0;
  pPVar2 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(this_01);
  std::string::string((string *)&local_18,"attack");
  cVar1 = PopAnimRig::IsAnimStringActive(pPVar2,(string *)&local_18);
  std::string::~string((string *)&local_18);
  nop();
  if (cVar1 == '\0') {
    plVar3 = (long *)0x0;
    pPVar2 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    std::string::string((string *)&local_18,"attack_lv2");
    cVar1 = PopAnimRig::IsAnimStringActive(pPVar2,(string *)&local_18);
    std::string::~string((string *)&local_18);
    nop();
    if (cVar1 == '\0') goto LAB_04d16a7c;
    playEffectAnim(this);
    *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 4;
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_18);
    uVar5 = 4;
  }
  else {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_18);
    uVar5 = 0;
  }
  plVar3 = (long *)Plant::Fire(*(Plant **)(this + 0x10),(string *)&local_18,
                               *(undefined4 *)(*(Plant **)(this + 0x10) + 0x110),uVar5);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
LAB_04d16a7c:
  if (this[0x16e] != (PlantPowerVine)0x0) {
    this[0x16e] = (PlantPowerVine)0x0;
    *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 3;
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_18);
    this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Plant::Fire(*(Plant **)(this + 0x10),(string *)&local_18,
                             *(undefined4 *)(*(Plant **)(this + 0x10) + 0x110),3);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    if (plVar3 != (long *)0x0) {
      puVar4 = (undefined8 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost(this_00);
      local_18 = (float)*puVar4;
      local_10 = *(undefined4 *)(puVar4 + 1);
      _local_18 = CONCAT44((int)((ulong)*puVar4 >> 0x20),local_18 + 30.0);
      (**(code **)(*plVar3 + 0x78))(plVar3,(string *)&local_18);
    }
  }
  PlantStatefulFramework::setActionState((PlantStatefulFramework *)this,4,false);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPowerVine::updateState_NetworkedPFAttacking() */

void __thiscall PlantPowerVine::updateState_NetworkedPFAttacking(PlantPowerVine *this)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::FindTargetZombie(aRStack_10,this,1);
  uVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  lVar4 = FUN_04d1678c(*(undefined8 *)(this + 0x10));
  if (*(int *)(this + 0x158) == 0) {
    fVar9 = *(float *)(lVar4 + 0x2cc) - *(float *)(lVar4 + 0x2c8);
    fVar8 = 0.0;
    iVar2 = 0;
    iVar5 = 0;
    if (0.0 <= fVar9) {
      do {
        iVar5 = iVar5 + 1;
        cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
        uVar6 = 2;
        if (cVar1 == '\0') {
          uVar6 = 1;
        }
        fVar7 = *(float *)(lVar4 + 0x2cc) - fVar8;
        fVar8 = (float)iVar5;
        firePFProjectile(this,uVar3,uVar6,(int)fVar7);
      } while (fVar8 <= fVar9);
      iVar2 = *(int *)(this + 0x158);
    }
    *(int *)(this + 0x158) = iVar2 + 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPowerVine::updateState_NetworkedAttacking() */

void __thiscall PlantPowerVine::updateState_NetworkedAttacking(PlantPowerVine *this)

{
  PlantPowerVine PVar1;
  char cVar2;
  long lVar3;
  Zombie *pZVar4;
  long lVar5;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  undefined8 *puVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar8 = (float)PVZ_T();
  if (*(float *)(this + 0x15c) < fVar8) {
    lVar3 = FUN_04d1678c(*(undefined8 *)(this + 0x10));
    PlantFramework::FindTargetZombie((RtWeakPtr<Sexy::ResourceInfo> *)&local_18,this,0);
    pZVar4 = (Zombie *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    (**(code **)(*(long *)this + 0xf8))((RtWeakPtr<Sexy::ResourceInfo> *)&local_18,this,0);
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    cVar2 = canAttackZombie(this,pZVar4);
    if ((lVar5 == 0) && (cVar2 == '\0')) {
      iVar7 = *(int *)(this + 0x160);
      this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)0x0;
    }
    else {
      lVar5 = *(long *)(this + 0x10);
      PVar1 = this[0x16d];
      *(undefined4 *)(lVar5 + 0x150) = 0;
      if (PVar1 == (PlantPowerVine)0x0) {
        std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                  ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_18);
        this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   *)Plant::Fire(*(Plant **)(this + 0x10),(RtWeakPtr<Sexy::ResourceInfo> *)&local_18
                                 ,*(undefined4 *)(*(Plant **)(this + 0x10) + 0x110),0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
        fVar8 = (float)PVZ_T();
        fVar9 = *(float *)(lVar3 + 0x2d0);
        iVar7 = *(int *)(this + 0x160) + 1;
        *(int *)(this + 0x160) = iVar7;
        *(float *)(this + 0x15c) = fVar8 + fVar9;
      }
      else {
        *(undefined4 *)(lVar5 + 0x150) = 4;
        std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                  ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_18);
        this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   *)Plant::Fire(*(Plant **)(this + 0x10),(RtWeakPtr<Sexy::ResourceInfo> *)&local_18
                                 ,*(undefined4 *)(*(Plant **)(this + 0x10) + 0x110),4);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
        fVar8 = (float)PVZ_T();
        *(float *)(this + 0x15c) = fVar8 + *(float *)(lVar3 + 0x2d0);
        playEffectAnim(this);
        iVar7 = *(int *)(this + 0x160) + 1;
        *(int *)(this + 0x160) = iVar7;
      }
    }
    if (*(int *)(lVar3 + 0x2b8) == iVar7) {
      if (this[0x16e] != (PlantPowerVine)0x0) {
        *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 3;
        std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                  ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_18);
        Plant::Fire(*(Plant **)(this + 0x10),(RtWeakPtr<Sexy::ResourceInfo> *)&local_18,
                    *(undefined4 *)(*(Plant **)(this + 0x10) + 0x110),3);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
        if (this_00 !=
            (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)0x0) {
          puVar6 = (undefined8 *)
                   std::
                   _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::_M_leftmost(this_00);
          local_18 = (float)*puVar6;
          local_10 = *(undefined4 *)(puVar6 + 1);
          _local_18 = CONCAT44((int)((ulong)*puVar6 >> 0x20),local_18 + 30.0);
          (**(code **)(*(long *)this_00 + 0x78))(this_00,(RtWeakPtr<Sexy::ResourceInfo> *)&local_18)
          ;
        }
      }
      *(undefined4 *)(this + 0x160) = 0;
      this[0x16e] = (PlantPowerVine)0x0;
      this[0x16d] = (PlantPowerVine)0x0;
      PlantStatefulFramework::setActionState((PlantStatefulFramework *)this,0xd,false);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantPowerVine::onExitState_NetworkedAttacking(PlantState) */

void PlantPowerVine::onExitState_NetworkedAttacking(long param_1)

{
  long lVar1;
  float fVar2;
  
  lVar1 = FUN_04d1678c(*(undefined8 *)(param_1 + 0x10));
  fVar2 = (float)PVZ_T();
  lVar1 = FUN_04d14e44(*(undefined8 *)(lVar1 + 0x70));
  *(float *)(param_1 + 0x15c) = fVar2 + *(float *)(lVar1 + 0x28);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPowerVine::PlayAttackAnimation() */

void __thiscall PlantPowerVine::PlayAttackAnimation(PlantPowerVine *this)

{
  char cVar1;
  int iVar2;
  Zombie *pZVar3;
  long lVar4;
  long lVar5;
  PlantAnimRig_PowerVine *this_00;
  undefined8 uVar6;
  float fVar7;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::FindTargetZombie(aRStack_10,this,0);
  pZVar3 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  (**(code **)(*(long *)this + 0xf8))(aRStack_10,this,0);
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  lVar5 = FUN_04d1678c(*(undefined8 *)(this + 0x10));
  cVar1 = canAttackZombie(this,pZVar3);
  if ((lVar4 == 0) && (cVar1 == '\0')) goto LAB_04d170cc;
  fVar7 = (float)Sexy::Rand(1.0);
  if (this[0x16c] == (PlantPowerVine)0x0) {
    uVar6 = *(undefined8 *)(this + 0x10);
    iVar2 = FUN_04d14de8(uVar6);
    if (iVar2 != 2) {
      if ((2 < iVar2) && (fVar7 <= *(float *)(lVar5 + 0x30c))) goto LAB_04d17120;
      goto LAB_04d17090;
    }
    if (*(float *)(lVar5 + 0x308) < fVar7) goto LAB_04d17090;
LAB_04d17120:
    this_00 = (PlantAnimRig_PowerVine *)FUN_04d16fd0(uVar6);
    PlantAnimRig_PowerVine::PlayLv2Projectile(this_00);
    this[0x16c] = (PlantPowerVine)0x1;
    iVar2 = *(int *)(this + 0x168) + 1;
    this[0x16d] = (PlantPowerVine)0x1;
    *(int *)(this + 0x168) = iVar2;
  }
  else {
LAB_04d17090:
    PlantFramework::PlayAttackAnimation((PlantFramework *)this);
    iVar2 = *(int *)(this + 0x168) + 1;
    *(int *)(this + 0x168) = iVar2;
  }
  cVar1 = FUN_04d14df0(*(undefined8 *)(this + 0x10));
  if ((cVar1 != '\0') && (*(int *)(lVar5 + 0x310) < iVar2)) {
    *(undefined4 *)(this + 0x168) = 0;
    this[0x16e] = (PlantPowerVine)0x1;
  }
LAB_04d170cc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPowerVine::updateAnimLayers() */

void __thiscall PlantPowerVine::updateAnimLayers(PlantPowerVine *this)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = FUN_04d16fd0(*(undefined8 *)(this + 0x10));
  if (this[0x164] == (PlantPowerVine)0x0) {
    puVar2 = &k_normalLayerSetName;
  }
  else {
    puVar2 = &k_networkedLayerSetName;
  }
  FUN_05475d88(asStack_10,puVar2);
  PlantAnimRig_DragonBabyBruit::ShowBoostedLayerSet(uVar1,asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPowerVine::applyEmpeachStunBurst() */

void __thiscall PlantPowerVine::applyEmpeachStunBurst(PlantPowerVine *this)

{
  char cVar1;
  long lVar2;
  Zombie *extraout_x0;
  ulong uVar3;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar4;
  float *pfVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  string asStack_38 [8];
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  uVar7 = 0;
  lVar2 = FUN_04d1678c(*(undefined8 *)(this + 0x10));
  lVar6 = *(long *)(this + 0x10);
  uVar13 = *(undefined4 *)(lVar2 + 0x300);
  uVar11 = *(undefined4 *)(lVar6 + 0x1c);
  local_30 = FUN_04d14e48(*(undefined4 *)(lVar6 + 0x18),uVar11,*(undefined4 *)(lVar6 + 0x20));
  local_2c = uVar11;
  EntityFinder::GetEntitiesWithinCircle2D
            (uVar13,(vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,2,
             (RtWeakPtr *)&local_30);
  uVar8 = local_20;
  lVar2 = FUN_04d14e30(local_20,local_18);
  if (lVar2 != 0) {
    do {
      FUN_04d14e3c(uVar8,uVar7);
      nop();
      cVar1 = canTargetZombieToEmpBurst(this,extraout_x0);
      if ((cVar1 != '\0') &&
         (lVar2 = FUN_04d1678c(*(undefined8 *)(this + 0x10)), 0.0 < *(float *)(lVar2 + 0x304))) {
        (**(code **)(*(long *)extraout_x0 + 0x2a0))(extraout_x0);
      }
      uVar8 = local_20;
      uVar7 = uVar7 + 1;
      uVar3 = FUN_04d14e30(local_20,local_18);
    } while (uVar7 < uVar3);
  }
  uVar11 = Board::MakeRenderOrder(0x65130,*(undefined4 *)(*(long *)(this + 0x10) + 0x110),0);
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_38,"POPANIM_EFFECTS_EMPEACH_BLAST");
  GetPAMByName(asStack_38);
  pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_30);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar4,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
  std::string::~string(asStack_38);
  nop();
  p_Var9 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             **)(this + 0x10);
  pfVar5 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(p_Var9);
  fVar14 = *pfVar5;
  FUN_04d14dc4(aRStack_40,p_Var9);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
  p_Var9 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             **)(this + 0x10);
  fVar10 = *(float *)(lVar2 + 0x9c);
  lVar2 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost(p_Var9);
  fVar12 = *(float *)(lVar2 + 4);
  fVar15 = *(float *)(lVar2 + 8);
  FUN_04d14dc4(asStack_38,p_Var9);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_38);
  EATextSquish::Vec3::Vec3
            ((Vec3 *)&local_30,fVar14 - fVar10,(fVar12 - fVar15) - *(float *)(lVar2 + 0xa0),0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)&local_30,-1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  FUN_04d14d9c(this_00 + 0x1c,uVar11);
  std::string::string((string *)&local_30,"animation");
  Effect_PopAnim::PlaySingleAnimation(this_00,(RtWeakPtr *)&local_30,0);
  std::string::~string((string *)&local_30);
  nop();
  Board::ShakeBoard(*(Board **)(gLawnApp + 0x9f0),3,-4,0.0);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantPowerVine::~PlantPowerVine() */

void __thiscall PlantPowerVine::~PlantPowerVine(PlantPowerVine *this)

{
  *(undefined ***)this = &PTR_GetClass_069a8800;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::~vector
            ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)(this + 0x140)
            );
  PlantVineFramework::~PlantVineFramework((PlantVineFramework *)this);
  return;
}


/* PlantPowerVine::~PlantPowerVine() */

void __thiscall PlantPowerVine::~PlantPowerVine(PlantPowerVine *this)

{
  ~PlantPowerVine(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPowerVine::OnPlantCombos(Plant*) */

void __thiscall PlantPowerVine::OnPlantCombos(PlantPowerVine *this,Plant *param_1)

{
  bool bVar1;
  int iVar2;
  Plant *this_00;
  long lVar3;
  int *piVar4;
  long *plVar5;
  Board *pBVar6;
  undefined8 local_30;
  undefined8 local_28;
  Point aPStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pBVar6 = *(Board **)(gLawnApp + 0x9f0);
  Sexy::Point::Point(aPStack_20,*(int *)(*(long *)(this + 0x10) + 0x114),
                     *(int *)(*(long *)(this + 0x10) + 0x110));
  this_00 = (Plant *)Board::GetPlantAt(pBVar6,aPStack_20,1);
  if (((this_00 != (Plant *)0x0) && (this_00 == param_1)) && (this[0x16c] != (PlantPowerVine)0x0)) {
    Plant::GetType();
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
    std::vector<PlantTag,std::allocator<PlantTag>>::vector
              ((vector<PlantTag,std::allocator<PlantTag>> *)aPStack_20,(vector *)(lVar3 + 0xf0));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
    local_30 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)aPStack_20);
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)aPStack_20);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1)
    {
      piVar4 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
      if (*piVar4 == 0x1b) {
        plVar5 = (long *)Plant::GetAttachedEffectManager(*(Plant **)(this + 0x10));
        iVar2 = (**(code **)(*plVar5 + 0x50))();
        if (0 < iVar2) {
          Plant::DoProjectileCombo(this_00);
          plVar5 = (long *)Plant::GetAttachedEffectManager(*(Plant **)(this + 0x10));
          (**(code **)(*plVar5 + 0x48))();
          this[0x16c] = (PlantPowerVine)0x0;
        }
      }
      eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
                ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_30);
    }
    std::vector<PlantTag,std::allocator<PlantTag>>::~vector
              ((vector<PlantTag,std::allocator<PlantTag>> *)aPStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPowerVine::getAdjacentPowerVines() */

void __thiscall PlantPowerVine::getAdjacentPowerVines(PlantPowerVine *this)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  TPoint *pTVar4;
  long lVar5;
  undefined8 *puVar6;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  Point aPStack_78 [8];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [8];
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_48 [24];
  Point aPStack_30 [8];
  Point aPStack_28 [8];
  Point aPStack_20 [8];
  Point aPStack_18 [8];
  Point aPStack_10 [8];
  long local_8;
  
  iVar1 = *(int *)(*(long *)(this + 0x10) + 0x110);
  iVar2 = *(int *)(*(long *)(this + 0x10) + 0x114);
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point(aPStack_30,iVar2 + -1,iVar1);
  Sexy::Point::Point(aPStack_28,iVar2,iVar1 + -1);
  Sexy::Point::Point(aPStack_20,iVar2 + 1,iVar1);
  Sexy::Point::Point(aPStack_18,iVar2,iVar1 + 1);
  Sexy::Point::Point(aPStack_10,iVar2,iVar1);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)avStack_48,aPStack_30,5,aRStack_50);
  local_70 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(avStack_48);
  local_68 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(avStack_48);
  bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_70,(__normal_iterator *)&local_68);
  if (bVar3) {
    do {
      pTVar4 = (TPoint *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_70);
      Sexy::Point::Point(aPStack_78,pTVar4);
      lVar5 = Board::GetPlantGroupAt(*(Point **)(gLawnApp + 0x9f0));
      if (lVar5 != 0) {
        puVar6 = (undefined8 *)PlantGroup::Plants();
        local_60 = FUN_04d160a0(*puVar6);
        local_58 = FUN_04d160f0(puVar6[1]);
        while (bVar3 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_60,(__normal_iterator *)&local_58),
              bVar3) {
          this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)
                    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_60);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
          Plant::GetType();
          lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
          bVar3 = std::operator==((string *)(lVar5 + 8),"powervine");
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
          if (bVar3) {
            std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::push_back
                      ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)
                       (this + 0x140),(RtWeakPtr *)this_00);
          }
          eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                    ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_60);
        }
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_70);
      bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_70,(__normal_iterator *)&local_68);
    } while (bVar3);
  }
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)avStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPowerVine::setNetworkedState(bool, Plant*) */

void __thiscall PlantPowerVine::setNetworkedState(PlantPowerVine *this,bool param_1,Plant *param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *pvVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 local_28;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = FUN_04d1678c(*(undefined8 *)(this + 0x10));
  if (param_1) {
    PlantStatefulFramework::setActionState((PlantStatefulFramework *)this,0xd,false);
    this[0x164] = (PlantPowerVine)0x1;
    updateAnimLayers(this);
    if ((param_2 != (Plant *)0x0) && (*(Plant **)(this + 0x10) != param_2)) {
      pvVar1 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                *)(this + 0x140);
      uVar4 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin(pvVar1);
      uVar5 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end(pvVar1);
      ToolPacketData::GetProps();
      local_18 = std::
                 find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<Plant>*,std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>>,Sexy::RtWeakPtr<GameObject>>
                           (uVar4,uVar5,aRStack_20);
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(pvVar1);
      bVar2 = __gnu_cxx::operator==((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
      if (bVar2) {
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)&local_18);
        std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::push_back
                  ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)pvVar1,
                   (RtWeakPtr *)&local_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      }
    }
    goto LAB_04d17a48;
  }
  if ((param_2 == (Plant *)0x0) || (*(Plant **)(this + 0x10) == param_2)) {
LAB_04d17a30:
    uVar6 = FUN_04d14e10(*(undefined8 *)(this + 0x140),*(undefined8 *)(this + 0x148));
    if ((ulong)(long)*(int *)(lVar3 + 700) <= uVar6) goto LAB_04d17a48;
  }
  else {
    pvVar1 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              *)(this + 0x140);
    uVar4 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin(pvVar1);
    uVar5 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end(pvVar1);
    ToolPacketData::GetProps();
    local_28 = std::
               find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<Plant>*,std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>>,Sexy::RtWeakPtr<GameObject>>
                         (uVar4,uVar5,(RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(pvVar1);
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_28,(__normal_iterator *)&local_10);
    if (!bVar2) goto LAB_04d17a30;
    uVar4 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin(pvVar1);
    uVar5 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end(pvVar1);
    ToolPacketData::GetProps();
    local_18 = std::
               find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<Plant>*,std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>>,Sexy::RtWeakPtr<GameObject>>
                         (uVar4,uVar5,aRStack_20);
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_10,(__normal_iterator *)&local_18);
    std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::erase
              ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)pvVar1,
               local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    uVar6 = FUN_04d14e10(*(undefined8 *)(this + 0x140),*(undefined8 *)(this + 0x148));
    if ((ulong)(long)*(int *)(lVar3 + 700) <= uVar6) goto LAB_04d17a48;
  }
  this[0x164] = (PlantPowerVine)0x0;
  PlantStatefulFramework::setActionState((PlantStatefulFramework *)this,4,false);
  updateAnimLayers(this);
LAB_04d17a48:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PlantPowerVine::addPlantToNetwork(Plant*) */

void __thiscall PlantPowerVine::addPlantToNetwork(PlantPowerVine *this,Plant *param_1)

{
  long lVar1;
  ulong uVar2;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  PlantPowerVine *this_01;
  ulong uVar3;
  undefined8 uVar4;
  
  if (*(Plant **)(this + 0x10) != param_1) {
    return;
  }
  lVar1 = FUN_04d1678c(*(Plant **)(this + 0x10));
  std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::clear
            ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)(this + 0x140)
            );
  getAdjacentPowerVines(this);
  uVar4 = *(undefined8 *)(this + 0x140);
  uVar2 = FUN_04d14e10(uVar4,*(undefined8 *)(this + 0x148));
  if (uVar2 < (ulong)(long)*(int *)(lVar1 + 700)) {
    setNetworkedState(this,false,*(Plant **)(this + 0x10));
  }
  else {
    uVar3 = 0;
    while (uVar3 < uVar2) {
      this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_04d14e28(uVar4,uVar3);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      nop();
      setNetworkedState(this_01,true,*(Plant **)(this + 0x10));
      uVar4 = *(undefined8 *)(this + 0x140);
      uVar2 = FUN_04d14e10(uVar4,*(undefined8 *)(this + 0x148));
      uVar3 = uVar3 + 1;
    }
  }
  this[0x165] = (PlantPowerVine)0x1;
  return;
}


/* PlantPowerVine::onPlantPlaced(Plant*) */

void __thiscall PlantPowerVine::onPlantPlaced(PlantPowerVine *this,Plant *param_1)

{
  Plant *pPVar1;
  
  pPVar1 = *(Plant **)(this + 0x10);
  if (pPVar1 != param_1) {
    return;
  }
  PlantStatefulFramework::setActionState((PlantStatefulFramework *)this,4,false);
  addPlantToNetwork(this,pPVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPowerVine::removePlantFromNetwork(Plant*) */

void __thiscall PlantPowerVine::removePlantFromNetwork(PlantPowerVine *this,Plant *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  int iVar2;
  PlantGroup *this_01;
  ulong uVar3;
  RtMixedPtrBase *this_02;
  undefined8 uVar4;
  undefined8 uVar5;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar6;
  Plant *pPVar7;
  GameObject *this_03;
  PlantPowerVine *this_04;
  long lVar8;
  ulong uVar9;
  Point *pPVar10;
  undefined8 uVar11;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((param_1 != (Plant *)0x0) && (*(GameObject **)(this + 0x10) != (GameObject *)0x0)) &&
     (cVar1 = GameObject::IsDestroyed(*(GameObject **)(this + 0x10)), cVar1 == '\0')) {
    lVar8 = *(long *)(this + 0x10);
    iVar2 = FUN_04d14db8(*(undefined1 *)(lVar8 + 0x299));
    if (iVar2 == 0) {
      pPVar10 = *(Point **)(gLawnApp + 0x9f0);
      Sexy::Point::Point((Point *)&local_10,*(int *)(lVar8 + 0x114),*(int *)(lVar8 + 0x110));
      this_01 = (PlantGroup *)Board::GetPlantGroupAt(pPVar10);
      cVar1 = Board::IsPlaying(*(Board **)(gLawnApp + 0x9f0));
      if (cVar1 != '\0') {
        if (this[0x164] == (PlantPowerVine)0x0 && this_01 != (PlantGroup *)0x0) {
          ToolPacketData::GetProps();
          PlantGroup::GetTopPlant(this_01);
          cVar1 = Sexy::RtWeakPtrBase::operator==
                            ((RtWeakPtrBase *)&local_18,(RtWeakPtrBase *)&local_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
          if (cVar1 == '\0') goto LAB_04d17d60;
        }
        this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)(this + 0x140);
        uVar9 = 0;
        while( true ) {
          uVar11 = *(undefined8 *)(this + 0x140);
          uVar3 = FUN_04d14e10(uVar11,*(undefined8 *)(this + 0x148));
          if (uVar3 <= uVar9) break;
          this_02 = (RtMixedPtrBase *)FUN_04d14e28(uVar11,uVar9);
          cVar1 = Sexy::RtMixedPtrBase::IsValid(this_02);
          if (cVar1 == '\0') {
LAB_04d17e78:
            uVar11 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::begin(this_00);
            uVar4 = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end(this_00);
            uVar5 = FUN_04d14e28(*(undefined8 *)(this + 0x140),uVar9);
            local_18 = std::
                       find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<Plant>*,std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>>,Sexy::RtWeakPtr<Plant>>
                                 (uVar11,uVar4,uVar5);
            __gnu_cxx::
            __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
            ::__normal_iterator<Sexy::RenderStateManager::Context**>
                      ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                        *)&local_10,(__normal_iterator *)&local_18);
            std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::erase
                      ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)
                       this_00,local_10);
            pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)
                     FUN_04d14e28(*(undefined8 *)(this + 0x140),uVar9);
            pPVar7 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
            setNetworkedState(this,false,pPVar7);
            uVar9 = uVar9 + 1;
          }
          else {
            pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)
                     FUN_04d14e28(*(undefined8 *)(this + 0x140),uVar9);
            this_03 = (GameObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
            cVar1 = GameObject::IsDestroyed(this_03);
            if (cVar1 != '\0') goto LAB_04d17e78;
            pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)
                     FUN_04d14e28(*(undefined8 *)(this + 0x140),uVar9);
            lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
            iVar2 = FUN_04d14db8(*(undefined1 *)(lVar8 + 0x299));
            if (iVar2 != 0) goto LAB_04d17e78;
            pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)
                     FUN_04d14e28(*(undefined8 *)(this + 0x140),uVar9);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
            nop();
            setNetworkedState(this_04,false,param_1);
            uVar9 = uVar9 + 1;
          }
        }
      }
    }
  }
LAB_04d17d60:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPowerVine::onPlantMoving(Plant*, Sexy::Point&) */

void PlantPowerVine::onPlantMoving(Plant *param_1,Point *param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this;
  char cVar1;
  int iVar2;
  PlantGroup *this_00;
  ulong uVar3;
  RtMixedPtrBase *this_01;
  undefined8 uVar4;
  undefined8 uVar5;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar6;
  Plant *pPVar7;
  GameObject *this_02;
  PlantPowerVine *this_03;
  long lVar8;
  ulong uVar9;
  Point *pPVar10;
  undefined8 uVar11;
  undefined8 uStack_18;
  undefined8 uStack_10;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  if (((param_2 != (Point *)0x0) && (*(GameObject **)(param_1 + 0x10) != (GameObject *)0x0)) &&
     (cVar1 = GameObject::IsDestroyed(*(GameObject **)(param_1 + 0x10)), cVar1 == '\0')) {
    lVar8 = *(long *)(param_1 + 0x10);
    iVar2 = FUN_04d14db8(*(undefined1 *)(lVar8 + 0x299));
    if (iVar2 == 0) {
      pPVar10 = *(Point **)(gLawnApp + 0x9f0);
      Sexy::Point::Point((Point *)&uStack_10,*(int *)(lVar8 + 0x114),*(int *)(lVar8 + 0x110));
      this_00 = (PlantGroup *)Board::GetPlantGroupAt(pPVar10);
      cVar1 = Board::IsPlaying(*(Board **)(gLawnApp + 0x9f0));
      if (cVar1 != '\0') {
        if (param_1[0x164] == (Plant)0x0 && this_00 != (PlantGroup *)0x0) {
          ToolPacketData::GetProps();
          PlantGroup::GetTopPlant(this_00);
          cVar1 = Sexy::RtWeakPtrBase::operator==
                            ((RtWeakPtrBase *)&uStack_18,(RtWeakPtrBase *)&uStack_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&uStack_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&uStack_18);
          if (cVar1 == '\0') goto LAB_04d17d60;
        }
        this = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                *)(param_1 + 0x140);
        uVar9 = 0;
        while( true ) {
          uVar11 = *(undefined8 *)(param_1 + 0x140);
          uVar3 = FUN_04d14e10(uVar11,*(undefined8 *)(param_1 + 0x148));
          if (uVar3 <= uVar9) break;
          this_01 = (RtMixedPtrBase *)FUN_04d14e28(uVar11,uVar9);
          cVar1 = Sexy::RtMixedPtrBase::IsValid(this_01);
          if (cVar1 == '\0') {
LAB_04d17e78:
            uVar11 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::begin(this);
            uVar4 = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end(this);
            uVar5 = FUN_04d14e28(*(undefined8 *)(param_1 + 0x140),uVar9);
            uStack_18 = std::
                        find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<Plant>*,std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>>,Sexy::RtWeakPtr<Plant>>
                                  (uVar11,uVar4,uVar5);
            __gnu_cxx::
            __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
            ::__normal_iterator<Sexy::RenderStateManager::Context**>
                      ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                        *)&uStack_10,(__normal_iterator *)&uStack_18);
            std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::erase
                      ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)this
                       ,uStack_10);
            pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)
                     FUN_04d14e28(*(undefined8 *)(param_1 + 0x140),uVar9);
            pPVar7 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
            setNetworkedState((PlantPowerVine *)param_1,false,pPVar7);
            uVar9 = uVar9 + 1;
          }
          else {
            pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)
                     FUN_04d14e28(*(undefined8 *)(param_1 + 0x140),uVar9);
            this_02 = (GameObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
            cVar1 = GameObject::IsDestroyed(this_02);
            if (cVar1 != '\0') goto LAB_04d17e78;
            pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)
                     FUN_04d14e28(*(undefined8 *)(param_1 + 0x140),uVar9);
            lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
            iVar2 = FUN_04d14db8(*(undefined1 *)(lVar8 + 0x299));
            if (iVar2 != 0) goto LAB_04d17e78;
            pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)
                     FUN_04d14e28(*(undefined8 *)(param_1 + 0x140),uVar9);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
            nop();
            setNetworkedState(this_03,false,(Plant *)param_2);
            uVar9 = uVar9 + 1;
          }
        }
      }
    }
  }
LAB_04d17d60:
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPowerVine::onPlantDied(Plant*) */

void __thiscall PlantPowerVine::onPlantDied(PlantPowerVine *this,Plant *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  int iVar2;
  PlantGroup *this_01;
  ulong uVar3;
  RtMixedPtrBase *this_02;
  undefined8 uVar4;
  undefined8 uVar5;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar6;
  Plant *pPVar7;
  GameObject *this_03;
  PlantPowerVine *this_04;
  long lVar8;
  ulong uVar9;
  Point *pPVar10;
  undefined8 uVar11;
  undefined8 uStack_18;
  undefined8 uStack_10;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  if (((param_1 != (Plant *)0x0) && (*(GameObject **)(this + 0x10) != (GameObject *)0x0)) &&
     (cVar1 = GameObject::IsDestroyed(*(GameObject **)(this + 0x10)), cVar1 == '\0')) {
    lVar8 = *(long *)(this + 0x10);
    iVar2 = FUN_04d14db8(*(undefined1 *)(lVar8 + 0x299));
    if (iVar2 == 0) {
      pPVar10 = *(Point **)(gLawnApp + 0x9f0);
      Sexy::Point::Point((Point *)&uStack_10,*(int *)(lVar8 + 0x114),*(int *)(lVar8 + 0x110));
      this_01 = (PlantGroup *)Board::GetPlantGroupAt(pPVar10);
      cVar1 = Board::IsPlaying(*(Board **)(gLawnApp + 0x9f0));
      if (cVar1 != '\0') {
        if (this[0x164] == (PlantPowerVine)0x0 && this_01 != (PlantGroup *)0x0) {
          ToolPacketData::GetProps();
          PlantGroup::GetTopPlant(this_01);
          cVar1 = Sexy::RtWeakPtrBase::operator==
                            ((RtWeakPtrBase *)&uStack_18,(RtWeakPtrBase *)&uStack_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&uStack_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&uStack_18);
          if (cVar1 == '\0') goto LAB_04d17d60;
        }
        this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)(this + 0x140);
        uVar9 = 0;
        while( true ) {
          uVar11 = *(undefined8 *)(this + 0x140);
          uVar3 = FUN_04d14e10(uVar11,*(undefined8 *)(this + 0x148));
          if (uVar3 <= uVar9) break;
          this_02 = (RtMixedPtrBase *)FUN_04d14e28(uVar11,uVar9);
          cVar1 = Sexy::RtMixedPtrBase::IsValid(this_02);
          if (cVar1 == '\0') {
LAB_04d17e78:
            uVar11 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::begin(this_00);
            uVar4 = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end(this_00);
            uVar5 = FUN_04d14e28(*(undefined8 *)(this + 0x140),uVar9);
            uStack_18 = std::
                        find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<Plant>*,std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>>,Sexy::RtWeakPtr<Plant>>
                                  (uVar11,uVar4,uVar5);
            __gnu_cxx::
            __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
            ::__normal_iterator<Sexy::RenderStateManager::Context**>
                      ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                        *)&uStack_10,(__normal_iterator *)&uStack_18);
            std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::erase
                      ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)
                       this_00,uStack_10);
            pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)
                     FUN_04d14e28(*(undefined8 *)(this + 0x140),uVar9);
            pPVar7 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
            setNetworkedState(this,false,pPVar7);
            uVar9 = uVar9 + 1;
          }
          else {
            pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)
                     FUN_04d14e28(*(undefined8 *)(this + 0x140),uVar9);
            this_03 = (GameObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
            cVar1 = GameObject::IsDestroyed(this_03);
            if (cVar1 != '\0') goto LAB_04d17e78;
            pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)
                     FUN_04d14e28(*(undefined8 *)(this + 0x140),uVar9);
            lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
            iVar2 = FUN_04d14db8(*(undefined1 *)(lVar8 + 0x299));
            if (iVar2 != 0) goto LAB_04d17e78;
            pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)
                     FUN_04d14e28(*(undefined8 *)(this + 0x140),uVar9);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
            nop();
            setNetworkedState(this_04,false,param_1);
            uVar9 = uVar9 + 1;
          }
        }
      }
    }
  }
LAB_04d17d60:
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPowerVine::PlantPowerVine() */

void __thiscall PlantPowerVine::PlantPowerVine(PlantPowerVine *this)

{
  undefined *puVar1;
  map<unsigned_int,Sexy::Delegate1<std::string_const&>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Sexy::Delegate1<std::string_const&>>>>
  *this_00;
  Delegate2<Sexy::IPurchaseDriver*,bool> *pDVar2;
  map<unsigned_int,Sexy::Delegate2<std::string_const&,std::string_const&>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Sexy::Delegate2<std::string_const&,std::string_const&>>>>
  *this_01;
  undefined4 uVar3;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  uint local_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantVineFramework::PlantVineFramework((PlantVineFramework *)this);
  *(undefined ***)this = &PTR_GetClass_069a8800;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x140));
  *(undefined4 *)(this + 0x158) = 0;
  uVar3 = PVZ_T();
  *(undefined4 *)(this + 0x160) = 0;
  this[0x164] = (PlantPowerVine)0x0;
  this[0x165] = (PlantPowerVine)0x0;
  *(undefined4 *)(this + 0x168) = 0;
  this[0x16c] = (PlantPowerVine)0x0;
  this[0x16d] = (PlantPowerVine)0x0;
  this[0x16e] = (PlantPowerVine)0x0;
  this[0x16f] = (PlantPowerVine)0x0;
  *(undefined4 *)(this + 0x15c) = uVar3;
  this_00 = (map<unsigned_int,Sexy::Delegate1<std::string_const&>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Sexy::Delegate1<std::string_const&>>>>
             *)PlayerInfo::GetPlantAvatarInfo((PlayerInfo *)this);
  local_68 = 4;
  pDVar2 = (Delegate2<Sexy::IPurchaseDriver*,bool> *)
           std::
           map<unsigned_int,Sexy::Delegate1<std::string_const&>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Sexy::Delegate1<std::string_const&>>>>
           ::operator[](this_00,&local_68);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x5e0);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<PlantPowerVine,void(PlantStatefulFramework::*)(std::string_const&)>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=(pDVar2,(Delegate2 *)aDStack_38);
  local_68 = 0xb;
  pDVar2 = (Delegate2<Sexy::IPurchaseDriver*,bool> *)
           std::
           map<unsigned_int,Sexy::Delegate1<std::string_const&>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Sexy::Delegate1<std::string_const&>>>>
           ::operator[](this_00,&local_68);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x720);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<PlantPowerVine,void(PlantPowerVine::*)(std::string_const&)>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=(pDVar2,(Delegate2 *)aDStack_38);
  local_68 = 0xc;
  pDVar2 = (Delegate2<Sexy::IPurchaseDriver*,bool> *)
           std::
           map<unsigned_int,Sexy::Delegate1<std::string_const&>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Sexy::Delegate1<std::string_const&>>>>
           ::operator[](this_00,&local_68);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x748);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<PlantPowerVine,void(PlantPowerVine::*)(std::string_const&)>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=(pDVar2,(Delegate2 *)aDStack_38);
  local_68 = 0xd;
  pDVar2 = (Delegate2<Sexy::IPurchaseDriver*,bool> *)
           std::
           map<unsigned_int,Sexy::Delegate1<std::string_const&>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Sexy::Delegate1<std::string_const&>>>>
           ::operator[](this_00,&local_68);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x770);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<PlantPowerVine,void(PlantPowerVine::*)(std::string_const&)>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=(pDVar2,(Delegate2 *)aDStack_38);
  local_68 = 0xe;
  pDVar2 = (Delegate2<Sexy::IPurchaseDriver*,bool> *)
           std::
           map<unsigned_int,Sexy::Delegate1<std::string_const&>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Sexy::Delegate1<std::string_const&>>>>
           ::operator[](this_00,&local_68);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x798);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<PlantPowerVine,void(PlantPowerVine::*)(std::string_const&)>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=(pDVar2,(Delegate2 *)aDStack_38);
  local_68 = 0xf;
  pDVar2 = (Delegate2<Sexy::IPurchaseDriver*,bool> *)
           std::
           map<unsigned_int,Sexy::Delegate1<std::string_const&>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Sexy::Delegate1<std::string_const&>>>>
           ::operator[](this_00,&local_68);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x7c0);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<PlantPowerVine,void(PlantPowerVine::*)(std::string_const&)>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=(pDVar2,(Delegate2 *)aDStack_38);
  this_01 = (map<unsigned_int,Sexy::Delegate2<std::string_const&,std::string_const&>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Sexy::Delegate2<std::string_const&,std::string_const&>>>>
             *)Sexy::RtDbTable::GetSharedIteratorStorage((RtDbTable *)this);
  local_68 = 4;
  pDVar2 = (Delegate2<Sexy::IPurchaseDriver*,bool> *)
           std::
           map<unsigned_int,Sexy::Delegate2<std::string_const&,std::string_const&>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Sexy::Delegate2<std::string_const&,std::string_const&>>>>
           ::operator[](this_01,&local_68);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x5e8);
  Sexy::Delegate2<std::string_const&,std::string_const&>::
  Delegate2<PlantPowerVine,void(PlantStatefulFramework::*)(std::string_const&,std::string_const&)>
            ((Delegate2<std::string_const&,std::string_const&> *)aDStack_38,
             (CBMemberTranslatorX *)&local_50);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=(pDVar2,(Delegate2 *)aDStack_38);
  local_68 = 0xb;
  pDVar2 = (Delegate2<Sexy::IPurchaseDriver*,bool> *)
           std::
           map<unsigned_int,Sexy::Delegate2<std::string_const&,std::string_const&>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Sexy::Delegate2<std::string_const&,std::string_const&>>>>
           ::operator[](this_01,&local_68);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x728);
  Sexy::Delegate2<std::string_const&,std::string_const&>::
  Delegate2<PlantPowerVine,void(PlantPowerVine::*)(std::string_const&,std::string_const&)>
            ((Delegate2<std::string_const&,std::string_const&> *)aDStack_38,
             (CBMemberTranslatorX *)&local_50);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=(pDVar2,(Delegate2 *)aDStack_38);
  local_68 = 0xc;
  pDVar2 = (Delegate2<Sexy::IPurchaseDriver*,bool> *)
           std::
           map<unsigned_int,Sexy::Delegate2<std::string_const&,std::string_const&>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Sexy::Delegate2<std::string_const&,std::string_const&>>>>
           ::operator[](this_01,&local_68);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x750);
  Sexy::Delegate2<std::string_const&,std::string_const&>::
  Delegate2<PlantPowerVine,void(PlantPowerVine::*)(std::string_const&,std::string_const&)>
            ((Delegate2<std::string_const&,std::string_const&> *)aDStack_38,
             (CBMemberTranslatorX *)&local_50);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=(pDVar2,(Delegate2 *)aDStack_38);
  local_68 = 0xd;
  pDVar2 = (Delegate2<Sexy::IPurchaseDriver*,bool> *)
           std::
           map<unsigned_int,Sexy::Delegate2<std::string_const&,std::string_const&>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Sexy::Delegate2<std::string_const&,std::string_const&>>>>
           ::operator[](this_01,&local_68);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x778);
  Sexy::Delegate2<std::string_const&,std::string_const&>::
  Delegate2<PlantPowerVine,void(PlantPowerVine::*)(std::string_const&,std::string_const&)>
            ((Delegate2<std::string_const&,std::string_const&> *)aDStack_38,
             (CBMemberTranslatorX *)&local_50);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=(pDVar2,(Delegate2 *)aDStack_38);
  local_68 = 0xe;
  pDVar2 = (Delegate2<Sexy::IPurchaseDriver*,bool> *)
           std::
           map<unsigned_int,Sexy::Delegate2<std::string_const&,std::string_const&>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Sexy::Delegate2<std::string_const&,std::string_const&>>>>
           ::operator[](this_01,&local_68);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x7a0);
  Sexy::Delegate2<std::string_const&,std::string_const&>::
  Delegate2<PlantPowerVine,void(PlantPowerVine::*)(std::string_const&,std::string_const&)>
            ((Delegate2<std::string_const&,std::string_const&> *)aDStack_38,
             (CBMemberTranslatorX *)&local_50);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=(pDVar2,(Delegate2 *)aDStack_38);
  local_68 = 0xf;
  pDVar2 = (Delegate2<Sexy::IPurchaseDriver*,bool> *)
           std::
           map<unsigned_int,Sexy::Delegate2<std::string_const&,std::string_const&>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Sexy::Delegate2<std::string_const&,std::string_const&>>>>
           ::operator[](this_01,&local_68);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x7c8);
  Sexy::Delegate2<std::string_const&,std::string_const&>::
  Delegate2<PlantPowerVine,void(PlantPowerVine::*)(std::string_const&,std::string_const&)>
            ((Delegate2<std::string_const&,std::string_const&> *)aDStack_38,
             (CBMemberTranslatorX *)&local_50);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=(pDVar2,(Delegate2 *)aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x6f0);
  local_b0 = local_88;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<PlantPowerVine,void(PlantPowerVine::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantPlaced,&local_c0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x6f8);
  local_c0 = local_80;
  uStack_b8 = uStack_78;
  local_b0 = local_70;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<PlantPowerVine,void(PlantPowerVine::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantDied,&local_c0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantMoving);
  local_e0 = CONCAT44(uStack_64,local_68);
  local_d0 = local_58;
  uStack_d8 = uStack_60;
  MessageRouter::
  Subscribe<Plant*,Sexy::Point&,Sexy::CBMemberTranslatorX<PlantPowerVine,void(PlantPowerVine::*)(Plant*,Sexy::Point&)>>
            ((MessageRouter *)puVar1,Message::PlantMoving,&local_e0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnPlantCombos);
  local_c0 = local_50;
  uStack_b8 = uStack_48;
  local_b0 = local_40;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<PlantPowerVine,void(PlantPowerVine::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantCombos,&local_c0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantPowerVine::StaticNew() */

PlantPowerVine * PlantPowerVine::StaticNew(void)

{
  PlantPowerVine *this;
  
  this = ::operator_new(0x170);
  PlantPowerVine(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPowerVine::StaticClassInit() */

void PlantPowerVine::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  StateMachineTableBuilder *this_00;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  code *pcVar4;
  string asStack_188 [8];
  CBMemberTranslatorX aCStack_180 [24];
  CBMemberTranslatorX aCStack_168 [24];
  string asStack_150 [24];
  Delegate1<PlantState> aDStack_138 [48];
  Delegate0 aDStack_108 [48];
  Delegate1<PlantState> aDStack_d8 [48];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if (this != (CRefSymbolDb *)0x0) {
    plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this);
    if (plVar1 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar1 + 0x18);
      std::string::string(asStack_150,"PlantPowerVine");
      (*pcVar4)(plVar1,asStack_150,FUN_04d189d8,0x170,0);
      std::string::~string(asStack_150);
      nop();
    }
  }
  this_00 = (StateMachineTableBuilder *)Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance()
  ;
  pRVar2 = (RtClass *)StaticGetClass();
  pSVar3 = StateMachineTableBuilder::RegisterClass<PlantState>(this_00,pRVar2);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x708);
  Sexy::Delegate1<PlantState>::Delegate1<PlantPowerVine,void(PlantPowerVine::*)(PlantState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x710);
  Sexy::Delegate0::Delegate0<PlantPowerVine,void(PlantPowerVine::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x718);
  Sexy::Delegate1<PlantState>::Delegate1<PlantPowerVine,void(PlantPowerVine::*)(PlantState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"POWERVINE_ATTACKING");
  StateDefinition<PlantState>::StateDefinition
            (aSStack_a8,0xb,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04d184bc(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x730);
  Sexy::Delegate1<PlantState>::Delegate1<PlantPowerVine,void(PlantPowerVine::*)(PlantState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x738);
  Sexy::Delegate0::Delegate0<PlantPowerVine,void(PlantPowerVine::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x740);
  Sexy::Delegate1<PlantState>::Delegate1<PlantPowerVine,void(PlantPowerVine::*)(PlantState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"POWERVINE_PFATTACKING");
  StateDefinition<PlantState>::StateDefinition
            (aSStack_a8,0xc,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04d184bc(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x758);
  Sexy::Delegate1<PlantState>::Delegate1<PlantPowerVine,void(PlantPowerVine::*)(PlantState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x760);
  Sexy::Delegate0::Delegate0<PlantPowerVine,void(PlantPowerVine::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x768);
  Sexy::Delegate1<PlantState>::Delegate1<PlantPowerVine,void(PlantPowerVine::*)(PlantState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"POWERVINE_NETWORK_IDLE");
  StateDefinition<PlantState>::StateDefinition
            (aSStack_a8,0xd,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04d184bc(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x780);
  Sexy::Delegate1<PlantState>::Delegate1<PlantPowerVine,void(PlantPowerVine::*)(PlantState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x788);
  Sexy::Delegate0::Delegate0<PlantPowerVine,void(PlantPowerVine::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x790);
  Sexy::Delegate1<PlantState>::Delegate1<PlantPowerVine,void(PlantPowerVine::*)(PlantState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"POWERVINE_NETWORK_ATTACKING");
  StateDefinition<PlantState>::StateDefinition
            (aSStack_a8,0xe,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04d184bc(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x7a8);
  Sexy::Delegate1<PlantState>::Delegate1<PlantPowerVine,void(PlantPowerVine::*)(PlantState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x7b0);
  Sexy::Delegate0::Delegate0<PlantPowerVine,void(PlantPowerVine::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x7b8);
  Sexy::Delegate1<PlantState>::Delegate1<PlantPowerVine,void(PlantPowerVine::*)(PlantState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"POWERVINE_NETWORK_PFATTACKING");
  StateDefinition<PlantState>::StateDefinition
            (aSStack_a8,0xf,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04d184bc(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PlantPowerVine::StaticGetClass() */

long * PlantPowerVine::StaticGetClass(void)

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
  uVar2 = PlantVineFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantPowerVine",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantPowerVine::GetClass() const */

long * PlantPowerVine::GetClass(void)

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
  uVar2 = PlantVineFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantPowerVine",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantPowerVine::Initialize() */

void __thiscall PlantPowerVine::Initialize(PlantPowerVine *this)

{
  undefined4 uVar1;
  
  PlantVineFramework::Initialize((PlantVineFramework *)this);
  *(undefined4 *)(this + 0x158) = 0;
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x160) = 0;
  *(undefined4 *)(this + 0x15c) = uVar1;
  if (this[0x165] == (PlantPowerVine)0x0) {
    PlantStatefulFramework::setActionState((PlantStatefulFramework *)this,4,false);
    addPlantToNetwork(this,*(Plant **)(this + 0x10));
  }
  updateAnimLayers(this);
  return;
}


/* PlantPowerVine::ApplyPlantfood() */

void __thiscall PlantPowerVine::ApplyPlantfood(PlantPowerVine *this)

{
  applyEmpeachStunBurst(this);
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  return;
}


/* PlantPowerVine::CancelPlantfood() */

void __thiscall PlantPowerVine::CancelPlantfood(PlantPowerVine *this)

{
  *(undefined4 *)(this + 0x158) = 0;
  if (this[0x164] == (PlantPowerVine)0x0) {
    PlantStatefulFramework::setActionState((PlantStatefulFramework *)this,4,false);
    PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
    return;
  }
  PlantStatefulFramework::setActionState((PlantStatefulFramework *)this,0xd,false);
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPowerVine::SetPopAnimDelegates(PlantAnimRig*) */

void __thiscall PlantPowerVine::SetPopAnimDelegates(PlantPowerVine *this,PlantAnimRig *param_1)

{
  CBMemberTranslatorX aCStack_98 [24];
  CBMemberTranslatorX aCStack_80 [24];
  Delegate1<float> aDStack_68 [48];
  Delegate1<float> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::SetPopAnimDelegates((PlantFramework *)this,param_1);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnUseSpecialAnimCommand);
  Sexy::Delegate1<float>::Delegate1<PlantPowerVine,void(PlantPowerVine::*)(float)>
            (aDStack_68,aCStack_98);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onUseActionAnimCommand);
  Sexy::Delegate1<float>::Delegate1<PlantPowerVine,void(PlantPowerVine::*)(float)>
            (aDStack_38,aCStack_80);
  PlantAnimRig::SetPlantDelegates(param_1,aDStack_68,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantPowerVine::UpdateActions() */

void PlantPowerVine::UpdateActions(void)

{
  long in_x0;
  
  StateMachine<PlantState>::UpdateState((StateMachine<PlantState> *)(in_x0 + 0x28));
  return;
}

