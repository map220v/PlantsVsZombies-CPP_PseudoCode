// Class: ZombieZombossMech_Dino


/* ZombieZombossMech_Dino::CalcRenderOrder() const */

void ZombieZombossMech_Dino::CalcRenderOrder(void)

{
  Board::MakeRenderOrder(0x635d8,5,0);
  return;
}


/* non-virtual thunk to ZombieZombossMech_Dino::CalcRenderOrder() const */

void __thiscall ZombieZombossMech_Dino::CalcRenderOrder(ZombieZombossMech_Dino *this)

{
  CalcRenderOrder();
  return;
}


/* ZombieZombossMech_Dino::~ZombieZombossMech_Dino() */

void __thiscall ZombieZombossMech_Dino::~ZombieZombossMech_Dino(ZombieZombossMech_Dino *this)

{
  *(undefined ***)this = &PTR_GetClass_068f6ff0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieZombossMech_Dino_068f7bb0;
  ZombieZombossMech::~ZombieZombossMech((ZombieZombossMech *)this);
  return;
}


/* non-virtual thunk to ZombieZombossMech_Dino::~ZombieZombossMech_Dino() */

void __thiscall ZombieZombossMech_Dino::~ZombieZombossMech_Dino(ZombieZombossMech_Dino *this)

{
  ~ZombieZombossMech_Dino(this + -0x10);
  return;
}


/* ZombieZombossMech_Dino::~ZombieZombossMech_Dino() */

void __thiscall ZombieZombossMech_Dino::~ZombieZombossMech_Dino(ZombieZombossMech_Dino *this)

{
  ~ZombieZombossMech_Dino(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieZombossMech_Dino::~ZombieZombossMech_Dino() */

void __thiscall ZombieZombossMech_Dino::~ZombieZombossMech_Dino(ZombieZombossMech_Dino *this)

{
  ~ZombieZombossMech_Dino(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_Dino::StaticClassInit() */

void ZombieZombossMech_Dino::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieZombossMech_Dino");
    (*pcVar2)(plVar1,asStack_10,FUN_047f4b70,0x960,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieZombossMech_Dino::StaticGetClass() */

long * ZombieZombossMech_Dino::StaticGetClass(void)

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
  uVar2 = ZombieZombossMech::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieZombossMech_Dino",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieZombossMech_Dino::GetClass() const */

long * ZombieZombossMech_Dino::GetClass(void)

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
  uVar2 = ZombieZombossMech::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieZombossMech_Dino",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieZombossMech_Dino::ZombieZombossMech_Dino() */

void __thiscall ZombieZombossMech_Dino::ZombieZombossMech_Dino(ZombieZombossMech_Dino *this)

{
  ZombieZombossMech::ZombieZombossMech((ZombieZombossMech *)this);
  *(undefined ***)this = &PTR_GetClass_068f6ff0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieZombossMech_Dino_068f7bb0;
  return;
}


/* ZombieZombossMech_Dino::StaticNew() */

ZombieZombossMech_Dino * ZombieZombossMech_Dino::StaticNew(void)

{
  ZombieZombossMech_Dino *this;
  
  this = ::operator_new(0x960);
  ZombieZombossMech_Dino(this);
  return this;
}


/* ZombieZombossMech_Dino::onPopAnimCommand(std::string const&, float, std::string const&,
   std::string const&) */

void ZombieZombossMech_Dino::onPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_4,"hit_ground");
  if (!bVar1) {
    return;
  }
  Board::ShakeBoard(*(Board **)(gLawnApp + 0x9f0),5,-5,0.2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_Dino::OnRocketHitGround(ZombossRocket*) */

void __thiscall
ZombieZombossMech_Dino::OnRocketHitGround(ZombieZombossMech_Dino *this,ZombossRocket *param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  uint *puVar6;
  RtObject *this_00;
  ZombieZombossMechProps *pZVar7;
  ZombieZombossMechProps *pZVar8;
  ZombieZombossMechDinoProps *pZVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  Zombie *pZVar14;
  BoardEntity *pBVar15;
  ulong uVar16;
  Board *this_01;
  float fVar17;
  float local_98;
  float local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  undefined8 local_80;
  undefined8 local_78;
  ZombieZombossMech_Dino *local_68;
  int local_60;
  undefined1 auStack_58 [80];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar6 = (uint *)NetworkCacheQueue::getItemFragmentCache((NetworkCacheQueue *)param_1);
  uVar1 = puVar6[1];
  uVar2 = *puVar6;
  this_01 = *(Board **)(gLawnApp + 0x9f0);
  std::string::string((string *)&local_68,"");
  this_00 = (RtObject *)Board::GetPlantAt(this_01,uVar2,uVar1,(string *)&local_68);
  std::string::~string((string *)&local_68);
  nop();
  if (this_00 == (RtObject *)0x0) {
    pZVar7 = Zombie::GetProps<ZombieZombossMechProps>((Zombie *)this);
    pZVar8 = Zombie::GetProps<ZombieZombossMechProps>((Zombie *)this);
    ZombossRocket::CreateExplosionEffect
              (param_1,(string *)(pZVar7 + 0x220),(string *)(pZVar8 + 0x238));
    std::string::string((string *)&local_68,"Play_Zomb_Egypt_Zomboss_Attack_Projectile_Impact");
    RealObject::PlayPositionalSound((RealObject *)param_1,(string *)&local_68,0.0);
    std::string::~string((string *)&local_68);
    nop();
  }
  else {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_68);
    Plant::TakeSmashAttack((Plant *)this_00,(string *)&local_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
    pZVar7 = Zombie::GetProps<ZombieZombossMechProps>((Zombie *)this);
    pZVar8 = Zombie::GetProps<ZombieZombossMechProps>((Zombie *)this);
    ZombossRocket::CreateExplosionEffect
              (param_1,(string *)(pZVar7 + 0x220),(string *)(pZVar8 + 0x238));
    std::string::string((string *)&local_68,"Play_Zomb_Egypt_Zomboss_Attack_Projectile_Impact");
    RealObject::PlayPositionalSound((RealObject *)param_1,(string *)&local_68,0.0);
    std::string::~string((string *)&local_68);
    nop();
    if (*(code **)(*(long *)this_00 + 0x128) == BoardEntity::NeutralizeSplashDamage) {
      cVar3 = BoardEntity::NeutralizeSplashDamage();
    }
    else {
      cVar3 = (**(code **)(*(long *)this_00 + 0x128))(this_00);
    }
    if (cVar3 != '\0') goto LAB_047f7758;
  }
  pZVar9 = Zombie::GetProps<ZombieZombossMechDinoProps>((Zombie *)this);
  if ((0.0 < *(float *)(pZVar9 + 0x2a4)) && (0.0 < *(float *)(pZVar9 + 0x2a0))) {
    DamageInfo::DamageInfo((DamageInfo *)&local_68);
    local_60 = *(int *)(pZVar9 + 0x2a4);
    uVar16 = 0;
    local_68 = this;
    iVar5 = local_60;
    SetFlag<DamageTypeFlags>(auStack_58,0x2000000000,0);
    SetFlag<DamageTypeFlags>(auStack_58,0x800,0);
    ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
              ((ResistenceValueInfo *)&local_98);
    BoardTransforms::GridToBoardSpaceRect((BoardTransforms *)(ulong)*puVar6,puVar6[1],1,1,iVar5);
    fVar17 = *(float *)(pZVar9 + 0x2a0);
    uVar1 = puVar6[1];
    local_98 = (float)(local_90 + local_88 / 2);
    local_94 = (float)(local_8c + local_84 / 2);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
    uVar10 = operator|(2,4);
    uVar4 = operator|(uVar10,1);
    iVar5 = BoardConstants::GRIDSQUARE_WIDTH();
    EntityFinder::GetEntitiesTouchingCircle2D
              ((float)iVar5 * SQRT(*(float *)(pZVar9 + 0x2a0)),
               (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80,uVar4,
               (ResistenceValueInfo *)&local_98,uVar1 - (int)fVar17 / 2,(int)fVar17 / 2 + uVar1);
    uVar10 = local_80;
    lVar11 = FUN_047f385c(local_80,local_78);
    if (lVar11 != 0) {
      do {
        puVar12 = (undefined8 *)FUN_047f3868(uVar10,uVar16);
        uVar4 = FUN_047f3834(*(undefined4 *)(this + 0x24));
        cVar3 = RealObject::IsOnOpposingTeam(*puVar12,uVar4);
        uVar10 = local_80;
        if (cVar3 != '\0') {
          puVar12 = (undefined8 *)FUN_047f3868(local_80,uVar16);
          pZVar14 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar12);
          if (pZVar14 == (Zombie *)0x0) {
            uVar10 = local_80;
            if (this_00 != (RtObject *)0x0) {
              pBVar15 = Sexy::RtObject::Cast<BoardEntity>(this_00);
              uVar10 = local_80;
              puVar12 = (undefined8 *)FUN_047f3868(local_80,uVar16);
              if (pBVar15 == (BoardEntity *)*puVar12) goto LAB_047f7968;
            }
LAB_047f7a24:
            puVar12 = (undefined8 *)FUN_047f3868(uVar10,uVar16);
            (**(code **)(*(long *)*puVar12 + 0x110))((long *)*puVar12,(string *)&local_68);
            uVar10 = local_80;
          }
          else {
            cVar3 = (**(code **)(*(long *)pZVar14 + 0xb8))(pZVar14,7);
            uVar10 = local_80;
            if (cVar3 != '\0') {
              if (this_00 != (RtObject *)0x0) {
                pBVar15 = Sexy::RtObject::Cast<BoardEntity>(this_00);
                uVar10 = local_80;
                puVar12 = (undefined8 *)FUN_047f3868(local_80,uVar16);
                if (pBVar15 == (BoardEntity *)*puVar12) goto LAB_047f7968;
              }
              if (pZVar14 != (Zombie *)this) goto LAB_047f7a24;
            }
          }
        }
LAB_047f7968:
        uVar16 = uVar16 + 1;
        uVar13 = FUN_047f385c(uVar10,local_78);
      } while (uVar16 < uVar13);
    }
    Board::ShakeBoard(*(Board **)(gLawnApp + 0x9f0),3,-4,0.25);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
    DamageInfo::~DamageInfo((DamageInfo *)&local_68);
  }
LAB_047f7758:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x047f8ac4 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* ZombieZombossMech_Dino::Retreat(ZombieState) */

void __thiscall ZombieZombossMech_Dino::Retreat(ZombieZombossMech_Dino *this,int param_2)

{
  ZombieWithActions *pZVar1;
  ZombossDinoWalkActionHandler *pZVar2;
  Point local_18 [8];
  RtWeakPtr<Sexy::SoundResource> local_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = (ZombieWithActions *)ZombieZombossMech::getActiveStage((ZombieZombossMech *)this);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(local_10,(RtWeakPtrBase *)(pZVar1 + 0x20));
  pZVar2 = ZombieWithActions::QueueAction<ZombossDinoWalkActionHandler>(pZVar1,local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
  Sexy::Point::Point(local_18);
  if (param_2 == 0x27) {
    FUN_047f677c(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
    ZombossBattleModule::GetDeathLocation();
  }
  else {
    ZombieZombossMech::PickRetreatTarget((ZombieZombossMech *)this,local_18);
  }
  ZombossWalkActionHandler::SetWalkTarget((ZombossWalkActionHandler *)pZVar2,local_18,0);
  ZombieCamelTouch::SetCardType((ZombieCamelTouch *)this,param_2);
  Zombie::setZombieState((Zombie *)this,0x1f,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieZombossMech_Dino::onUpdate() */

void __thiscall ZombieZombossMech_Dino::onUpdate(ZombieZombossMech_Dino *this)

{
  ZombieZombossMech_Dino ZVar1;
  char cVar2;
  ZombieHydraHeadAnimRig *pZVar3;
  long lVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  
  fVar6 = (float)PVZ_Dt();
  fVar7 = (float)ZombieZombossMech::GetZomboss_T_Modifier((ZombieZombossMech *)this);
  *(float *)(this + 0x900) = *(float *)(this + 0x900) + fVar6 * fVar7;
  if (this[0x90b] == (ZombieZombossMech_Dino)0x0) {
    fVar6 = (float)FUN_0470dae4(*(undefined4 *)(this + 0x280));
    fVar7 = (float)FUN_0470daf0(*(undefined4 *)(this + 0x284));
    if (fVar6 < fVar7 * 0.5) {
      pZVar3 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
      pcVar5 = *(code **)(*(long *)pZVar3 + 0x288);
      lVar4 = ZombieZombossMech::getActiveStage((ZombieZombossMech *)this);
      (*pcVar5)(pZVar3,*(undefined4 *)(lVar4 + 0xc));
      this[0x90b] = (ZombieZombossMech_Dino)0x1;
      ZVar1 = this[0x90a];
      goto joined_r0x047103e8;
    }
  }
  ZVar1 = this[0x90a];
joined_r0x047103e8:
  if ((ZVar1 != (ZombieZombossMech_Dino)0x0) &&
     (cVar2 = Zombie::HasCondition(this,2), cVar2 == '\0')) {
    this[0x90a] = (ZombieZombossMech_Dino)0x0;
    (**(code **)(*(long *)this + 0xa80))(this,0x24);
    Zombie::onUpdate((Zombie *)this);
    return;
  }
  Zombie::onUpdate((Zombie *)this);
  return;
}

