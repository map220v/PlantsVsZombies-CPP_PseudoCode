// Class: PhantomParkourProjectile


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PhantomParkourProjectile::StaticClassInit() */

void PhantomParkourProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"PhantomParkourProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04d5634c,0x2e8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PhantomParkourProjectile::StaticGetClass() */

long * PhantomParkourProjectile::StaticGetClass(void)

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
  uVar2 = mutationParkourProjectile::StaticGetClass();
  (*pcVar3)(plVar1,"PhantomParkourProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PhantomParkourProjectile::GetClass() const */

long * PhantomParkourProjectile::GetClass(void)

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
  uVar2 = mutationParkourProjectile::StaticGetClass();
  (*pcVar3)(plVar1,"PhantomParkourProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PhantomParkourProjectile::handleImpact(BoardEntity*) */

ulong __thiscall
PhantomParkourProjectile::handleImpact(PhantomParkourProjectile *this,BoardEntity *param_1)

{
  ulong uVar1;
  
  if ((byte)this[0x22c] != 0) {
    return (ulong)(uint)(byte)this[0x22c];
  }
  uVar1 = mutationParkourProjectile::handleImpact((mutationParkourProjectile *)this,param_1);
  return uVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PhantomParkourProjectile::moveZombieByRows(Zombie*, int) */

void __thiscall
PhantomParkourProjectile::moveZombieByRows
          (PhantomParkourProjectile *this,Zombie *param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  ZombieTosserSubSystem *pZVar3;
  undefined8 local_60;
  undefined4 local_58;
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar2 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)param_1);
  local_60 = *puVar2;
  local_58 = *(undefined4 *)(puVar2 + 1);
  iVar1 = BoardConstants::GRIDSQUARE_HEIGHT();
  local_60._4_4_ = (float)(iVar1 * param_2) + local_60._4_4_;
  iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
  local_60 = CONCAT44(local_60._4_4_,(float)iVar1 + (float)local_60);
  pZVar3 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_50);
  ZombieTosserSubSystem::LaunchZombie
            ((ZombieTosserSubSystem *)0x42a00000,0x3f800000,pZVar3,param_1,&local_60,aRStack_50,1);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PhantomParkourProjectile::PhantomEffect() */

void __thiscall PhantomParkourProjectile::PhantomEffect(PhantomParkourProjectile *this)

{
  char cVar1;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar2;
  SexyVector3 *pSVar3;
  string asStack_28 [8];
  RtMixedPtrBase aRStack_20 [8];
  ResistenceValueInfo aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Projectile::getProps((Projectile *)this);
  (**(code **)(*(long *)this + 0x180))(asStack_28,this);
  cVar1 = FUN_0547419c(asStack_28);
  if (cVar1 == '\0') {
    GetPAMByName(asStack_28);
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_20);
    if (cVar1 != '\0') {
      ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo(aRStack_18);
      Projectile::calcRandomSplatOffset((Projectile *)this,(SexyVector2 *)aRStack_18);
      this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
      pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_20);
      Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar2,(RtClass *)0x0);
      Effect_PopAnim::SetCentered(this_00,true);
      pSVar3 = (SexyVector3 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              *)this);
      StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,pSVar3,-1);
      FUN_04d4ee64(this_00 + 0x1c,*(int *)(this + 0x50) + 1);
      std::string::string(asStack_10,"attack_lv5");
      Effect_PopAnim::PlaySingleAnimation(this_00,asStack_10,0);
      std::string::~string(asStack_10);
      nop();
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  }
  std::string::~string(asStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PhantomParkourProjectile::TossAndDamage() */

void __thiscall PhantomParkourProjectile::TossAndDamage(PhantomParkourProjectile *this)

{
  PhantomParkourProjectile PVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  RtWeakPtrBase *pRVar5;
  RtObject *pRVar6;
  Zombie *this_00;
  undefined8 uVar7;
  PopAnimRig *pPVar8;
  code *pcVar9;
  RtWeakPtr aRStack_50 [8];
  undefined8 local_48;
  undefined8 local_40;
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x240));
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x240));
  do {
    PVar1 = (PhantomParkourProjectile)
            __gnu_cxx::operator!=((__normal_iterator *)&local_48,(__normal_iterator *)&local_40);
    if (!(bool)PVar1) {
      std::string::string((string *)&local_40,"Play_Plant_Mandrake_Lv5attack");
      RealObject::PlayPositionalSound((RealObject *)this,(string *)&local_40,0.0);
      std::string::~string((string *)&local_40);
      nop();
      this[0x22c] = PVar1;
      *(undefined4 *)(this + 0x204) = 2;
      Projectile::SetVelocity((Projectile *)this,(SexyVector3 *)(this + 0x1ec));
      pPVar8 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
      PopAnimRig::SetLayerVisibility(pPVar8,(vector *)(this + 0x2b8),(bool)PVar1);
      pPVar8 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
      PopAnimRig::SetLayerVisibility(pPVar8,(vector *)(this + 0x2a0),true);
      if (this[0x20c] != (PhantomParkourProjectile)0x0) {
        pPVar8 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
        PopAnimRig::SetLayerVisibility(pPVar8,(vector *)(this + 0x288),(bool)PVar1);
        pPVar8 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
        PopAnimRig::SetLayerVisibility(pPVar8,(vector *)(this + 0x270),true);
        FUN_04d4eeac(this + 0x208,1);
      }
      pPVar8 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
      std::string::string((string *)&local_40,"run");
      Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
      PopAnimRig::PlayAndContinue(pPVar8,(string *)&local_40,0,aDStack_38);
      std::string::~string((string *)&local_40);
      nop();
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pRVar5 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_50,pRVar5);
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_50);
    if (cVar2 != '\0') {
      bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_50);
      if (bVar3) {
        pRVar6 = (RtObject *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
        bVar3 = Sexy::RtObject::IsA<Zombie>(pRVar6);
        if (bVar3) {
          pRVar6 = (RtObject *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
          this_00 = Sexy::RtObject::Cast<Zombie>(pRVar6);
          if ((((this_00 != (Zombie *)0x0) &&
               (cVar2 = RealObject::IsOnTeam(this_00,1), cVar2 == '\0')) &&
              (cVar2 = FUN_04d500b4(*(undefined4 *)(this_00 + 0xcc)), cVar2 == '\0')) &&
             ((iVar4 = Zombie::GetInvisibleState(this_00), iVar4 != 2 &&
              (cVar2 = (**(code **)(*(long *)this_00 + 0x328))(this_00), cVar2 == '\0')))) {
            iVar4 = Zombie::GetSizeType(this_00);
            if ((iVar4 == 2) && (cVar2 = Zombie::IsBoss(this_00), cVar2 == '\0')) {
              bVar3 = Sexy::RtObject::IsA<ZombieBumperCar>((RtObject *)this_00);
              if (!bVar3) {
                ParkourProjectile::stunZombie((ParkourProjectile *)this,this_00,6.0);
                (**(code **)(*(long *)this_00 + 0x260))(this_00);
              }
            }
            else {
              cVar2 = ParkourProjectile::canZombieLaunch((ParkourProjectile *)this,this_00);
              if (cVar2 != '\0') {
                cVar2 = ZombieLaneChangingSubsystem::CanZombieMoveDown(this_00);
                if (cVar2 == '\0') {
                  cVar2 = ZombieLaneChangingSubsystem::CanZombieMoveUp(this_00);
                  if (cVar2 != '\0') {
                    moveZombieByRows(this,this_00,-1);
                  }
                }
                else {
                  moveZombieByRows(this,this_00,1);
                }
                (**(code **)(*(long *)this_00 + 0x260))(this_00);
              }
            }
            Zombie::SetIgnoresAllDamage(this_00,false);
            pcVar9 = *(code **)(*(long *)this + 0x1b0);
            uVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
            (*pcVar9)(this,uVar7);
          }
          goto LAB_04d5201c;
        }
      }
      bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_50);
      if (bVar3) {
        pRVar6 = (RtObject *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
        bVar3 = Sexy::RtObject::IsA<GridItem>(pRVar6);
        if (bVar3) {
          pcVar9 = *(code **)(*(long *)this + 0x1b0);
          uVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
          (*pcVar9)(this,uVar7);
        }
      }
    }
LAB_04d5201c:
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_48);
  } while( true );
}


/* PhantomParkourProjectile::~PhantomParkourProjectile() */

void __thiscall PhantomParkourProjectile::~PhantomParkourProjectile(PhantomParkourProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_069b2be0;
  *(undefined ***)(this + 0x10) = &PTR__PhantomParkourProjectile_069b2dd8;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x2d0));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x2b8));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x2a0));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x288));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x270));
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 600));
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x240));
  mutationParkourProjectile::~mutationParkourProjectile((mutationParkourProjectile *)this);
  return;
}


/* non-virtual thunk to PhantomParkourProjectile::~PhantomParkourProjectile() */

void __thiscall PhantomParkourProjectile::~PhantomParkourProjectile(PhantomParkourProjectile *this)

{
  ~PhantomParkourProjectile(this + -0x10);
  return;
}


/* PhantomParkourProjectile::~PhantomParkourProjectile() */

void __thiscall PhantomParkourProjectile::~PhantomParkourProjectile(PhantomParkourProjectile *this)

{
  ~PhantomParkourProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PhantomParkourProjectile::~PhantomParkourProjectile() */

void __thiscall PhantomParkourProjectile::~PhantomParkourProjectile(PhantomParkourProjectile *this)

{
  ~PhantomParkourProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PhantomParkourProjectile::PhantomParkourProjectile() */

void __thiscall PhantomParkourProjectile::PhantomParkourProjectile(PhantomParkourProjectile *this)

{
  string *psVar1;
  string *psVar2;
  undefined4 uVar3;
  string asStack_c0 [8];
  string asStack_b8 [8];
  string asStack_b0 [8];
  string asStack_a8 [8];
  string asStack_a0 [8];
  string asStack_98 [8];
  string asStack_90 [8];
  string asStack_88 [8];
  string asStack_80 [8];
  string asStack_78 [8];
  string asStack_70 [8];
  string asStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  string asStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [8];
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  mutationParkourProjectile::mutationParkourProjectile((mutationParkourProjectile *)this);
  this[0x22c] = (PhantomParkourProjectile)0x1;
  *(undefined ***)this = &PTR_GetClass_069b2be0;
  *(undefined ***)(this + 0x10) = &PTR__PhantomParkourProjectile_069b2dd8;
  DVec3::DVec3((DVec3 *)(this + 0x234));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x240));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 600));
  std::string::string(asStack_b8,"003");
  std::string::string(asStack_b0,"005");
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x270),asStack_b8,2,
             asStack_c0);
  std::string::~string(asStack_b0);
  std::string::~string(asStack_b8);
  nop();
  nop();
  std::string::string(asStack_b8,"y02");
  std::string::string(asStack_b0,"y01");
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x288),asStack_b8,2,
             asStack_c0);
  std::string::~string(asStack_b0);
  std::string::~string(asStack_b8);
  nop();
  nop();
  std::string::string(asStack_b8,"zuojiao");
  std::string::string(asStack_b0,"y08");
  std::string::string(asStack_a8,"y07");
  std::string::string(asStack_a0," y09");
  std::string::string(asStack_98,"y10");
  std::string::string(asStack_90,"y11");
  std::string::string(asStack_88,"shenti_01");
  std::string::string(asStack_80,"shenti_02");
  std::string::string(asStack_78,"shenti_03");
  std::string::string(asStack_70,"shenti_04");
  std::string::string(asStack_68,"youjiao");
  std::string::string(asStack_60,"zui01");
  std::string::string(asStack_58,"m1");
  std::string::string(asStack_50,"m2");
  std::string::string(asStack_48,"y05");
  std::string::string(asStack_40,"y06");
  std::string::string(asStack_38,"y4");
  std::string::string(asStack_30,"y3");
  std::string::string(asStack_28,"y01");
  std::string::string(asStack_20,"y02");
  std::string::string(asStack_18,"shenti03");
  std::string::string(asStack_10,"shenti02");
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x2a0),asStack_b8,0x16,
             asStack_c0);
  psVar2 = asStack_10;
  do {
    psVar1 = psVar2 + -8;
    std::string::~string(psVar2);
    psVar2 = psVar1;
  } while (psVar1 != asStack_c0);
  psVar2 = (string *)&local_8;
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  std::string::string(asStack_b8,"001");
  std::string::string(asStack_b0,"002");
  std::string::string(asStack_a8,"004");
  std::string::string(asStack_a0,"006");
  std::string::string(asStack_98,"007");
  std::string::string(asStack_90,"008");
  std::string::string(asStack_88,"009");
  std::string::string(asStack_80,"010");
  std::string::string(asStack_78,"011");
  std::string::string(asStack_70,"012");
  std::string::string(asStack_68,"013");
  std::string::string(asStack_60,"014");
  std::string::string(asStack_58,"015");
  std::string::string(asStack_50,"016");
  std::string::string(asStack_48,"017");
  std::string::string(asStack_40,"018");
  std::string::string(asStack_38,"019");
  std::string::string(asStack_30,"020");
  std::string::string(asStack_28,"021");
  std::string::string(asStack_20,"022");
  std::string::string(asStack_18,"023");
  std::string::string(asStack_10,"024");
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x2b8),asStack_b8,0x16,
             asStack_c0);
  do {
    psVar2 = psVar2 + -8;
    std::string::~string(psVar2);
  } while (psVar2 != asStack_b8);
  psVar2 = asStack_18;
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  std::string::string(asStack_b8,"024");
  std::string::string(asStack_b0,"025");
  std::string::string(asStack_a8,"026");
  std::string::string(asStack_a0,"027");
  std::string::string(asStack_98,"028");
  std::string::string(asStack_90,"029");
  std::string::string(asStack_88,"030");
  std::string::string(asStack_80,"031");
  std::string::string(asStack_78,"032");
  std::string::string(asStack_70,"033");
  std::string::string(asStack_68,"034");
  std::string::string(asStack_60,"035");
  std::string::string(asStack_58,"037");
  std::string::string(asStack_50,"038");
  std::string::string(asStack_48,"039");
  std::string::string(asStack_40,"040");
  std::string::string(asStack_38,"041");
  std::string::string(asStack_30,"042");
  std::string::string(asStack_28,"043");
  std::string::string(asStack_20,"044");
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x2d0),asStack_b8,0x14,
             asStack_c0);
  do {
    psVar2 = psVar2 + -8;
    std::string::~string(psVar2);
  } while (psVar2 != asStack_b8);
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  uVar3 = PVZ_T();
  *(undefined4 *)(this + 0x230) = uVar3;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PhantomParkourProjectile::StaticNew() */

PhantomParkourProjectile * PhantomParkourProjectile::StaticNew(void)

{
  PhantomParkourProjectile *this;
  
  this = ::operator_new(0x2e8);
  PhantomParkourProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PhantomParkourProjectile::onUpdate(float) */

void __thiscall PhantomParkourProjectile::onUpdate(PhantomParkourProjectile *this,float param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  float *pfVar6;
  long lVar7;
  SexyVector3 *pSVar8;
  Zombie *this_00;
  RtObject *pRVar9;
  GridItem *pGVar10;
  ResourceInfo *pRVar11;
  PopAnimRig *pPVar12;
  code *pcVar13;
  undefined8 local_80;
  undefined8 local_78;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_70 [8];
  ResourceInfo *local_68;
  Insets aIStack_60 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_50 [24];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x22c] == (PhantomParkourProjectile)0x0) {
    ParkourProjectile::onUpdate(param_1);
  }
  else {
    cVar1 = std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
            empty((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
                   *)(this + 0x240));
    if (cVar1 == '\0') {
      pfVar6 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                       *)this);
      if (*(float *)(this + 0x234) <= *pfVar6) {
        TossAndDamage(this);
      }
    }
    else {
      iVar3 = FUN_04d4ee6c(*(undefined4 *)(this + 0xa8));
      lVar7 = ParkourProjectile::findNextTarget((ParkourProjectile *)this,iVar3,0);
      if (lVar7 != 0) {
        pSVar8 = (SexyVector3 *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                *)this);
        iVar3 = BoardTransforms::BoardSpaceToGridX(*(float *)pSVar8);
        iVar4 = FUN_04d4ee6c(*(undefined4 *)(this + 0xa8));
        Sexy::Insets::Insets(aIStack_60,iVar3,iVar4,4,1);
        std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_50);
        uVar5 = operator|(2,4);
        EntityFinder::GetEntitiesInGridSquares(avStack_50,uVar5,aIStack_60);
        cVar1 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty
                          ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_50);
        if (cVar1 == '\0') {
          local_80 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                              *)avStack_50);
          local_78 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)avStack_50);
          while (bVar2 = __gnu_cxx::operator!=
                                   ((__normal_iterator *)&local_80,(__normal_iterator *)&local_78),
                bVar2) {
            std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_80);
            ToolPacketData::GetProps();
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)aRStack_70,(RtWeakPtrBase *)&local_68);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
            pRVar9 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70);
            bVar2 = Sexy::RtObject::IsA<Zombie>(pRVar9);
            if (bVar2) {
              pRVar9 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70);
              this_00 = Sexy::RtObject::Cast<Zombie>(pRVar9);
              iVar3 = Zombie::GetInvisibleState(this_00);
              if (((((iVar3 != 2) && (cVar1 = Zombie::IsIgnoringAllDamage(this_00), cVar1 == '\0'))
                   && (cVar1 = RealObject::IsOnTeam(this_00,1), cVar1 == '\0')) &&
                  ((cVar1 = FUN_04d500b4(*(undefined4 *)(this_00 + 0xcc)), cVar1 == '\0' &&
                   (iVar3 = Zombie::GetInvisibleState(this_00), iVar3 != 2)))) &&
                 ((cVar1 = (**(code **)(*(long *)this_00 + 0x328))(this_00), cVar1 == '\0' &&
                  (cVar1 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar1 == '\0')))) {
                cVar1 = Zombie::IsBoss(this_00);
                if ((cVar1 == '\0') &&
                   (cVar1 = Zombie::CanBeLaunchedByPlants(this_00), cVar1 != '\0')) {
                  (**(code **)(*(long *)this_00 + 600))(this_00);
                  Zombie::SetIgnoresAllDamage(this_00,true);
                }
                std::
                vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
                push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
                           *)(this + 0x240),(RtWeakPtr *)aRStack_70);
                local_68 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_70);
                std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                          ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)(this + 0x1c8),
                           (BoardEntity **)&local_68);
              }
            }
            else {
              pRVar9 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70);
              bVar2 = Sexy::RtObject::IsA<GridItem>(pRVar9);
              if (bVar2) {
                pRVar9 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70);
                pGVar10 = Sexy::RtObject::Cast<GridItem>(pRVar9);
                if (((pGVar10 != (GridItem *)0x0) &&
                    ((cVar1 = RealObject::IsOnTeam(pGVar10,1), cVar1 == '\0' ||
                     (cVar1 = (**(code **)(*(long *)pGVar10 + 0x208))(pGVar10), cVar1 == '\0')))) &&
                   ((cVar1 = RealObject::IsOnTeam(pGVar10,2), cVar1 == '\0' ||
                    (cVar1 = (**(code **)(*(long *)pGVar10 + 0x200))(pGVar10), cVar1 == '\0')))) {
                  pcVar13 = *(code **)(*(long *)this + 0x1b0);
                  pRVar11 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_70)
                  ;
                  (*pcVar13)(this,pRVar11);
                }
              }
            }
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
            eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                      ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_80);
          }
          Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x234),pSVar8);
          iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
          *(float *)(this + 0x234) = *(float *)(this + 0x234) + (float)(iVar3 * 3);
          Projectile::SetVelocity
                    ((Projectile *)this,*(float *)(this + 0x1ec) * 3.0,*(float *)(this + 0x1f0),
                     *(float *)(this + 500));
          pPVar12 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
          PopAnimRig::SetLayerVisibility(pPVar12,(vector *)(this + 0x2d0),true);
          pPVar12 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
          std::string::string((string *)&local_68,"run_lv5_02");
          Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
          PopAnimRig::PlayAndContinue
                    (pPVar12,(RtWeakPtr<Sexy::ResourceInfo> *)&local_68,0,aDStack_38);
          std::string::~string((string *)&local_68);
          nop();
          PhantomEffect(this);
        }
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_50);
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
/* PhantomParkourProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall
PhantomParkourProjectile::OnCollideEntity(PhantomParkourProjectile *this,BoardEntity *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  PhantomParkourProjectile PVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  Zombie *this_01;
  float *pfVar8;
  Effect_PopAnim *this_02;
  ResourceInfo *pRVar9;
  float fVar10;
  float fVar11;
  string asStack_30 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  undefined8 local_20;
  undefined8 local_18 [2];
  long local_8;
  
  PVar2 = this[0x22c];
  local_8 = ___stack_chk_guard;
  if (PVar2 == (PhantomParkourProjectile)0x0) {
    PVar2 = (PhantomParkourProjectile)
            ParkourProjectile::OnCollideEntity((ParkourProjectile *)this,param_1);
  }
  else {
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)(this + 600);
    uVar5 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin(this_00);
    uVar6 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end(this_00);
    ToolPacketData::GetProps();
    local_20 = std::
               find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<BoardEntity>*,std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>,Sexy::RtWeakPtr<GameObject>>
                         (uVar5,uVar6,aRStack_28);
    local_18[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end(this_00);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
    if (bVar1) {
      lVar7 = Projectile::getProps((Projectile *)this);
      if (param_1 == (BoardEntity *)0x0) {
        this_01 = (Zombie *)0x0;
      }
      else {
        this_01 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
      }
      (**(code **)(*(long *)this + 0x180))(asStack_30,this);
      cVar3 = FUN_0547419c(asStack_30);
      if (cVar3 == '\0') {
        GetPAMByName(asStack_30);
        cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_28);
        if (cVar3 != '\0') {
          ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
                    ((ResistenceValueInfo *)&local_20);
          Projectile::calcRandomSplatOffset((Projectile *)this,(SexyVector2 *)&local_20);
          if ((param_1 == (BoardEntity *)0x0) || (*(char *)(lVar7 + 0x6d) == '\0')) {
            fVar11 = (local_20._4_4_ + *(float *)(this + 0x1c)) - *(float *)(this + 0x20);
            fVar10 = (float)local_20 + *(float *)(this + 0x18);
          }
          else {
            pfVar8 = (float *)std::
                              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                             *)param_1);
            fVar11 = (local_20._4_4_ + pfVar8[1]) - pfVar8[2];
            fVar10 = (float)local_20 + *pfVar8;
          }
          this_02 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
          pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_28);
          Effect_PopAnim::CreatePopAnimRig(this_02,(PopAnim *)pRVar9,(RtClass *)0x0);
          Effect_PopAnim::SetCentered(this_02,true);
          EATextSquish::Vec3::Vec3((Vec3 *)local_18,fVar10,fVar11,0.0);
          StandaloneEffect::SetBoardSpaceOrigin
                    ((StandaloneEffect *)this_02,(SexyVector3 *)local_18,-1);
          FUN_04d4ee64(this_02 + 0x1c,*(int *)(this + 0x50) + 1);
          if ((this_01 != (Zombie *)0x0) && (iVar4 = Zombie::GetSizeType(this_01), iVar4 == 2)) {
            std::string::string((string *)local_18,"idle01");
            Effect_PopAnim::PlayLoopingAnimation
                      ((Effect_PopAnim *)0x40400000,this_02,(Vec3 *)local_18,0);
            std::string::~string((string *)local_18);
            nop();
          }
          std::string::string((string *)local_18,"idle01");
          Effect_PopAnim::PlaySingleAnimation(this_02,(Vec3 *)local_18,0);
          std::string::~string((string *)local_18);
          nop();
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
      }
      std::string::~string(asStack_30);
      PVar2 = (PhantomParkourProjectile)0x1;
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(PVar2);
  }
  return;
}

